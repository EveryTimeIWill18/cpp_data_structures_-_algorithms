//
// Created by William Murphy on 5/14/22.
//

#include "LinkedList.h"
namespace data_structures_and_algorithms {

    LinkedList::LinkedList() {
        // Creates a linked list w/o any nodes
        std::cout << "Created an empty linked list\n";
    }

    LinkedList::LinkedList(int key)  {
        // insert he first node in the linked list
        if (!this->_head) {
            Node *temp = new Node(key);
            // set the head pointer to the new node
            this->_head = temp;
            std::cout << "Created a LinkedList with key ==> "
            << this->_head->get_key() << "\n";
        }
    }

    void LinkedList::insert_front(int key) {
        // check if the linked list is empty
        if (!this->_head) {
            Node* new_node = new Node(key);
            this->_head = new_node;
        }
        // If not empty, insert at the front
        // new_node->head->next
        // head->new_node
        else {
            Node* new_node = new Node(key);
            new_node->next = this->_head;
            this->_head = new_node;
        }
    }

    int LinkedList::delete_front() {

        if (this->_head) {
            Node* to_delete = this->_head;
            int deleted_key = to_delete->get_key();
            this->_head = this->_head->next;
            delete to_delete;
            return deleted_key;
        }

    }

    void LinkedList::print() {
        if (this->_head) {
            Node* current = this->_head;
            while (current) {
                std::cout << "current ==> " << current->get_key() << "\n";
                current = current->next;
            }
        } else {
            std::cout << "Head is a null pointer!\n";
        }
    }

    bool LinkedList::search(int key) {
        int list_pos = 0;
        if (this->_head) {
            Node* current = this->_head;
            while (current) {
                if (current->get_key() == key){
                    std::cout << "Node[" << key << "] found in position: "
                        << list_pos << "\n";
                    return true;
                } else {
                    current =  current->next;
                    list_pos++;
                }
            }
            return false;
        }
    }

    void LinkedList::delete_node(int key) {
        if (this->_head) {
            Node* current = this->_head;
            Node* previous = current;
            while (current) {
                if (current->get_key() == key) {
                    std::cout << "Node[" << key << "] found!\nDeleting ...\n";
                    previous->next = current->next;
                    delete current;
                    return;

                } else {
                    previous = current;
                    current = current->next;
                }
            }
            std::cout << "Key: " << key << " not found in the list!\n";
        }
    }


}





