# 1. Set the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# 2. Name your overall project
project(Cpp-Labs VERSION 1.0)

# 3. Use modern C++ standard (C++17 or C++20)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4. Compile each main file into its own independent executable
# Syntax: add_executable(EXECUTABLE_NAME SOURCE_FILE_PATH)

add_executable(1 src/1.cpp)
