//
// Created by William Murphy on 5/14/22.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_NODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_NODE_H

namespace data_structures_and_algorithms {
    class Node {
    private:
        int _key;
    public:
        Node(int key);
        int get_key();
        Node* next;

    };
}


#endif //DATA_STRUCTURES_AND_ALGORITHMS_NODE_H
