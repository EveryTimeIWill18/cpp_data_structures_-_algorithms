//
// Created by William Murphy on 5/13/22.
//
#include <iostream>
#include "include/data_structures/Stack.h"

using data_structures_and_algorithms::Stack;

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


}