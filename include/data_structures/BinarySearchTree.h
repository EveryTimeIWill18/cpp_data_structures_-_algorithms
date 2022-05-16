//
// Created by William Murphy on 5/16/22.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_BINARYSEARCHTREE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_BINARYSEARCHTREE_H

#include <iostream>
#include "BST_Node.h"

namespace data_structures_and_algorithms {
    class BinarySearchTree {
        private:
            BST_Node* _root;
            friend class BST_Node;
            friend BST_Node* BST_Node::get_right_child();
            friend BST_Node* BST_Node::get_left_child();
            friend int BST_Node::get_key();
        public:
            BinarySearchTree();
            BinarySearchTree(int key);
            void insert(int key);


    };
}


#endif //DATA_STRUCTURES_AND_ALGORITHMS_BINARYSEARCHTREE_H
