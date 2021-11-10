//
// Created by lauri on 10/11/2021.
//

#include "LinkedList.h"
template<class T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL ? true : false;
}

template<class T>
void LinkedList<T>::addNodeFirst(T info) {//t es el tipo de variable
    Node<T> *nodeNew = new Node<T>(info);
    if (isEmpty()) {
        head = nodeNew;
    } else {
        nodeNew->next = head;//para poner en nodo en la cabeza
        head = nodeNew;//para pasarle la direccion de memoria o apuntador
    }
}
template<class T>
Node<T> *LinkedList<T>::findNode(std::string direccion) {
    Node<T>* aux=head;
    while(aux!=NULL){
       if(direccion.compare(aux->info.getDireccion())){
           return aux;
       }
       aux=aux->next;
    }
    return NULL;
}

template<class T>
T *LinkedList<T>::findInfo(std::string direccion) {
    Node<T>* aux=head;
    while(aux!=NULL){
        if(aux->info.getDireccion().copare(direccion)==0){
            return &aux->info;
        }
        aux=aux->next;
    }
    return NULL;
}

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T> *before, T info) {
    Node<T> node=new Node<T>(info);
if(before==head){
    node->next=head;
    head=node;

}
else{
    Node<T>* act=head;
    while(act->next!=before){
        act=act->next;
    }
    node->next=node;
}
}

template<class T>
std::vector<T> LinkedList<T>::getLinkedList() {
    Node<T> *aux = head;//creo un nodo que se llama auxiliar que tiene lo que hay en la cabeza
    std::vector<T> out;//sacar los datos del vector

    while (aux != NULL) {
        out.push_back(aux->info);
        aux = aux->next;
    }

    return out;
}


template<class T>
void LinkedList<T>::addNodeLast( T info ) {
    Node<T> *nodeNew = new Node<T>(info);
    if (isEmpty()) {
        head = nodeNew;
    } else {
        Node<T>* aux = head;
        while( aux->next != NULL ){
            aux = aux->next;
        }
        aux->next = nodeNew;
    }
}

template<class T>
LinkedList<T>::~LinkedList() {
    Node<T>* aux;
    while( head != NULL ){
        aux = head;
        head = head->next;
        delete(aux);
    }
}







