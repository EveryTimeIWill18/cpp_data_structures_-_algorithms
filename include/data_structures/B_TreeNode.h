//
// Created by William Murphy on 5/14/22.
//

#ifndef SOME_TEST_PROJECY_B_TREENODE_H
#define SOME_TEST_PROJECY_B_TREENODE_H
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


#endif //SOME_TEST_PROJECY_B_TREENODE_H
