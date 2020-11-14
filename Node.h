//
// Created by Kevin Leong on 4/24/20.
//

#include <iostream>

using namespace std;

#ifndef PROGRAM5_NODE_H
#define PROGRAM5_NODE_H

template <typename Type>

class Node {
public:
    Type payload;
    Node* next;
    Node* previous;

    Node(){
        next = nullptr;
    }

    Node(Type payload) {
        this->payload = payload;
        next = previous = nullptr;
    }
};


#endif //PROGRAM5_NODE_H
