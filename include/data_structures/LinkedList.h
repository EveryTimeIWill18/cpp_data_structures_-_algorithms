//
// Created by William Murphy on 5/14/22.
//

#ifndef SOME_TEST_PROJECY_LINKEDLIST_H
#define SOME_TEST_PROJECY_LINKEDLIST_H
#include <iostream>
#include "Node.h"


namespace data_structures_and_algorithms {
    class LinkedList {
    private:
        Node* _head = nullptr;

    public:
        LinkedList();           // default constructor
        LinkedList(int key);    // constructor
        void insert_front(int key);   // insert a new node at the front
        int delete_front();     // delete first node
        void print();           // print the list nodes
        bool search(int key);   // search for a given key
        void delete_node(int key);  // delete a given node

    };

}

#endif //SOME_TEST_PROJECY_LINKEDLIST_H
