cmake_minimum_required(VERSION 3.0.0)
project(InterfaceSegregation VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

add_library(Point SHARED src/main/cpp/Point.cpp)
add_library(Square SHARED src/main/cpp/Square.cpp)
add_library(Rectangle SHARED src/main/cpp/Rectangle.cpp)

add_executable(InterfaceSegregation src/main/cpp/main.cpp)
target_link_libraries(InterfaceSegregation Point Square Rectangle)

add_executable(GeometryTest src/main/cpp/GeometryTest.cpp)
target_link_libraries(GeometryTest Point Square Rectangle)
target_include_directories(GeometryTest PUBLIC /usr/local/Cellar/boost/1.69.0/include)

add_test(GeometryTest bin/GeometryTest)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
