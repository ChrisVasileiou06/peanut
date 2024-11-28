cmake_minimum_required(VERSION 3.20)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "../bin/")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "../bin/")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin/")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(pch)

set(HEADERS
    ./src/Pch.h
)

set(SOURCES
    ./src/Pch.cc
)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Build type" FORCE)
endif()

add_library(pch ${HEADERS} ${SOURCES})