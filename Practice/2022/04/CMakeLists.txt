# Practice/2022/04/CMakeLists.txt

include_directories(${OpenCV_DIR}/install/include)
link_directories(${OpenCV_DIR}/build/bin/)

set(SRC_LIST_21
    21/hello.cpp)

add_executable(hello ${SRC_LIST_21})
target_link_libraries(hello ${OpenCV_LIBS})

set(SRC_LIST_27
    27/SimpleTransform.cpp)

add_executable(trans ${SRC_LIST_27})
target_link_libraries(trans ${OpenCV_LIBS})

