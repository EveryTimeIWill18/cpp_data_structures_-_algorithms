//
// Created by William Murphy on 5/14/22.
//

#include "Node.h"
namespace data_structures_and_algorithms {

    Node::Node(int key) {
        this->_key = key;
        this->next = nullptr;
    }
    int Node::get_key() {
        return this->_key;
    }
}