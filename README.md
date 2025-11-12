
<p align="center">
⚠️ <b>Original project was abandoned. This fork includes Ubuntu 22.04/24.04 compatibility and critical bug fixes</b>⚠️
</p>

<p align="center">
<b>Version 1.1.1</b> - Fixed for modern Ubuntu with Qt 5.15+ and high-core-count CPUs
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/header.png" width="800">
</p>
<p align="center">
  <b>Linux System Optimizer and Monitoring</b>   <br>
  <a href="https://www.patreon.com/oguzhaninan">
	<img alt="Patreon" src="https://c5.patreon.com/external/logo/become_a_patron_button.png" height="50" />
</a>
</p>

<p align="center">
	<a href="https://sourceforge.net/projects/stacer/files/" rel="nofollow">
		<img alt="Download Stacer" src="https://img.shields.io/sourceforge/dt/stacer.svg"/>
	</a>
	<a href="http://www.kernel.org">
		<img alt="Platform (GNU/Linux)" src="https://img.shields.io/badge/platform-GNU/Linux-blue.svg"/>
	</a>
	<a href="https://github.com/oguzhaninan/Stacer/releases">
		<img alt="Github All Releases" src="https://img.shields.io/github/downloads/oguzhaninan/stacer/total.svg"/>
	</a>
</p>
<p align="center">
	<a href="https://sourceforge.net/projects/stacer/files/" >
		<img src="https://a.fsdn.com/con/app/sf-download-button" />
	</a>
</p>

## Reviews
<p align="left">
    <a href="http://www.omgubuntu.co.uk/2017/01/stacer-system-optimizer-for-ubuntu">
		<img width="65px" src="https://oguzhaninan.github.io/Stacer-Web/images/sites/site0.png"/>
	</a>
    <a href="http://blog.desdelinux.net/optimizar-debian-ubuntu-linux-mint-derivados-stacer/">
		<img width="155px" src="http://i.imgur.com/eV1WxYZ.png"/>
	</a>
	<a href="http://www.techrepublic.com/article/how-to-install-stacer-for-quick-linux-system-optimization/">
		<img width="150px" src="https://static1.squarespace.com/static/55afdc11e4b000b229a97849/t/55b13f1de4b044f556a02524/1437679408913/"/>
	</a>
	</a>
</p>

## What's New in Version 1.1.1

### Critical Bug Fixes
- **Fixed segmentation fault on modern CPUs**: CPU frequency detection now properly handles CPUs that report "CPU max MHz" instead of "CPU MHz" (stacer-core/Info/cpu_info.cpp:68-85)
- **Fixed crash on high core-count CPUs**: Color palette now wraps correctly for CPUs with >20 cores/threads using modulo operator (stacer/Pages/Resources/history_chart.cpp:51)

### Ubuntu 22.04/24.04 Compatibility
- Fixed all Qt 5.15+ deprecation warnings (~30 instances across 12 files)
- Updated QtCharts API usage for modern Qt
- Replaced deprecated QDesktopWidget with QGuiApplication::screens()
- Modernized string formatting from sprintf() to QString::number()
- Ready for future Qt 6 migration

See [stacer/CHANGES_SUMMARY.md](stacer/CHANGES_SUMMARY.md) for complete technical details.

## Installation

### ✅ Recommended (Version 1.1.1 with Ubuntu 22.04/24.04 fixes)

#### Debian/Ubuntu - Download .deb Package

1. Download `stacer_1.1.1-1_amd64.deb` from this repository
2. Install dependencies: `sudo apt-get install -y curl systemd`
3. Run `sudo dpkg -i stacer_1.1.1-1_amd64.deb`
4. Launch Stacer using the `stacer` command

#### Build from Source (All Distributions)

See the [Build from source](#build-from-source-with-cmake-qt-version-qt-5x) section below for detailed instructions.

### ⚠️ Alternative Methods (Version 1.1.0 - Old Version Without Fixes)

**Warning:** The following installation methods install the original version 1.1.0 which has:
- Qt 5.15+ deprecation warnings and compilation issues on Ubuntu 22.04+
- CPU frequency detection bugs causing segfaults on modern CPUs
- Color palette crashes on CPUs with >20 cores

#### PPA Repository (Ubuntu - Version 1.1.0 only)
```bash
sudo add-apt-repository ppa:oguzhaninan/stacer -y
sudo apt-get update
sudo apt-get install stacer -y
```

**Note:** This PPA is maintained by the original author and does not include the Ubuntu 22.04/24.04 compatibility fixes from this fork.

#### Debian sid / Ubuntu from Official Repos (Version 1.1.0)
```bash
sudo apt install stacer
```

#### Arch Linux AUR (Version 1.1.0)
```bash
yay -S stacer
# or
paru -S stacer
```

#### Fedora DNF (Version 1.1.0)
```bash
sudo dnf install stacer
```

## Build from source with CMake (Qt Version Qt 5.x)

### Ubuntu 22.04 / 24.04 Dependencies
```bash
sudo apt-get install -y \
    build-essential cmake \
    qt5-qmake qtbase5-dev \
    libqt5charts5-dev libqt5svg5-dev \
    qttools5-dev-tools qttools5-dev \
    curl systemd
```

### Build Steps
1. `mkdir build && cd build`
2. `cmake -DCMAKE_BUILD_TYPE=Release ..`
3. `make -j $(nproc)`
4. `./output/stacer`

The binary will be available at `build/output/stacer`

## Screenshots

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-1.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-2.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-3.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-4.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-5.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-6.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-7.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-8.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-9.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-10.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-11.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-12.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-13.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-14.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-15.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/Screenshot-1.0.9-16.png" width="700">
</p>

## Contributors

### Code Contributors

This project exists thanks to all the people who contribute. [[Contribute](CONTRIBUTING.md)].
<a href="https://github.com/oguzhaninan/Stacer/graphs/contributors"><img src="https://opencollective.com/Stacer/contributors.svg?width=890&button=false" /></a>

### Financial Contributors

Become a financial contributor and help us sustain our community. [[Contribute](https://opencollective.com/Stacer/contribute)]

#### Individuals

<a href="https://opencollective.com/Stacer"><img src="https://opencollective.com/Stacer/individuals.svg?width=890"></a>

#### Organizations

Support this project with your organization. Your logo will show up here with a link to your website. [[Contribute](https://opencollective.com/Stacer/contribute)]

<a href="https://opencollective.com/Stacer/organization/0/website"><img src="https://opencollective.com/Stacer/organization/0/avatar.svg"></a>
<a href="https://opencollective.com/Stacer/organization/1/website"><img src="https://opencollective.com/Stacer/organization/1/avatar.svg"></a>
<a href="https://opencollective.com/Stacer/organization/2/website"><img src="https://opencollective.com/Stacer/organization/2/avatar.svg"></a>
<a href="https://opencollective.com/Stacer/organization/3/website"><img src="https://opencollective.com/Stacer/organization/3/avatar.svg"></a>
<a href="https://opencollective.com/Stacer/organization/4/website"><img src="https://opencollective.com/Stacer/organization/4/avatar.svg"></a>
<a href="https://opencollective.com/Stacer/organization/5/website"><img src="https://opencollective.com/Stacer/organization/5/avatar.svg"></a>
<a href="https://opencollective.com/Stacer/organization/6/website"><img src="https://opencollective.com/Stacer/organization/6/avatar.svg"></a>
<a href="https://opencollective.com/Stacer/organization/7/website"><img src="https://opencollective.com/Stacer/organization/7/avatar.svg"></a>
<a href="https://opencollective.com/Stacer/organization/8/website"><img src="https://opencollective.com/Stacer/organization/8/avatar.svg"></a>
<a href="https://opencollective.com/Stacer/organization/9/website"><img src="https://opencollective.com/Stacer/organization/9/avatar.svg"></a>
