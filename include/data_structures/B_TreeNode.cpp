//
// Created by William Murphy on 5/14/22.
//

#include "B_TreeNode.h"


namespace data_structures_and_algorithms {

	B_TreeNode::B_TreeNode(int data) {

		this->_data = data;

		this->_left_child = nullptr;
		this->_right_child = nullptr;
	}


	int B_TreeNode::get_data() {
		return this->_data;
	}

	void B_TreeNode::set_data(int data) {
		this->_data = data;
	}

	B_TreeNode* B_TreeNode::get_right_child() {
		return this->_right_child;
	}

	B_TreeNode* B_TreeNode::get_left_child() {
		return this->_left_child;
	}


}