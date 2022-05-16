//
// Created by William Murphy on 5/13/22.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include "include/data_structures/Stack.h"
#include "include/data_structures/Queue.h"
#include "include/data_structures/LinkedList.h"
#include "include/data_structures/BinaryTree.h"
#include "include/data_structures/BinarySearchTree.h"
#include "include/data_structures/BST_Node.h"


using data_structures_and_algorithms::Stack;
using data_structures_and_algorithms::Queue;
using data_structures_and_algorithms::LinkedList;
using data_structures_and_algorithms::BinaryTree;
using data_structures_and_algorithms::BST_Node;
using data_structures_and_algorithms::BinarySearchTree;


int main() {
    std::cout << "Data Structures & Algorithms in C++\n";


    /* Stack Data Structure */
int main() {
    std::cout << "Data Structures & Algorithms in C++\n";


    /* Stack Data Structure */
    auto s1 = Stack(4);
    s1.push_back(4);
    s1.push_back(3);
    s1.push_back(2);
    s1.push_back(1);
    s1.print();
    int front = s1.pop();
    std::cout << "front ==> " << front << "\n";
    s1.print();
    std::cout << "Is s1 full? " << s1.is_full() << "\n";
    s1.resize(10);
    std::cout << "s1's new size ==> " << s1.get_size()
        << "\ns1 pointer position ==> " << s1.get_pos() << "\n";

    /* END: Stack Data Structure */

    /* Queue Data Structure */
    auto q1 = Queue(4);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
//    q1.enqueue(5);  // enqueue works correctly

    int queue_value = q1.dequeue();
    int queue_value_2 = q1.dequeue();
    std::cout << "queue_value ==> " << queue_value << "\n";
    std::cout << "queue_value ==> " << queue_value_2 << "\n";
    std::cout << "Top Element in the Queue ==> "
        << q1.peek() << "\n";
    /* END: Queue Data Structure */

    /* Linked List Data Structure */
    auto list1 = LinkedList(1);
    list1.insert_front(5);
    list1.insert_front(3);
    list1.insert_front(7);
    list1.insert_front(100);
    list1.insert_front(200);
    list1.print();
    int deleted_node_value = list1.delete_front();
    std::cout << "Deleted Node with value: "
        << deleted_node_value << "\n";

    list1.print();

    list1.search(5);

    list1.delete_node(5);

    list1.print();

    /* END: Linked List Data Structure */

    /* LAMBDAS */
    int a2 = 100;
    auto print_nums = [&a2]() {
        a2 = a2*100;
        return a2*100;
    };

    std::vector<int> v1 = {1, 2, 3, 4, 5};
    int v_sum_ = 0;
    std::for_each(v1.begin(), v1.end(),[&](int s) {v_sum_ += s; });

    std::cout << "v_sum_ ==> " << v_sum_ << std::endl;
    std::cout << "print_nums ==> " << print_nums() << "\n";
    std::cout << "a2 ==> " << a2 << "\n";

    auto f1 = [](int x, int y) {return x + y;};
    std::function<int(int, int)>  f2 = [](int x, int y) { return x + y; };

    std::vector<int> v2 = {1,2,3,4,5,6,7,8,9,10};
    auto v2_sum_ = std::accumulate(v2.begin(), v2.end(), 0);
    std::cout << "v2_sum_ = " << v2_sum_ << std::endl;

    // string accumulate
    std::vector<std::string> sv_1 = {"will", "James", "Melissa", "Bob", "John"};

    std::for_each(sv_1.begin(), sv_1.end(),
               [](const auto & elem ) {
        std::cout<<elem<<" ";});
    std::cout << "\n";




    /* END: LAMBDAS */

    /* Binary Tree Data Structure */
    auto bst_1 = BinarySearchTree();
    bst_1.insert(13);
    bst_1.insert(10);
    bst_1.insert(20);
    bst_1.insert(18);
    bst_1.insert(5);





    /* END: Binary Tree Data Structure */





return 0;

}
