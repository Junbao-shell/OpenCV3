cmake_minimum_required(VERSION 3.10)

project(OpenCV3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

message(STATUS "CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")
set(CMAKE_MODULE_PATH "D:/Software/OpenCV3/opencv3/opencv/build/")

find_package(OpenCV)
if (OpenCV_FOUND)
    message(STATUS "find opencv package")
endif()

include_directories(D:/Software/OpenCV3/opencv3/opencv/build/include)
