//
// Created by William Murphy on 5/16/22.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_B_TREENODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_B_TREENODE_H
//
// Created by William Murphy on 5/14/22.
//

#include<iostream>
namespace data_structures_and_algorithms {
    class B_TreeNode {
    private:

    public:
        B_TreeNode* _left_child;
        B_TreeNode* _right_child;
        int _data;
        B_TreeNode(int data);
        int get_data();
        void set_data(int data);
        B_TreeNode* get_right_child();
        B_TreeNode* get_left_child();
    };
}
#endif //DATA_STRUCTURES_AND_ALGORITHMS_B_TREENODE_H
