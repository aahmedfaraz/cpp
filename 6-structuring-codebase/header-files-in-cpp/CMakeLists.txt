cmake_minimum_required(VERSION 3.20)

project(MATH CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

add_executable(ahmed_app ${PROJECT_SOURCES})

target_include_directories(ahmed_app PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

# This CMakeLists.txt file sets up a C++ project named "MATH" with the following configurations:
# 1. It specifies that the minimum required version of CMake is 3.20
# 2. It sets the C++ standard to C++20 and makes it a required standard.
# 3. It includes all the source files in the "src" directory.
# 4. It creates an executable named "ahmed_app" from the source files.
# 5. It sets the include directories for the executable to the "include" directory.

# Command to compile the project using CMake:
# Goto root of the project
# cmake -S . -B build
# cmake --build build
