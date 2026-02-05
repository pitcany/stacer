#!/bin/bash
# Stacer Run Script
#
# Usage: ./scripts/run.sh [--debug] [-- STACER_ARGS...]
#
# Options:
#   --debug         Run under gdb
#   --              Pass remaining arguments to Stacer

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
BUILD_DIR="${PROJECT_ROOT}/build"

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
NC='\033[0m'

log_info()  { echo -e "${BLUE}[INFO]${NC} $*"; }
log_ok()    { echo -e "${GREEN}[OK]${NC} $*"; }
log_warn()  { echo -e "${YELLOW}[WARN]${NC} $*"; }
log_error() { echo -e "${RED}[ERROR]${NC} $*" >&2; }

# Find the binary
find_binary() {
    local BINARY_PATH=""

    # Check common output locations
    if [[ -f "${BUILD_DIR}/output/stacer" ]]; then
        BINARY_PATH="${BUILD_DIR}/output/stacer"
    elif [[ -f "${BUILD_DIR}/output/bin/stacer" ]]; then
        BINARY_PATH="${BUILD_DIR}/output/bin/stacer"
    elif [[ -f "${BUILD_DIR}/stacer/stacer" ]]; then
        BINARY_PATH="${BUILD_DIR}/stacer/stacer"
    fi

    if [[ -z "$BINARY_PATH" ]]; then
        log_error "Stacer binary not found!"
        log_error "Please build first with: ./scripts/build.sh"
        exit 1
    fi

    if [[ ! -x "$BINARY_PATH" ]]; then
        log_error "Binary exists but is not executable: $BINARY_PATH"
        exit 1
    fi

    echo "$BINARY_PATH"
}

# Set up Qt environment if needed
setup_qt_env() {
    # Get Qt plugin path from qmake if available
    if command -v qmake &>/dev/null; then
        local QT_PLUGIN_DIR
        QT_PLUGIN_DIR=$(qmake -query QT_INSTALL_PLUGINS 2>/dev/null || true)
        if [[ -n "$QT_PLUGIN_DIR" ]] && [[ -d "$QT_PLUGIN_DIR" ]]; then
            export QT_PLUGIN_PATH="${QT_PLUGIN_DIR}:${QT_PLUGIN_PATH:-}"
        fi
    fi

    # Ensure XCB platform plugin can be found
    # This is typically at /usr/lib/x86_64-linux-gnu/qt5/plugins on Ubuntu
    local COMMON_PLUGIN_PATHS=(
        "/usr/lib/x86_64-linux-gnu/qt5/plugins"
        "/usr/lib/qt5/plugins"
        "/usr/lib/aarch64-linux-gnu/qt5/plugins"
    )

    for path in "${COMMON_PLUGIN_PATHS[@]}"; do
        if [[ -d "$path" ]]; then
            export QT_PLUGIN_PATH="${path}:${QT_PLUGIN_PATH:-}"
        fi
    done

    # Set QT_QPA_PLATFORM if not set and we're in a display environment
    if [[ -z "${QT_QPA_PLATFORM:-}" ]]; then
        if [[ -n "${WAYLAND_DISPLAY:-}" ]]; then
            # Prefer xcb for compatibility, but allow wayland
            export QT_QPA_PLATFORM="${QT_QPA_PLATFORM:-xcb}"
        elif [[ -n "${DISPLAY:-}" ]]; then
            export QT_QPA_PLATFORM="xcb"
        fi
    fi
}

# Check for common runtime issues
check_runtime_deps() {
    local ISSUES=()

    # Check for display
    if [[ -z "${DISPLAY:-}" ]] && [[ -z "${WAYLAND_DISPLAY:-}" ]]; then
        ISSUES+=("No DISPLAY or WAYLAND_DISPLAY environment variable set")
    fi

    # Check for XCB platform plugin dependencies
    local XCB_LIBS=(
        "libxcb-xinerama.so.0"
        "libxcb-cursor.so.0"
    )

    for lib in "${XCB_LIBS[@]}"; do
        if ! ldconfig -p 2>/dev/null | grep -q "$lib"; then
            ISSUES+=("Missing library: $lib (try: sudo apt install libxcb-xinerama0 libxcb-cursor0)")
        fi
    done

    if [[ ${#ISSUES[@]} -gt 0 ]]; then
        log_warn "Potential runtime issues detected:"
        for issue in "${ISSUES[@]}"; do
            log_warn "  - $issue"
        done
        echo ""
    fi
}

# Print usage
usage() {
    cat <<EOF
Stacer Run Script

Usage: $0 [OPTIONS] [-- STACER_ARGS...]

Options:
    --debug         Run under gdb debugger
    --strace        Run under strace for debugging
    --help          Show this help message

Stacer Options (pass after --):
    --hide          Launch minimized to system tray
    --nosplash      Skip splash screen
    --version       Show version
    --help          Show Stacer help

Examples:
    $0                      # Run Stacer
    $0 --debug              # Run under gdb
    $0 -- --hide            # Run minimized
    $0 -- --nosplash        # Run without splash screen

Environment Variables:
    QT_PLUGIN_PATH          Override Qt plugin search path
    QT_QPA_PLATFORM         Force Qt platform (xcb, wayland, offscreen)
    QT_DEBUG_PLUGINS=1      Debug Qt plugin loading
EOF
}

# Main
main() {
    local USE_GDB=false
    local USE_STRACE=false
    local STACER_ARGS=()

    while [[ $# -gt 0 ]]; do
        case "$1" in
            --debug)
                USE_GDB=true
                shift
                ;;
            --strace)
                USE_STRACE=true
                shift
                ;;
            --help|-h)
                usage
                exit 0
                ;;
            --)
                shift
                STACER_ARGS=("$@")
                break
                ;;
            *)
                STACER_ARGS+=("$1")
                shift
                ;;
        esac
    done

    local BINARY_PATH
    BINARY_PATH=$(find_binary)

    log_info "Binary: $BINARY_PATH"

    setup_qt_env
    check_runtime_deps

    if [[ "$USE_GDB" == true ]]; then
        log_info "Running under gdb..."
        exec gdb -ex run --args "$BINARY_PATH" "${STACER_ARGS[@]}"
    elif [[ "$USE_STRACE" == true ]]; then
        log_info "Running under strace..."
        exec strace -f -e openat "$BINARY_PATH" "${STACER_ARGS[@]}"
    else
        log_info "Starting Stacer..."
        exec "$BINARY_PATH" "${STACER_ARGS[@]}"
    fi
}

main "$@"
