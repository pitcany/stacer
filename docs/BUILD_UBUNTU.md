# Building Stacer on Ubuntu 22.04 and 24.04

This document provides comprehensive instructions for building Stacer from source on Ubuntu 22.04 (Jammy Jellyfish) and Ubuntu 24.04 (Noble Numbat).

## Table of Contents

- [Quick Start](#quick-start)
- [Prerequisites](#prerequisites)
- [Building](#building)
- [Running](#running)
- [Packaging](#packaging)
- [Troubleshooting](#troubleshooting)
- [Version-Specific Notes](#version-specific-notes)

## Quick Start

The fastest way to build and run Stacer:

```bash
# Clone the repository (if you haven't already)
git clone https://github.com/oguzhaninan/Stacer.git
cd Stacer

# One-command bootstrap: install deps, build, and run
./scripts/bootstrap-ubuntu-build.sh --run
```

Or step by step:

```bash
# Install dependencies only
./scripts/bootstrap-ubuntu-build.sh --deps-only

# Build
./scripts/build.sh

# Run
./scripts/run.sh
```

## Prerequisites

### Ubuntu 22.04 (Jammy)

```bash
# Update package lists
sudo apt update

# Core build tools
sudo apt install -y \
    build-essential \
    cmake \
    pkg-config \
    git

# Qt5 development packages
sudo apt install -y \
    qtbase5-dev \
    qtbase5-dev-tools \
    qttools5-dev \
    qttools5-dev-tools \
    libqt5svg5-dev \
    libqt5charts5-dev

# Runtime dependencies for Qt xcb plugin
sudo apt install -y \
    libxcb-xinerama0 \
    libxcb-cursor0 \
    libxcb-icccm4 \
    libxcb-image0 \
    libxcb-keysyms1 \
    libxcb-randr0 \
    libxcb-render-util0 \
    libxcb-shape0 \
    libxkbcommon-x11-0 \
    libgl1

# Optional: development tools
sudo apt install -y gdb qt5-qmake
```

Qt version on Ubuntu 22.04: **Qt 5.15.3**

### Ubuntu 24.04 (Noble)

The packages are the same as 22.04:

```bash
# Update package lists
sudo apt update

# Core build tools
sudo apt install -y \
    build-essential \
    cmake \
    pkg-config \
    git

# Qt5 development packages
sudo apt install -y \
    qtbase5-dev \
    qtbase5-dev-tools \
    qttools5-dev \
    qttools5-dev-tools \
    libqt5svg5-dev \
    libqt5charts5-dev

# Runtime dependencies for Qt xcb plugin
sudo apt install -y \
    libxcb-xinerama0 \
    libxcb-cursor0 \
    libxcb-icccm4 \
    libxcb-image0 \
    libxcb-keysyms1 \
    libxcb-randr0 \
    libxcb-render-util0 \
    libxcb-shape0 \
    libxkbcommon-x11-0 \
    libgl1

# Optional: development tools
sudo apt install -y gdb qt5-qmake
```

Qt version on Ubuntu 24.04: **Qt 5.15.13**

### Verify Qt5 Installation

```bash
# Check qmake version
qmake --version

# Check Qt5 modules via pkg-config
pkg-config --modversion Qt5Core Qt5Gui Qt5Widgets Qt5Charts Qt5Svg
```

Expected output should show Qt 5.15.x.

## Building

### Using the Build Script (Recommended)

```bash
# Release build (default, optimized)
./scripts/build.sh

# Debug build (with debug symbols)
./scripts/build.sh Debug

# Clean build (removes build/ directory first)
./scripts/build.sh --clean

# Verbose output
./scripts/build.sh --verbose
```

### Manual CMake Build

```bash
# Create build directory
mkdir -p build
cd build

# Configure (Release build)
cmake \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX=/usr \
    ..

# Build with all CPU cores
make -j$(nproc)

# The binary will be at:
# build/output/stacer
```

### Debug Build

```bash
mkdir -p build
cd build

cmake \
    -DCMAKE_BUILD_TYPE=Debug \
    -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
    ..

make -j$(nproc)
```

The `compile_commands.json` will be generated for IDE integration.

## Running

### Using the Run Script (Recommended)

```bash
# Normal run
./scripts/run.sh

# Run with debug output
QT_DEBUG_PLUGINS=1 ./scripts/run.sh

# Run under gdb
./scripts/run.sh --debug

# Pass arguments to Stacer
./scripts/run.sh -- --nosplash
./scripts/run.sh -- --hide
```

### Direct Execution

```bash
# From project root after building
./build/output/stacer

# With Stacer arguments
./build/output/stacer --nosplash
./build/output/stacer --hide
```

### Stacer Command-Line Options

| Option | Description |
|--------|-------------|
| `--hide` | Launch minimized to system tray |
| `--nosplash` | Skip splash screen |
| `--version` | Show version information |
| `--help` | Show help |

## Packaging

### Building a .deb Package with CPack

```bash
# Build the project first
./scripts/build.sh

# Generate .deb package
cd build
cpack -G DEB

# The .deb file will be in build/
# e.g., stacer-1.1.1-Linux-x86_64.deb
```

### Installing the .deb Package

```bash
# Install the generated package
sudo dpkg -i build/stacer-1.1.1-Linux-*.deb

# Fix any dependency issues
sudo apt-get install -f
```

### Building a Tarball

```bash
cd build
cpack -G TGZ
# Creates: stacer-1.1.1-Linux-x86_64.tar.gz
```

### Manual Install (make install)

```bash
cd build
sudo make install
# Installs to /usr/bin/stacer and related files
```

## Troubleshooting

### "Could not load the Qt platform plugin 'xcb'"

This is the most common runtime error. It means Qt can't find or load the xcb platform plugin.

**Solution 1: Install missing xcb libraries**

```bash
sudo apt install -y \
    libxcb-xinerama0 \
    libxcb-cursor0 \
    libxkbcommon-x11-0
```

**Solution 2: Debug which library is missing**

```bash
export QT_DEBUG_PLUGINS=1
./build/output/stacer
# Look for "Cannot load library" messages
```

**Solution 3: Check Qt plugin path**

```bash
# Find Qt plugins directory
qmake -query QT_INSTALL_PLUGINS
# Usually: /usr/lib/x86_64-linux-gnu/qt5/plugins

# Verify xcb plugin exists
ls -la $(qmake -query QT_INSTALL_PLUGINS)/platforms/

# Set plugin path manually if needed
export QT_PLUGIN_PATH=/usr/lib/x86_64-linux-gnu/qt5/plugins
./build/output/stacer
```

### CMake Cannot Find Qt5

**Symptoms:**
```
CMake Error at CMakeLists.txt:XX (find_package):
  Could not find a package configuration file provided by "Qt5"
```

**Solution:**

```bash
# Ensure Qt5 dev packages are installed
sudo apt install qtbase5-dev qttools5-dev

# If using a custom Qt installation, specify the path:
cmake -DCMAKE_PREFIX_PATH=/path/to/qt5 ..
```

### Missing Qt5Charts

**Symptoms:**
```
Could not find a configuration file for package "Qt5Charts"
```

**Solution:**

```bash
sudo apt install libqt5charts5-dev
```

### Compilation Error: 'endl' Not Found

This was fixed in the source code. If you see this error on an old checkout:

**Symptoms:**
```
error: 'endl' was not declared in this scope
```

**Solution:**
Replace `endl` with `"\n"` in the affected files, or update to the latest source.

### OpenGL/Mesa Errors

**Symptoms:**
```
libGL error: failed to load driver
```

**Solution:**

```bash
sudo apt install libgl1-mesa-glx libgl1-mesa-dri
```

### RPATH Issues After Install

If the installed binary can't find libraries:

```bash
# Check linked libraries
ldd /usr/bin/stacer

# If Qt libraries aren't found, they should be in standard paths
# Usually this indicates a packaging issue
```

### Build Fails with LTO Errors

Link-Time Optimization can sometimes fail on older systems.

**Solution:** Disable LTO by editing `stacer/CMakeLists.txt` and removing the `-flto` flags, or build in Debug mode.

## Version-Specific Notes

### Ubuntu 22.04 (Jammy)

- CMake version: 3.22.x
- GCC version: 11.x
- Qt version: 5.15.3
- No special considerations needed

### Ubuntu 24.04 (Noble)

- CMake version: 3.28.x
- GCC version: 13.x
- Qt version: 5.15.13
- Some libraries may have `t64` suffix (time_t transition), but Qt5 packages are unaffected
- No special considerations needed

### Package Name Reference

| Package | Purpose |
|---------|---------|
| `build-essential` | GCC, G++, make |
| `cmake` | Build system |
| `qtbase5-dev` | Qt5 Core, Gui, Widgets |
| `qttools5-dev` | Qt5 tools (linguist, etc.) |
| `qttools5-dev-tools` | Additional Qt5 tools |
| `libqt5svg5-dev` | Qt5 SVG module |
| `libqt5charts5-dev` | Qt5 Charts module |
| `libxcb-xinerama0` | XCB Xinerama extension |
| `libxcb-cursor0` | XCB cursor library |
| `libxkbcommon-x11-0` | X11 keyboard handling |

## Verification Checklist

After building, verify everything works:

- [ ] Binary exists at `build/output/stacer`
- [ ] Binary is executable: `file build/output/stacer` shows "ELF 64-bit LSB executable"
- [ ] All Qt5 libraries resolve: `ldd build/output/stacer | grep "not found"` shows nothing
- [ ] Application starts: `./build/output/stacer --nosplash` launches GUI
- [ ] System info displays correctly on Dashboard page
- [ ] (Optional) .deb package installs cleanly

## Development Tips

### IDE Integration

For VS Code or CLion, use the generated `compile_commands.json`:

```bash
./scripts/build.sh Debug
# compile_commands.json is at build/compile_commands.json
```

### Running Under Debugger

```bash
./scripts/run.sh --debug
# Or manually:
gdb -ex run --args ./build/output/stacer
```

### Checking for Memory Leaks

```bash
# Install valgrind
sudo apt install valgrind

# Run with valgrind
valgrind --leak-check=full ./build/output/stacer
```

## Contact and Support

Stacer is an abandoned project. For build issues specific to these instructions, please open an issue with:

1. Ubuntu version (`cat /etc/os-release`)
2. CMake version (`cmake --version`)
3. Qt version (`qmake --version`)
4. Full build output
5. Full error message
