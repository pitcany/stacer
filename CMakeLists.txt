cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# Set policy for GLOB and other behaviors
if(POLICY CMP0076)
    cmake_policy(SET CMP0076 NEW)
endif()
if(POLICY CMP0115)
    cmake_policy(SET CMP0115 NEW)
endif()

project(Stacer VERSION 1.1.0 LANGUAGES CXX)

# Adding features(build cache + faster linkers) and reasonable defaults(Debug build by default)
include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/cxxbasics/CXXBasics.cmake")

# Setting a cleaner directory structure for the generated binaries
set(CMAKE_BINARY_DIR        "${CMAKE_BINARY_DIR}/output")
set(EXECUTABLE_OUTPUT_PATH  "${CMAKE_BINARY_DIR}/")
set(LIBRARY_OUTPUT_PATH     "${CMAKE_BINARY_DIR}/lib")

set(PROJECT_ROOT "${CMAKE_CURRENT_SOURCE_DIR}")

# Activating MOC and searching for the Qt5 dependencies
set(CMAKE_AUTOMOC ON)
find_package(Qt5 COMPONENTS Core Gui Widgets Charts Svg Concurrent REQUIRED)

# Setting the minimum C++ standard and passing the Qt-specific define
# Using C++14 for better compatibility with modern compilers
set(CMAKE_CXX_STANDARD           14)
set(CMAKE_CXX_EXTENSIONS         YES)
set(CMAKE_CXX_STANDARD_REQUIRED  YES)

# Qt deprecated warnings - suppress QRegExp warnings (deprecated but functional in Qt5)
add_definitions(-DQT_DEPRECATED_WARNINGS)
add_definitions(-DQT_NO_DEPRECATED_WARNINGS)

# Subprojects
add_subdirectory(stacer-core)
add_subdirectory(stacer)

# ============================================================================
# CPack Configuration for Debian/Ubuntu packaging
# ============================================================================

# Basic package information
set(CPACK_PACKAGE_NAME "stacer")
set(CPACK_PACKAGE_VENDOR "Stacer Community")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Linux System Optimizer and Monitoring")
set(CPACK_PACKAGE_DESCRIPTION "Stacer is a Linux system optimizer and monitoring application.
It provides tools for managing system resources, services, startup applications,
package management, and system cleanup on Linux distributions.")
set(CPACK_PACKAGE_VERSION "${PROJECT_VERSION}")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT "oguzhaninan@gmail.com")
set(CPACK_PACKAGE_HOMEPAGE_URL "https://github.com/oguzhaninan/Stacer")

# License
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")

# Package file name
set(CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}-${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_PROCESSOR}")

# Install locations
set(CPACK_PACKAGING_INSTALL_PREFIX "/usr")

# Debian-specific settings
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Oguzhan Inan <oguzhaninan@gmail.com>")
set(CPACK_DEBIAN_PACKAGE_SECTION "utils")
set(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
set(CPACK_DEBIAN_PACKAGE_HOMEPAGE "https://github.com/oguzhaninan/Stacer")

# Debian dependencies - these are the runtime dependencies
set(CPACK_DEBIAN_PACKAGE_DEPENDS
    "libqt5core5a, libqt5gui5, libqt5widgets5, libqt5svg5, libqt5charts5, \
libxcb-xinerama0, libxcb-cursor0, libxkbcommon-x11-0")

# Recommended packages
set(CPACK_DEBIAN_PACKAGE_RECOMMENDS "systemd, curl")

# Debian architecture (detect automatically)
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64" OR CMAKE_SYSTEM_PROCESSOR MATCHES "amd64")
    set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "aarch64" OR CMAKE_SYSTEM_PROCESSOR MATCHES "arm64")
    set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "arm64")
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "armhf" OR CMAKE_SYSTEM_PROCESSOR MATCHES "armv7l")
    set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "armhf")
else()
    set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "${CMAKE_SYSTEM_PROCESSOR}")
endif()

# Generator selection
set(CPACK_GENERATOR "DEB;TGZ")

# Include CPack
include(CPack)

# ============================================================================
# Install Rules (for make install and CPack)
# ============================================================================

# Install icons
install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/icons/hicolor"
    DESTINATION share/icons
    CONFIGURATIONS Release RelWithDebInfo MinSizeRel
)
