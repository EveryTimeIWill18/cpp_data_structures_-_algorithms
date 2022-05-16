//
// Created by William Murphy on 5/14/22.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H
#include<iostream>
#include"B_TreeNode.h"

namespace data_structures_and_algorithms {
    class BinaryTree {
    private:
        B_TreeNode* _root = nullptr;


    public:
        BinaryTree();               // default constructor
        BinaryTree(int data);       // constructor with root node set
        BinaryTree(BinaryTree& other);  // copy constructor
        void insert(int value);     // insert into the tree
    };
}

#endif //DATA_STRUCTURES_AND_ALGORITHMS_BINARYTREE_H
