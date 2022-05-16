//
// Created by William Murphy on 5/16/22.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_BST_NODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_BST_NODE_H

namespace data_structures_and_algorithms {
    class BST_Node {
        private:

        public:
            BST_Node* _right;
            BST_Node* _left;
        int _key;
            BST_Node();
            BST_Node(int key);
            BST_Node* get_right_child();
            BST_Node* get_left_child();
            int get_key();


    };
}


#endif //DATA_STRUCTURES_AND_ALGORITHMS_BST_NODE_H
