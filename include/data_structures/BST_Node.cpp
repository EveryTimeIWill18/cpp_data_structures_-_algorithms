//
// Created by William Murphy on 5/16/22.
//

#include "BST_Node.h"

namespace data_structures_and_algorithms {
    BST_Node::BST_Node() {
        this->_right = nullptr;
        this->_left = nullptr;
    }

    BST_Node::BST_Node(int key) {
        this->_key = key;
        this->_right = nullptr;
        this->_left = nullptr;
    }

    BST_Node* BST_Node::get_right_child() {
        return this->_right;
    }

    BST_Node* BST_Node::get_left_child() {
        return this->_left;
    }

    int BST_Node::get_key() {
        return this->_key;
    }

}