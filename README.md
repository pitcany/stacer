
<p align="center">
⚠️ <b>The upstream project has been abandoned. There will be no further upstream releases.</b> ⚠️<br>
This fork only adds build and packaging support for <b>Ubuntu 22.04 (Jammy)</b> and <b>Ubuntu 24.04 (Noble)</b>.
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/oguzhaninan/Stacer/native/screenshots/header.png" width="800">    
</p>
<p align="center">
  <b>Linux System Optimizer and Monitoring</b>
</p>

<p align="center">
	<a href="http://www.kernel.org">
		<img alt="Platform (GNU/Linux)" src="https://img.shields.io/badge/platform-GNU/Linux-blue.svg"/>
	</a>
	<a href="https://github.com/pitcany/stacer/releases">
		<img alt="Github All Releases" src="https://img.shields.io/github/downloads/pitcany/stacer/total.svg"/>
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

## Ubuntu 22.04 / 24.04

This fork builds Stacer 1.1.1 against the Qt 5 packages shipped with Ubuntu 22.04 and 24.04.

### Install from releases

Tagged releases on the [Releases page](https://github.com/pitcany/stacer/releases) include `.deb` and `.tar.gz` packages built on Ubuntu 22.04 and 24.04. Pick the file that matches your Ubuntu version:

```bash
# Ubuntu 24.04
sudo apt install ./stacer-1.1.1-Linux-x86_64-ubuntu24.04.deb

# Ubuntu 22.04
sudo apt install ./stacer-1.1.1-Linux-x86_64-ubuntu22.04.deb
```

`apt install ./file.deb` also pulls in the Qt 5 runtime dependencies. Then launch Stacer with the `stacer` command.

The packages are built for x86_64 (`amd64`) by the [release workflow](.github/workflows/release.yml). If there is no release for your version or architecture, build from source below.

### Running over SSH

Stacer is a desktop app, so a plain SSH session has no display for it to open on:

```
qt.qpa.xcb: could not connect to display
This application failed to start because no Qt platform plugin could be initialized.
```

Stacer always shows the machine it runs on. Pick where its window should appear:

- **On the computer you are SSHing from**: forward X11. The server needs `xauth` (`sudo apt install xauth`) and `X11Forwarding yes` in `/etc/ssh/sshd_config`, which is the Ubuntu default.

  ```bash
  ssh -X user@host     # use -Y if -X gives errors
  stacer
  ```

- **On the remote machine's own screen**: you must be logged in to its desktop as the same user you SSH in as. Point Stacer at that session.

  ```bash
  export XDG_RUNTIME_DIR=/run/user/$(id -u)

  # Wayland desktop (the Ubuntu default)
  QT_QPA_PLATFORM=wayland WAYLAND_DISPLAY=wayland-0 stacer

  # X11 desktop
  DISPLAY=:0 XAUTHORITY=$XDG_RUNTIME_DIR/gdm/Xauthority stacer
  ```

To check the installation without a display, run `QT_QPA_PLATFORM=offscreen stacer --version`. A plain `stacer --version` needs a display too.

### Quick start (build from source)

```bash
git clone https://github.com/pitcany/stacer.git
cd stacer

# Install dependencies, build (Release) and launch Stacer
./scripts/bootstrap-ubuntu-build.sh --run
```

`bootstrap-ubuntu-build.sh` accepts `--deps-only`, `--build` (default) and `--run`. It uses `sudo apt-get` to install the dependencies.

### Helper scripts

| Script | Purpose |
|--------|---------|
| `scripts/bootstrap-ubuntu-build.sh` | Install dependencies, then build and optionally run |
| `scripts/build.sh [Debug\|Release] [--clean] [--verbose]` | Out-of-tree CMake build in `build/` |
| `scripts/run.sh [--debug] [-- ARGS...]` | Run the built binary (`--debug` runs under gdb) |
| `scripts/package.sh [deb\|tar\|all]` | Create a `.deb` and/or `.tar.gz` with CPack |

### Build dependencies

```bash
sudo apt-get update
sudo apt-get install -y build-essential cmake pkg-config git \
    qtbase5-dev qtbase5-dev-tools qttools5-dev qttools5-dev-tools \
    libqt5svg5-dev libqt5charts5-dev
```

Runtime requirements are the Qt 5 libraries above plus the xcb platform plugin libraries (`libxcb-xinerama0`, `libxcb-cursor0`, `libxkbcommon-x11-0`); `curl` and `systemd` are recommended. See [docs/BUILD_UBUNTU.md](docs/BUILD_UBUNTU.md) for the full package list, troubleshooting and command-line options.

### Build and package manually

```bash
./scripts/build.sh Release        # binary: build/output/stacer
./scripts/run.sh

./scripts/package.sh deb          # e.g. build/stacer-1.1.1-Linux-x86_64.deb
sudo dpkg -i build/stacer-*.deb
sudo apt-get install -f           # only if dependencies are missing
```

### What changed for modern Ubuntu

- Qt 5.14+ compatibility: removed the global `endl` from `QTextStream` usage.
- CMake minimum raised to 3.5, C++ standard raised to C++14.
- Fixed `qt5_create_translation` argument order and the source `GLOB` patterns.
- LTO now uses CMake's IPO support instead of raw compiler flags.
- Added CPack configuration for `.deb` and `.tar.gz` packages.

## Build from source with CMake (any distribution, Qt 5.x)
Requires CMake 3.5+, a C++14 compiler and Qt 5 (Core, Gui, Widgets, Svg, Charts, Concurrent, Network).

1. `mkdir build && cd build`
2. `cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/qt/path ..` (omit `CMAKE_PREFIX_PATH` if Qt 5 is installed system-wide)
3. `make -j $(nproc)`
4. `output/stacer`

Qt 6 is not supported.

## Upstream installation methods

> These install the **upstream** Stacer builds, not this fork. Upstream is abandoned, and these methods have not been verified on Ubuntu 22.04/24.04 by this fork.

Runtime requirements: curl, systemd.

### PPA Repository (for ubuntu)
1. `sudo add-apt-repository ppa:oguzhaninan/stacer -y`   
2. `sudo apt-get update`   
3. `sudo apt-get install stacer -y`

### Debian sid / Ubuntu 20.04+

1. Run as root `apt install stacer`

### Debian x64

1. Download `stacer_1.1.0_amd64.deb` from the [Stacer releases page](https://github.com/oguzhaninan/Stacer/releases).
2. Run `sudo dpkg -i stacer*.deb` on the downloaded package.
3. Launch Stacer using the installed `stacer` command.

### Arch Linux (AUR)
1. Install the stacer package with a AUR helper of your choice eg.
2. `yay -Syyu stacer`
3. `paru -S stacer`
4. `pacaur -a stacer`

### Fedora
1. Download `stacer_1.1.0_amd64.rpm` from the [Stacer releases page](https://github.com/oguzhaninan/Stacer/releases).
2. Run `sudo rpm --install stacer*.rpm --nodeps --force` on the downloaded package.
3. Launch Stacer using the installed `stacer` command.

### Fedora (with DNF)
1. Run: `sudo dnf install stacer`
2. Launch Stacer using the installed `stacer` command.

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
