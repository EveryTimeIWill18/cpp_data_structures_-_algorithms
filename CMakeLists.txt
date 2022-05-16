cmake_minimum_required(VERSION 3.17)
project(data_structures_and_algorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_data_structures_and_algorithms main.cpp
        include/data_structures/Stack.h include/data_structures/Stack.cpp
        include/data_structures/Queue.h include/data_structures/Queue.cpp
        include/data_structures/Node.h include/data_structures/Node.cpp
        include/data_structures/LinkedList.cpp include/data_structures/LinkedList.h
        include/data_structures/BinaryTree.h include/data_structures/BinaryTree.cpp
        include/data_structures/B_TreeNode.h include/data_structures/B_TreeNode.cpp
        include/data_structures/BST_Node.h include/data_structures/BST_Node.cpp
        include/data_structures/BinarySearchTree.h include/data_structures/BinarySearchTree.cpp)