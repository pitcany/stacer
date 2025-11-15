# Building Stacer

This document provides detailed instructions for building Stacer from source.

## Table of Contents
- [Building from Source (Binary Only)](#building-from-source-binary-only)
- [Building a .deb Package](#building-a-deb-package)
- [Troubleshooting](#troubleshooting)

## Building from Source (Binary Only)

### Prerequisites

#### Ubuntu 22.04 / 24.04
```bash
sudo apt-get install -y \
    build-essential cmake \
    qt5-qmake qtbase5-dev \
    libqt5charts5-dev libqt5svg5-dev \
    qttools5-dev-tools qttools5-dev \
    curl systemd
```

#### Fedora
```bash
sudo dnf install -y \
    gcc-c++ cmake \
    qt5-qtbase-devel qt5-qtcharts-devel \
    qt5-qtsvg-devel qt5-qttools-devel
```

#### Arch Linux
```bash
sudo pacman -S base-devel cmake qt5-base qt5-charts qt5-svg qt5-tools
```

### Build Steps

```bash
# Clone the repository (if you haven't already)
git clone https://github.com/YOUR-USERNAME/stacer.git
cd stacer

# Create build directory
mkdir build && cd build

# Configure
cmake -DCMAKE_BUILD_TYPE=Release ..

# Build (use all CPU cores)
make -j $(nproc)

# Run
./output/stacer
```

The binary will be available at `build/output/stacer`

### Installing System-Wide (Optional)

```bash
# From the build directory
sudo make install
```

This installs:
- Binary to `/usr/local/bin/stacer`
- Icons to `/usr/local/share/icons/`
- Desktop file to `/usr/local/share/applications/`

## Building a .deb Package

### Prerequisites

Install development and packaging tools:

```bash
sudo apt-get install -y \
    build-essential cmake \
    qt5-qmake qtbase5-dev \
    libqt5charts5-dev libqt5svg5-dev \
    qttools5-dev-tools qttools5-dev \
    debhelper dh-make devscripts \
    curl systemd
```

### Quick Build

```bash
cd stacer
dpkg-buildpackage -us -uc -b
```

The `.deb` package will be created in the parent directory:
- `stacer_1.1.1-2_amd64.deb` - Installable package (~800 KB)
- `stacer-dbgsym_1.1.1-2_amd64.ddeb` - Debug symbols (~8 MB)

### Install the Package

```bash
# Install
sudo dpkg -i ../stacer_1.1.1-2_amd64.deb

# Fix any missing dependencies
sudo apt-get install -f
```

### Reinstall/Upgrade

If Stacer is already installed:

```bash
# Remove old version (optional)
sudo apt remove stacer

# Install new version
sudo dpkg -i ../stacer_1.1.1-2_amd64.deb
```

Or just run the dpkg command directly - it will upgrade automatically.

### Build Process Details

The `dpkg-buildpackage` command:

1. **Reads package metadata:**
   - `debian/changelog` → Version number (1.1.1-2)
   - `debian/control` → Package name, dependencies, description

2. **Executes build:**
   - `debian/rules` → Calls `dh` (debhelper)
   - `dh` auto-detects cmake and runs:
     - `cmake ..`
     - `make -j`
     - `make install DESTDIR=debian/stacer`

3. **Creates package:**
   - Bundles installed files
   - Adds installation scripts (`postinst`, `postrm`)
   - Creates `.deb` archive

### Build Options

| Flag | Description |
|------|-------------|
| `-us` | Don't sign source package (for local builds) |
| `-uc` | Don't sign changes file (for local builds) |
| `-b` | Binary-only build (no source package) |
| `-j<N>` | Use N parallel jobs (e.g., `-j4`) |

### Verifying the Package

```bash
# List package contents
dpkg-deb -c ../stacer_1.1.1-2_amd64.deb

# Show package metadata
dpkg-deb -I ../stacer_1.1.1-2_amd64.deb

# Extract without installing
dpkg-deb -x ../stacer_1.1.1-2_amd64.deb /tmp/stacer-extract

# Check package dependencies
dpkg-deb -f ../stacer_1.1.1-2_amd64.deb Depends
```

### Updating the Version

When you make code changes and want to release a new version:

1. **Update the changelog:**

```bash
cd stacer
dch -i
```

Or manually edit `debian/changelog` and add at the top:

```debian-changelog
stacer (1.1.1-3) stable; urgency=medium

  * Fixed XYZ bug
  * Added ABC feature

 -- Your Name <your@email.com>  Fri, 15 Nov 2024 12:00:00 +0000
```

**Format notes:**
- Version format: `package (version) distribution; urgency=level`
- Two spaces before `--` in the author line
- Use `date -R` to get the proper date format

2. **Clean and rebuild:**

```bash
dh clean
dpkg-buildpackage -us -uc -b
```

### Creating a Signed Package (For Distribution)

If you want to distribute the package officially:

```bash
# Generate GPG key (if you don't have one)
gpg --full-generate-key

# Build and sign
dpkg-buildpackage -b
```

This creates signed `.deb`, `.buildinfo`, and `.changes` files.

## Troubleshooting

### Build Fails with Qt Errors

**Problem:** CMake can't find Qt5

**Solution:**
```bash
# Ubuntu/Debian
sudo apt-get install qtbase5-dev libqt5charts5-dev libqt5svg5-dev

# Set Qt path manually if needed
export CMAKE_PREFIX_PATH=/usr/lib/x86_64-linux-gnu/cmake/Qt5
```

### dpkg-buildpackage: Command Not Found

**Problem:** Debian packaging tools not installed

**Solution:**
```bash
sudo apt-get install debhelper dh-make devscripts
```

### Package Install Fails with Dependencies

**Problem:** Missing runtime dependencies

**Solution:**
```bash
# Let apt fix dependencies automatically
sudo apt-get install -f

# Or install dependencies manually
sudo apt-get install curl systemd
```

### Build Succeeds but Binary Crashes

**Problem:** Missing runtime Qt plugins

**Solution:**
```bash
sudo apt-get install qt5-gtk-platformtheme
export QT_QPA_PLATFORMTHEME=qt5ct
```

### Clean Build (Start Over)

```bash
# For cmake build
rm -rf build
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j $(nproc)

# For debian package
cd stacer
dh clean
dpkg-buildpackage -us -uc -b
```

## Build Output Locations

| Build Method | Output Location |
|--------------|-----------------|
| CMake binary | `build/output/stacer` |
| .deb package | `../stacer_1.1.1-2_amd64.deb` |
| Debug symbols | `../stacer-dbgsym_1.1.1-2_amd64.ddeb` |
| Build info | `../stacer_1.1.1-2_amd64.buildinfo` |
| Changes file | `../stacer_1.1.1-2_amd64.changes` |

## Additional Resources

- [Debian New Maintainers' Guide](https://www.debian.org/doc/manuals/maint-guide/)
- [CMake Documentation](https://cmake.org/documentation/)
- [Qt5 Documentation](https://doc.qt.io/qt-5/)
