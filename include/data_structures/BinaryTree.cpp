//
// Created by William Murphy on 5/14/22.
//

#include "BinaryTree.h"
namespace data_structures_and_algorithms {

	BinaryTree::BinaryTree() {
		this->_root = nullptr;
	}

	BinaryTree::BinaryTree(int data) {

		// create an instance of a b-tree with
		//	the root node initialized
		if (!this->_root) {
			B_TreeNode* temp = new B_TreeNode(data);
			this->_root = temp;
			std::cout << "Added root node to b-tree\n"
				<< "with value ==> "
				<< this->_root->get_data() << "\n";
		}
		
	}

	void BinaryTree::insert(int value) {
		// create a temp node
		B_TreeNode* temp = new B_TreeNode(value);

		// TEST variables: Start
		int r_pos = 0;
		int l_pos = 0;
		// TEST variables: End

		// step 1: is root null?
		if (!this->_root) {
			
			this->_root = temp;
			this->_root->set_data(temp->_data);

			std::cout << "Added root node to b-tree\n"
				<< "with value ==> "
				<< this->_root->_data << "\n";
		}
		// If the root node already exists
		else {
			B_TreeNode* current = this->_root;
			// while current is not pointing to a null pointer
			//		iterate through until current points to a null pointer
			//		and then insert the new node in that position
			while (current)	{
			
				std::cout << "CURRENT VALUE ==> " << current->_data << "\n";
				if (value > current->_data) {
					// value is greater than current node value
					current = current->_right_child;

					// TEST CODE
					r_pos++;
					std::cout << "TRAVERSE RIGHT\nr_pos ==> "<< r_pos << " \n";
					// END

				}
				else if (value < current->_data) {
					// TEST CODE
					l_pos++;
					std::cout << "TRAVERSE LEFT\n" << "l_pos ==> " << l_pos << "\n";
					// value is less than current node value
					current = current->_left_child;
					// END
				}
				if (value == current->_data) {	
					// value already inside the binrary tree
					std::cout << "value: " << value << " is already in the binary tree\n"
						<< "Current Node value is: " << current->get_data() << "\n";
				}
			}
			// insert the new node in the correct position
			current = temp;
		}

	}


}