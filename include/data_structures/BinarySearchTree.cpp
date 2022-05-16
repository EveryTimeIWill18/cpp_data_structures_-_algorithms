//
// Created by William Murphy on 5/16/22.
//

#include "BinarySearchTree.h"

namespace data_structures_and_algorithms {

    BinarySearchTree::BinarySearchTree() {
        this->_root = nullptr;
    }

    BinarySearchTree::BinarySearchTree(int key) {
        this->_root = new BST_Node(key);
        std::cout << "ROOT ==> " << this->_root->get_key()
            << "\n";
    }

    void BinarySearchTree::insert( int key) {
        // Create a new node and set the root to it
        BST_Node* temp = new BST_Node(key);

        if (!this->_root) {

            this->_root = temp;
        } else {
            // Create a BST_Node pointer and point to the root
            BST_Node* root_node = this->_root; // x
            BST_Node* current = nullptr; // y

            while (root_node != nullptr) {
                current = root_node;
                if (key < root_node->get_key()) {
                    root_node = root_node->get_left_child();
                } else {
                    root_node = root_node->get_right_child();
                }
            }
            // Insert the new node in tje correct position
            if (key < current->get_key()) {
                std::cout << "LEFT CURRENT KEY==>" << key << std::endl;
                current->_left = temp;
            } else {
                std::cout << "RIGHT CURRENT KEY==>" << key << std::endl;
                current->_right = temp;
            }

        }
    }





}



