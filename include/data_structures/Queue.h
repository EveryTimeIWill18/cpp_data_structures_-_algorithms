//
// Created by William Murphy on 5/13/22.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H
#include <iostream>

namespace data_structures_and_algorithms {
    class Queue {
    private:
        int *_data;
        int _size;
        int _pos;
        int _top;
    public:
        Queue();                    // default constructor
        Queue(Queue &other);        // copy constructor
        Queue(int size);            // constructor
        void enqueue(int value);    // insert item into the queue
        int dequeue();              // remove first inserted item
        bool is_empty();            // check if queue is empty
        bool is_full();             // check if the queue is full
        int peek();                 // get the first element
                                    //   in the queue w/o removal

    };
}



#endif //DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H
