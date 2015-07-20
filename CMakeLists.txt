cmake_minimum_required(VERSION 3.2)
project(AFN)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(AFN ${SOURCE_FILES} Estado.h Estado.cpp Transicion.h Transicion.cpp EstadoSubconjuntos.cpp EstadoSubconjuntos.h HelloWorld)