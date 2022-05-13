# Practice/2022/05/CMakeLists.txt

include_directories(${OpenCV_DIR}/include)
link_directories(${OpenCV_DIR}/bin/)

set(SRC_LIST_01
    01/hello.cpp)

add_executable(hello ${SRC_LIST_21})
target_link_libraries(hello ${OpenCV_LIBS})

