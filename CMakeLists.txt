cmake_minimum_required(VERSION 3.16)

project(cpp_dsa
        VERSION 1.0
        DESCRIPTION "Data Structures and Algorithms in C++"
        LANGUAGES CXX)

# Use modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create executable
add_executable(cpp_dsa
    src/main.cpp
)

# Include directory
target_include_directories(cpp_dsa
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

# Enable warnings (important for learning)
if (MSVC)
    target_compile_options(cpp_dsa PRIVATE /W4)
else()
    target_compile_options(cpp_dsa PRIVATE -Wall -Wextra -Wpedantic)
endif()
