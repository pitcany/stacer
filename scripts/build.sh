#!/bin/bash
# Stacer Build Script
#
# Usage: ./scripts/build.sh [Debug|Release] [--clean] [--verbose]
#
# Arguments:
#   Debug|Release   Build type (default: Release)
#   --clean         Remove build directory before building
#   --verbose       Enable verbose make output

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
BUILD_DIR="${PROJECT_ROOT}/build"

# Default options
BUILD_TYPE="Release"
CLEAN_BUILD=false
VERBOSE=""

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m'

log_info()  { echo -e "${BLUE}[INFO]${NC} $*"; }
log_ok()    { echo -e "${GREEN}[OK]${NC} $*"; }
log_error() { echo -e "${RED}[ERROR]${NC} $*" >&2; }

# Parse arguments
while [[ $# -gt 0 ]]; do
    case "$1" in
        Debug|debug)
            BUILD_TYPE="Debug"
            shift
            ;;
        Release|release)
            BUILD_TYPE="Release"
            shift
            ;;
        --clean)
            CLEAN_BUILD=true
            shift
            ;;
        --verbose|-v)
            VERBOSE="VERBOSE=1"
            shift
            ;;
        --help|-h)
            cat <<EOF
Stacer Build Script

Usage: $0 [Debug|Release] [OPTIONS]

Build Types:
    Debug       Build with debug symbols, no optimization
    Release     Build with optimizations (default)

Options:
    --clean     Remove build directory before building
    --verbose   Enable verbose make output
    --help      Show this help message

Examples:
    $0                  # Release build
    $0 Debug            # Debug build
    $0 Release --clean  # Clean Release build
EOF
            exit 0
            ;;
        *)
            log_error "Unknown argument: $1"
            exit 1
            ;;
    esac
done

log_info "Build configuration:"
log_info "  Build type: $BUILD_TYPE"
log_info "  Project root: $PROJECT_ROOT"
log_info "  Build directory: $BUILD_DIR"

# Clean if requested
if [[ "$CLEAN_BUILD" == true ]]; then
    log_info "Cleaning build directory..."
    rm -rf "$BUILD_DIR"
fi

# Create build directory
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

# Configure
log_info "Configuring with CMake..."
cmake \
    -DCMAKE_BUILD_TYPE="$BUILD_TYPE" \
    -DCMAKE_INSTALL_PREFIX=/usr \
    -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
    ..

# Build
log_info "Building with $(nproc) parallel jobs..."
make -j"$(nproc)" $VERBOSE

# Report results
log_ok "Build completed successfully"

# Find and report binary location
BINARY_PATH=""
if [[ -f "${BUILD_DIR}/output/stacer" ]]; then
    BINARY_PATH="${BUILD_DIR}/output/stacer"
elif [[ -f "${BUILD_DIR}/output/bin/stacer" ]]; then
    BINARY_PATH="${BUILD_DIR}/output/bin/stacer"
fi

if [[ -n "$BINARY_PATH" ]]; then
    echo ""
    log_info "Binary: $BINARY_PATH"
    log_info "Size: $(du -h "$BINARY_PATH" | cut -f1)"
    echo ""
    echo "To run:"
    echo "  $BINARY_PATH"
    echo "  # or"
    echo "  ./scripts/run.sh"
else
    log_error "Could not locate built binary"
    exit 1
fi
