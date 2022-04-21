# Practice/2022/04/CMakeLists.txt

include_directories(${OpenCV_DIR}/install/include)
link_directories(${OpenCV_DIR}/build/bin/)

set(SRC_LIST
    21/hello.cpp)

add_executable(hello ${SRC_LIST})
target_link_libraries(hello ${OpenCV_LIBS})