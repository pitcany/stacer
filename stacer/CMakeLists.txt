cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(stacer)

# check_ipo_supported() requires CMP0069 to be NEW
if(POLICY CMP0069)
  cmake_policy(SET CMP0069 NEW)
endif()

set(MANAGERS_DIR  "${CMAKE_CURRENT_SOURCE_DIR}/Managers")
set(PAGES_DIR     "${CMAKE_CURRENT_SOURCE_DIR}/Pages")

include_directories(
  "${PROJECT_ROOT}/stacer-core"
  "${CMAKE_CURRENT_SOURCE_DIR}"
  "${MANAGERS_DIR}"
  "${PAGES_DIR}/Dashboard"
  "${PAGES_DIR}/Processes"
  "${PAGES_DIR}/Resources"
  "${PAGES_DIR}/Services"
  "${PAGES_DIR}/Settings"
  "${PAGES_DIR}/StartupApps"
  "${PAGES_DIR}/SystemCleaner"
  "${PAGES_DIR}/Uninstaller"
  "${CMAKE_CURRENT_BINARY_DIR}" # Necessary for CMake 3.7 and older
)

# Sources
file(GLOB_RECURSE ${PROJECT_NAME}_srcs         "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE ${PROJECT_NAME}_translations "${PROJECT_ROOT}/translations/*.ts")

# Translations (optional - only if Qt5LinguistTools is found)
find_package(Qt5LinguistTools QUIET)
if(Qt5LinguistTools_FOUND)
  # Only compile the committed .ts files to .qm. qt5_create_translation() would run lupdate
  # on every build: it rewrites the tracked .ts files and, as it only scans the .cpp files
  # (not the .ui forms), marks their strings as vanished so they are dropped from the .qm.
  # Update the .ts files on purpose with: lupdate stacer/stacer.pro
  qt5_add_translation(QM_FILES ${${PROJECT_NAME}_translations})
  set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${QM_FILES}")
else()
  message(STATUS "Qt5LinguistTools not found - translations will not be compiled")
  set(QM_FILES "")
endif()

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(${PROJECT_NAME}
  ${${PROJECT_NAME}_srcs}
  "${CMAKE_CURRENT_SOURCE_DIR}/static.qrc"
  ${QM_FILES}
)

target_link_libraries(${PROJECT_NAME}
  stacer-core  Qt5::Core  Qt5::Gui  Qt5::Widgets  Qt5::Charts  Qt5::Svg  Qt5::Concurrent
)

# Running LTO in Release builds, if the C++ compiler is GNU GCC
# (not when cxxbasics selected the lld linker, which cannot link GCC's LTO objects)
if("${CMAKE_BUILD_TYPE}" STREQUAL "Release" AND "${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU"
   AND NOT "${CMAKE_CXX_LINK_FLAGS}" MATCHES "fuse-ld=lld")
  # Check if LTO is supported
  include(CheckIPOSupported OPTIONAL RESULT_VARIABLE CHECK_IPO_AVAILABLE)
  if(CHECK_IPO_AVAILABLE)
    check_ipo_supported(RESULT LTO_SUPPORTED OUTPUT LTO_ERROR)
    if(LTO_SUPPORTED)
      set_property(TARGET ${PROJECT_NAME} PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)
    else()
      message(STATUS "LTO not supported: ${LTO_ERROR}")
    endif()
  else()
    # Fallback for older CMake
    target_compile_options(${PROJECT_NAME} PRIVATE "-flto")
    target_link_options(${PROJECT_NAME} PRIVATE "-flto")
  endif()
endif()

install(
  TARGETS  ${PROJECT_NAME}
  CONFIGURATIONS Release RelWithDebInfo MinSizeRel # Not allowing to install an unoptimized build
  RUNTIME  DESTINATION  bin
)

install(
  FILES           "${PROJECT_ROOT}/applications/stacer.desktop"
  DESTINATION     share/applications
  CONFIGURATIONS  Release RelWithDebInfo MinSizeRel
)

install(
  FILES           "${PROJECT_ROOT}/stacer/static/logo.png"
  DESTINATION     share/icons
  CONFIGURATIONS  Release RelWithDebInfo MinSizeRel
  RENAME          stacer.png
)
