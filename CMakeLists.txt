cmake_minimum_required(VERSION 3.24)
project(main.cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(main.cpp main.cpp ArrayList.h ArrayList.cpp SingleListHead.h SingleListHT.h DoubleList.h node_double.h node_single.h SingleListHead.cpp DoubleList.cpp SingleListHT.cpp UI.cpp UI.h)
