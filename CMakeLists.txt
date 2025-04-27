cmake_minimum_required(VERSION 3.10.0)
project(simustack VERSION 0.1.0 LANGUAGES C CXX)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set Output Directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include Directories
include_directories(include)

# Source Files
file(GLOB SOURCES "src/*.cpp")

# Executable
add_executable(simustack ${SOURCES})
include_directories(${include})

include(CTest)
enable_testing()

