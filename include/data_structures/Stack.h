//
// Created by William Murphy on 5/13/22.
//
#ifndef SOME_TEST_PROJECY_STACK_H
#define SOME_TEST_PROJECY_STACK_H
#include <iostream>

namespace data_structures_and_algorithms {
    class Stack {
    private:
        int *_data;
        int _size;
        int _pos;
    public:
        Stack();                 // default constructor
        Stack(Stack &other);     // copy constructor
        Stack(int size);         // constructor
        int get_size();          // get the size of the array
        int get_pos();           // return pointer position
        void push_back(int element);    // insert an element into the stack
        void print();                   // print the elements of the stack
        void resize(int new_size);      // resizing the stack
        int pop();                      // remove the LIFO element
        int peek();                     // get the top data element w/o removal
        bool is_empty();                // checks if the stack is empty
        bool is_full();                 // checks if the stack is full
    };


}


#endif //SOME_TEST_PROJECY_STACK_H
