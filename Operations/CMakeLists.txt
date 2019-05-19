cmake_minimum_required(VERSION 3.13)
project(Operations)

set(CMAKE_CXX_STANDARD 17)

add_executable(Operations main.cpp src/Operators/OperatorInterface.cpp src/Operators/OperatorInterface.h src/Reader.cpp src/Reader.h src/Operators/CulculationDTO.cpp src/Operators/CulculationDTO.h src/Operators/Quadratic.cpp src/Operators/Quadratic.h src/Operators/Summ.cpp src/Operators/Summ.h src/Operators/Difference.cpp src/Operators/Difference.h src/Operators/Multiplication.cpp src/Operators/Multiplication.h src/Operators/Division.cpp src/Operators/Division.h src/CollectionOperations.cpp src/CollectionOperations.h)