//
// Created by William Murphy on 5/13/22.
//

#include "Queue.h"


namespace data_structures_and_algorithms {

    Queue::Queue() : _size(0), _pos(0) {}

    Queue::Queue(Queue &other) {}

    Queue::Queue(int size) : _size(size), _pos(0), _top(0) {
        this->_data = new int[this->_size];
    }

    void Queue::enqueue(int value) {
        if (this->_pos < this->_size) {
            this->_data[this->_pos] = value;
            this->_pos++;
        } else {
            std::cout << "Queue is full!\n"
            << this->is_full() << "\n";
        }
    }

    int Queue::dequeue() {
        // check if queue is empty
        if (this->is_empty()) {
            std::cout << "Queue is empty! Nothing to dequeue\n";
            return -1;
        }
        if (this->_top < this->_pos) {
            int value = this->_data[this->_top];
            int *temp = new int[this->_size];
            // increment top so it points to the next element in the queue
            this->_top++;
            int new_pos = 0;

            // Move up the current queue items
            // Do this by creating a new queue, copy over
            // and delete the original queue
            while (this->_top < this->_pos) {
                temp[new_pos] = this->_data[this->_top];
                new_pos++;
                this->_top++;
            }
            delete[] this->_data;
            this->_data = temp;
            this->_top = 0;
            this->_pos = new_pos;

            return value;

        }
    }

    bool Queue::is_empty() {
        if (this->_pos == 0) {
            return true;
        } else {return false;}
    }

    bool Queue::is_full() {
        if (this->_pos == this->_size) {
            return true;
        } else {return false;}
    }

    int Queue::peek() {
        if (!this->is_empty()) {
            return this->_data[this->_top];
        }
    }



}