//
// Created by lauri on 10/11/2021.
//

#ifndef TRABAJODECLASE_LINKEDLIST_H
#define TRABAJODECLASE_LINKEDLIST_H

#include <vector>
#include <string>
#include "Node.h"
template <class T>
class LinkedList {
public:

    LinkedList();

    bool isEmpty();

    void addNodeFirst( T );

    void addNodeLast( T );

   void addNodeBeforeTo(Node<T>*,T);

   // T deleteNod(Node<T>*);

    std::vector<T> getLinkedList();
    Node<T>* findNode(std::string);

    T* findInfo(std::string);

    virtual ~LinkedList();

private:
    Node<T>* head;
};




#endif //TRABAJODECLASE_LINKEDLIST_H
