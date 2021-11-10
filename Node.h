//
// Created by lauri on 10/11/2021.
//

#ifndef TRABAJODECLASE_NODE_H
#define TRABAJODECLASE_NODE_H
#include <cstdlib>
template <class T> class LinkedList;

template <class T>//funcion-plantilla

class Node {
    friend class LinkedList<T>;

public:
    Node(T info) : info(info) {
        next = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;
};


#endif //TRABAJODECLASE_NODE_H
