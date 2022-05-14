//
// Created by William Murphy on 5/14/22.
//

#ifndef SOME_TEST_PROJECY_NODE_H
#define SOME_TEST_PROJECY_NODE_H

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


#endif //SOME_TEST_PROJECY_NODE_H
