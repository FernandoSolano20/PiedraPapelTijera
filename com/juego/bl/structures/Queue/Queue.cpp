//
// Created by fersolano on 8/14/2021.
//

#include "Queue.h"

Queue::Queue() {
    setHead(nullptr);
    size = 0;
}

void Queue::push(Jugador *jugador) {
    setSize(1);
    Node*aux = getHead();
    Node* temp = new Node();
    temp->setData(jugador);
    if (aux == nullptr) {
        setHead(temp);
    } else{
        while (aux->getNext() != nullptr) {
            aux = aux->getNext();
        }
        aux->setNext(temp);
        temp->setNext(nullptr);
    }
}

Jugador* Queue::pop() {
    Node* aux = getHead();
    if (aux == nullptr) {
        return NULL;
    }
    setSize(-1);
    Jugador* data = aux->getData();
    setHead(aux->getNext());
    return data;
}