#!/bin/bash
# Stacer Ubuntu Build Bootstrap Script
# Supports Ubuntu 22.04 (Jammy) and Ubuntu 24.04 (Noble)
#
# Usage: ./scripts/bootstrap-ubuntu-build.sh [--deps-only] [--build] [--run]
#   --deps-only : Only install dependencies, don't build
#   --build     : Install deps and build (default)
#   --run       : Install deps, build, and run

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
BUILD_DIR="${PROJECT_ROOT}/build"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

log_info()  { echo -e "${BLUE}[INFO]${NC} $*"; }
log_ok()    { echo -e "${GREEN}[OK]${NC} $*"; }
log_warn()  { echo -e "${YELLOW}[WARN]${NC} $*"; }
log_error() { echo -e "${RED}[ERROR]${NC} $*" >&2; }

# Detect Ubuntu version
detect_ubuntu_version() {
    if [[ ! -f /etc/os-release ]]; then
        log_error "Cannot detect OS: /etc/os-release not found"
        exit 1
    fi

    source /etc/os-release

    if [[ "${ID:-}" != "ubuntu" ]]; then
        log_error "This script is designed for Ubuntu. Detected: ${ID:-unknown}"
        log_warn "You may try to adapt the package names for your distribution."
        exit 1
    fi

    UBUNTU_VERSION="${VERSION_ID:-}"
    UBUNTU_CODENAME="${VERSION_CODENAME:-}"

    case "$UBUNTU_VERSION" in
        22.04)
            log_info "Detected Ubuntu 22.04 (Jammy Jellyfish)"
            ;;
        24.04)
            log_info "Detected Ubuntu 24.04 (Noble Numbat)"
            ;;
        *)
            log_warn "Untested Ubuntu version: $UBUNTU_VERSION ($UBUNTU_CODENAME)"
            log_warn "Proceeding anyway - packages may differ"
            ;;
    esac
}

# Install build dependencies
install_build_deps() {
    log_info "Installing build dependencies..."

    # Core build tools
    local BUILD_TOOLS=(
        build-essential
        cmake
        pkg-config
        git
    )

    # Qt5 development packages (same for 22.04 and 24.04)
    local QT5_DEV_PACKAGES=(
        qtbase5-dev
        qtbase5-dev-tools
        qttools5-dev
        qttools5-dev-tools
        libqt5svg5-dev
        libqt5charts5-dev
    )

    # Runtime dependencies for xcb platform plugin
    local RUNTIME_DEPS=(
        libxcb-xinerama0
        libxcb-cursor0
        libxcb-icccm4
        libxcb-image0
        libxcb-keysyms1
        libxcb-randr0
        libxcb-render-util0
        libxcb-shape0
        libxkbcommon-x11-0
        libgl1
    )

    # Optional: for running tests or development
    local OPTIONAL_DEPS=(
        gdb
        strace
        qt5-qmake
    )

    log_info "Updating package lists..."
    sudo apt-get update

    log_info "Installing core build tools..."
    sudo apt-get install -y "${BUILD_TOOLS[@]}"

    log_info "Installing Qt5 development packages..."
    sudo apt-get install -y "${QT5_DEV_PACKAGES[@]}"

    log_info "Installing runtime dependencies..."
    sudo apt-get install -y "${RUNTIME_DEPS[@]}"

    log_info "Installing optional development tools..."
    sudo apt-get install -y "${OPTIONAL_DEPS[@]}" || log_warn "Some optional packages failed to install (non-critical)"

    log_ok "All dependencies installed successfully"
}

# Verify Qt5 installation
verify_qt5() {
    log_info "Verifying Qt5 installation..."

    if ! command -v qmake &>/dev/null; then
        log_error "qmake not found in PATH"
        return 1
    fi

    local QT_VERSION
    QT_VERSION=$(qmake -query QT_VERSION 2>/dev/null || echo "unknown")
    local QT_INSTALL_PREFIX
    QT_INSTALL_PREFIX=$(qmake -query QT_INSTALL_PREFIX 2>/dev/null || echo "unknown")

    log_info "Qt Version: $QT_VERSION"
    log_info "Qt Install Prefix: $QT_INSTALL_PREFIX"

    if [[ "$QT_VERSION" != 5.* ]]; then
        log_warn "Expected Qt5, found: $QT_VERSION"
        log_warn "You may need to use qtchooser to select Qt5"
    fi

    # Verify required modules
    local REQUIRED_MODULES=("Qt5Core" "Qt5Gui" "Qt5Widgets" "Qt5Charts" "Qt5Svg" "Qt5Concurrent" "Qt5Network")
    local MISSING_MODULES=()

    for module in "${REQUIRED_MODULES[@]}"; do
        if ! pkg-config --exists "$module" 2>/dev/null; then
            MISSING_MODULES+=("$module")
        fi
    done

    if [[ ${#MISSING_MODULES[@]} -gt 0 ]]; then
        log_error "Missing Qt5 modules: ${MISSING_MODULES[*]}"
        log_error "Please install the corresponding -dev packages"
        return 1
    fi

    log_ok "Qt5 verification passed"
    return 0
}

# Configure and build
do_build() {
    log_info "Starting build process..."

    mkdir -p "$BUILD_DIR"
    cd "$BUILD_DIR"

    log_info "Configuring with CMake..."
    cmake \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_INSTALL_PREFIX=/usr \
        ..

    log_info "Building..."
    local NPROC
    NPROC=$(nproc 2>/dev/null || echo 4)
    make -j"$NPROC"

    log_ok "Build completed successfully"

    # Find the binary
    local BINARY_PATH=""
    if [[ -f "${BUILD_DIR}/output/stacer" ]]; then
        BINARY_PATH="${BUILD_DIR}/output/stacer"
    elif [[ -f "${BUILD_DIR}/output/bin/stacer" ]]; then
        BINARY_PATH="${BUILD_DIR}/output/bin/stacer"
    fi

    if [[ -n "$BINARY_PATH" ]]; then
        log_ok "Binary location: $BINARY_PATH"
        echo ""
        echo "To run Stacer:"
        echo "  $BINARY_PATH"
        echo ""
        echo "Or use the run script:"
        echo "  ./scripts/run.sh"
    else
        log_warn "Could not locate built binary"
    fi
}

# Run the application
do_run() {
    local BINARY_PATH=""
    if [[ -f "${BUILD_DIR}/output/stacer" ]]; then
        BINARY_PATH="${BUILD_DIR}/output/stacer"
    elif [[ -f "${BUILD_DIR}/output/bin/stacer" ]]; then
        BINARY_PATH="${BUILD_DIR}/output/bin/stacer"
    fi

    if [[ -z "$BINARY_PATH" ]] || [[ ! -x "$BINARY_PATH" ]]; then
        log_error "Stacer binary not found. Please build first."
        exit 1
    fi

    log_info "Running Stacer..."
    exec "$BINARY_PATH" "$@"
}

# Print usage
usage() {
    cat <<EOF
Stacer Ubuntu Build Bootstrap Script

Usage: $0 [OPTIONS]

Options:
    --deps-only     Only install dependencies, don't build
    --build         Install deps and build (default)
    --run           Install deps, build, and run
    --help          Show this help message

Supported Ubuntu versions:
    - Ubuntu 22.04 (Jammy)
    - Ubuntu 24.04 (Noble)

Examples:
    $0                  # Install deps and build
    $0 --deps-only      # Only install dependencies
    $0 --run            # Full pipeline: deps -> build -> run
EOF
}

# Main
main() {
    local DEPS_ONLY=false
    local DO_BUILD=true
    local DO_RUN=false

    while [[ $# -gt 0 ]]; do
        case "$1" in
            --deps-only)
                DEPS_ONLY=true
                DO_BUILD=false
                shift
                ;;
            --build)
                DO_BUILD=true
                shift
                ;;
            --run)
                DO_RUN=true
                DO_BUILD=true
                shift
                ;;
            --help|-h)
                usage
                exit 0
                ;;
            *)
                log_error "Unknown option: $1"
                usage
                exit 1
                ;;
        esac
    done

    echo "========================================"
    echo "  Stacer Ubuntu Build Bootstrap"
    echo "========================================"
    echo ""

    detect_ubuntu_version
    install_build_deps
    verify_qt5

    if [[ "$DO_BUILD" == true ]]; then
        do_build
    fi

    if [[ "$DO_RUN" == true ]]; then
        do_run
    fi

    echo ""
    log_ok "Bootstrap completed successfully!"
}

main "$@"
