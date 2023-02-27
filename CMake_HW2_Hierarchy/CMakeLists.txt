cmake_minimum_required(VERSION 3.1)
project(figure_cmake_project)

set(SOURCE_LIB Triangle.cpp Square.cpp RightTriangle.cpp Rectangle.cpp Rhombus.cpp Quadrangle.cpp Parallelogram.cpp IsoscelesTriangle.cpp EquilateralTriangle.cpp Figure.cpp)

add_executable(Figure Figure_2.cpp)
add_library (hierarchy ${SOURCE_LIB})
target_link_libraries(Figure hierarchy)		

