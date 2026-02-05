#!/bin/bash
# Stacer Packaging Script
#
# Usage: ./scripts/package.sh [deb|tar|all]
#
# Arguments:
#   deb     Create .deb package only
#   tar     Create .tar.gz archive only
#   all     Create both (default)

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
BUILD_DIR="${PROJECT_ROOT}/build"

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m'

log_info()  { echo -e "${BLUE}[INFO]${NC} $*"; }
log_ok()    { echo -e "${GREEN}[OK]${NC} $*"; }
log_error() { echo -e "${RED}[ERROR]${NC} $*" >&2; }

# Check if build exists
check_build() {
    if [[ ! -d "$BUILD_DIR" ]]; then
        log_error "Build directory not found. Please run ./scripts/build.sh first."
        exit 1
    fi

    if [[ ! -f "${BUILD_DIR}/output/stacer" ]]; then
        log_error "Stacer binary not found. Please run ./scripts/build.sh first."
        exit 1
    fi
}

# Build if needed
ensure_build() {
    if [[ ! -f "${BUILD_DIR}/output/stacer" ]]; then
        log_info "Building Stacer first..."
        "$SCRIPT_DIR/build.sh" Release
    fi
}

# Create .deb package
create_deb() {
    log_info "Creating .deb package..."
    cd "$BUILD_DIR"
    cpack -G DEB

    local DEB_FILE
    DEB_FILE=$(ls -1 stacer-*.deb 2>/dev/null | head -1 || true)

    if [[ -n "$DEB_FILE" ]]; then
        log_ok "Created: ${BUILD_DIR}/${DEB_FILE}"
        echo ""
        echo "Install with:"
        echo "  sudo dpkg -i ${BUILD_DIR}/${DEB_FILE}"
        echo "  sudo apt-get install -f  # if needed for dependencies"
    else
        log_error "Failed to create .deb package"
        return 1
    fi
}

# Create tarball
create_tar() {
    log_info "Creating .tar.gz archive..."
    cd "$BUILD_DIR"
    cpack -G TGZ

    local TAR_FILE
    TAR_FILE=$(ls -1 stacer-*.tar.gz 2>/dev/null | head -1 || true)

    if [[ -n "$TAR_FILE" ]]; then
        log_ok "Created: ${BUILD_DIR}/${TAR_FILE}"
    else
        log_error "Failed to create tarball"
        return 1
    fi
}

# Print usage
usage() {
    cat <<EOF
Stacer Packaging Script

Usage: $0 [PACKAGE_TYPE]

Package Types:
    deb     Create .deb package only
    tar     Create .tar.gz archive only
    all     Create both (default)

Options:
    --help  Show this help message

Requirements:
    - Must run ./scripts/build.sh first (or this script will do it)
    - For .deb: dpkg-dev package (usually installed)

Examples:
    $0              # Create both .deb and .tar.gz
    $0 deb          # Create only .deb
    $0 tar          # Create only .tar.gz
EOF
}

# Main
main() {
    local PACKAGE_TYPE="${1:-all}"

    case "$PACKAGE_TYPE" in
        --help|-h)
            usage
            exit 0
            ;;
        deb)
            ensure_build
            create_deb
            ;;
        tar)
            ensure_build
            create_tar
            ;;
        all)
            ensure_build
            create_deb
            create_tar
            ;;
        *)
            log_error "Unknown package type: $PACKAGE_TYPE"
            usage
            exit 1
            ;;
    esac

    echo ""
    log_ok "Packaging completed!"

    echo ""
    echo "Package files are in: $BUILD_DIR"
    ls -lh "$BUILD_DIR"/*.deb "$BUILD_DIR"/*.tar.gz 2>/dev/null || true
}

main "$@"
