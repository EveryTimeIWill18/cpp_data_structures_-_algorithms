cmake_minimum_required(VERSION 3.17)
project(some_test_projecy)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_data_structures_and_algorithms main.cpp
        include/data_structures/Stack.h include/data_structures/Stack.cpp
        include/data_structures/Queue.h include/data_structures/Queue.cpp
        include/data_structures/Node.h include/data_structures/Node.cpp
        include/data_structures/LinkedList.cpp include/data_structures/LinkedList.h)