//
// Created by William Murphy on 5/13/22.
//

#include "Stack.h"

namespace data_structures_and_algorithms {


    Stack::Stack() : _size(0), _pos(0) {this->_data = nullptr;}

    Stack::Stack(Stack &other) {}

    Stack::Stack(int size) : _size(size), _pos(_size-1) {
        // Dynamically allocate memory for the stack
        this->_data = new int[this->_size];
    }

    int Stack::get_size() {
        return this->_size;
    }

    void Stack::push_back(int element) {
        if (this->_pos >= 0) {
            this->_data[this->_pos] = element;
            this->_pos--;
        } else {
            std::cout <<"The Stack if filled to capacity!\n";
        }
    }

    int Stack::get_pos() {
        return this->_pos;
    }

    void Stack::resize(int new_size) {
        // create a temporary container
        int *temp = new int[new_size];
        // if pointer is pointing to size - 1 then container is empty
        // so all we need to do is replace the current container
        // with the new one
        if (this->get_pos() == this->get_size()-1) {
            delete [] this->_data;
            this->_data = temp;  // set the stack to the temp stack
            this->_size = new_size;
            this->_pos = this->get_size() - 1;
        }
        // If stack is not completely filled and not pointing to the last
        // element in the stack then the pointer points to
        // the empty position right after the last inserted element
        // thus, we must increment the pointer up by 1
        if (this->get_pos() < this->get_size()-1) {
            int len = this->get_size() - 1; // len of original stack
            int new_len = new_size - 1;     // len of new stack
            while (len > this->get_pos()) {
                temp[new_len] = this->_data[len];
                len--;
                new_len--;
            }
            delete [] this->_data;
            this->_data = temp;
            this->_size = new_size;
            this->_pos = new_len;
        }
    }

    int Stack::pop() {
        // if stack empty then return -1
        if (this->get_pos() == this->get_size() -1) {
            std::cout << "Nothing to pop, the Stack is empty!\n";
            return -1;
        }
        // if the stack is not empty
        if (this->get_pos() < this->get_size() -1) {
            int temp_pos = this->get_pos() + 1;
            int element = this->_data[temp_pos];
            this->_pos = temp_pos;
            return element;
        }
    }

    int Stack::peek() {
        if (this->get_pos() < this->get_size() - 1) {
            return this->_data[this->get_pos() +1];
        }
        if (this->get_pos() == this->get_size() - 1){
            return this->is_empty();
        }
    }

    bool Stack::is_empty() {
        if (this->get_pos() == this->get_size() - 1){
            return true;
        } else {
            return false;
        }
    }

    void Stack::print() {
        int pntr = this->_size - 1;
        while (pntr > this->get_pos()) {
            std::cout << "stack[" << pntr << "] = "
                      << this->_data[pntr] << "\n";
            pntr--;
        }
    }

    bool Stack::is_full() {
        if (this->get_pos() < 0) {
            return true;
        } else {
            return false;
        }
    }

}