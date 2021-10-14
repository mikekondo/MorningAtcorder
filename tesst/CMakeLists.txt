cmake_minimum_required(VERSION 3.21.3)
project(tesst)


find_package(Eigen3 REQUIRED)
find_package(OpenCV REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR}
${OpenCV_INCLUDE_DIRS})

add_executable(test1 test1.cpp)
target_link_libraries(
    test1 ${OpenCV_LIBRARIES}
)
add_executable(test2 test2.cpp)
target_link_libraries(
    test2 ${OpenCV_LIBRARIES}
)

