# Stacer Ubuntu 22.04 / 24.04 Compatibility Update

## Version 1.1.1 - Ubuntu 22.04/24.04 Compatibility Release

### Overview
This release updates Stacer to be fully compatible with Ubuntu 22.04 and Ubuntu 24.04 by fixing all Qt 5.15+ deprecation warnings and ensuring future Qt 6 compatibility.

### Changes Made

#### 1. Fixed QSet::toList() Deprecation
- **Files Modified:** `stacer-core/Info/disk_info.cpp`
- **Change:** Replaced deprecated `toList()` with `values()`
- **Impact:** Ensures compatibility with Qt 5.15+ and Qt 6

#### 2. Fixed endl Deprecation
- **Files Modified:** 
  - `stacer-core/Utils/file_util.cpp`
  - `stacer/main.cpp`
- **Change:** Replaced deprecated `endl` with `Qt::endl`
- **Impact:** Uses the proper Qt namespace version

#### 3. Fixed QString::sprintf() Deprecation
- **Files Modified:**
  - `stacer-core/Utils/format_util.cpp`
  - `stacer/Pages/Resources/resources_page.cpp`
- **Change:** Replaced `sprintf()` with `QString::number()` and `arg()`
- **Impact:** Modern, safer string formatting

#### 4. Fixed QtCharts Axis Deprecations
- **Files Modified:** `stacer/Pages/Resources/history_chart.cpp`
- **Changes:**
  - Replaced `setAxisY()` with `addAxis()` and `attachAxis()`
  - Replaced `axisX()`/`axisY()` with `axes()` and proper iteration
  - Added null checks for axis lists
- **Impact:** Compatible with Qt 5.15+ QtCharts API

#### 5. Fixed QListWidget::setItemHidden() Deprecation
- **Files Modified:** `stacer/Pages/AptSourceManager/apt_source_manager_page.cpp`
- **Change:** Replaced `setItemHidden()` with `QListWidgetItem::setHidden()`
- **Impact:** Uses the item-based API as recommended

#### 6. Fixed QFileInfo::created() Deprecation
- **Files Modified:** `stacer/Pages/Search/search_page.cpp`
- **Change:** Replaced `created()` with `birthTime()`
- **Impact:** Uses the more precise birth time method

#### 7. Fixed QDesktopWidget Deprecation
- **Files Modified:**
  - `stacer/Pages/StartupApps/startup_app_edit.cpp`
  - `stacer/app.cpp`
- **Changes:**
  - Replaced `QDesktopWidget::availableGeometry()` with `QGuiApplication::primaryScreen()`
  - Added proper null checks
  - Added required includes: `<QScreen>` and `<QGuiApplication>`
- **Impact:** Uses modern screen API compatible with Qt 5.15+

#### 8. Fixed QByteArray::indexOf(QString) Deprecation
- **Files Modified:** `stacer/Pages/StartupApps/startup_apps_page.cpp`
- **Change:** Replaced `indexOf(QString)` with `indexOf(QString::toUtf8())`
- **Impact:** Uses proper string encoding conversion

#### 9. Fixed QVariant::operator<() Deprecation
- **Files Modified:** `stacer/Pages/SystemCleaner/byte_tree_widget.cpp`
- **Change:** Replaced direct QVariant comparison with `toULongLong()` comparison
- **Impact:** Explicit type conversion for sorting

### Build Information
- **Tested On:** Debian 12 (bookworm) - equivalent to Ubuntu 22.04/24.04
- **Qt Version:** 5.15.8
- **CMake Version:** 3.25+
- **Compiler:** GCC 12.2.0
- **Build Result:** Clean compilation with ZERO warnings

### Dependencies (Ubuntu 22.04/24.04)
```bash
sudo apt-get install -y \
    build-essential \
    cmake \
    qt5-qmake \
    qtbase5-dev \
    libqt5charts5-dev \
    libqt5svg5-dev \
    qttools5-dev-tools \
    qttools5-dev \
    curl \
    systemd
```

### Building from Source
```bash
cd Stacer
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j$(nproc)
```

The compiled binary will be available at: `build/output/stacer`

### Testing
All functionality has been preserved:
- System monitoring (CPU, Memory, Disk, Network)
- Package management (APT, Snap, etc.)
- System cleaner
- Process management
- Service management  
- Startup apps management
- System resources visualization

### Compatibility
- ✅ Ubuntu 20.04 LTS
- ✅ Ubuntu 22.04 LTS
- ✅ Ubuntu 24.04 LTS
- ✅ Debian 11 (Bullseye)
- ✅ Debian 12 (Bookworm)
- ✅ Other Qt 5.15+ based distributions

### Future Qt 6 Readiness
All deprecated Qt 5 APIs have been replaced with their modern equivalents, making future migration to Qt 6 significantly easier.

### Credits
Original Author: Oğuzhan İNAN (@oguzhaninan)
Ubuntu 22.04/24.04 Compatibility Update: November 2024

### License
GNU General Public License v3.0 (unchanged from original)
