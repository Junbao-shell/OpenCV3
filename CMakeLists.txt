cmake_minimum_required(VERSION 3.10)

project(OpenCV3)

# cpp standard version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# binary output
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/)

set(OpenCV_DIR "D:/Work/OpenSource/opencv/install/")
find_package(OpenCV REQUIRED)
if (OpenCV_FOUND)
    message(STATUS "find opencv package")

    link_directories(${OpenCV_LIBS})
endif()

add_subdirectory(Practice/2022/04/)
