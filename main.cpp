//
// Created by William Murphy on 5/13/22.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "include/data_structures/Stack.h"
#include "include/data_structures/Queue.h"
#include "include/data_structures/LinkedList.h"
using data_structures_and_algorithms::Stack;
using data_structures_and_algorithms::Queue;
using data_structures_and_algorithms::LinkedList;


int main() {
    std::cout << "Data Structures & Algorithms in C++\n";

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

    // lambdas
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

return 0;

}