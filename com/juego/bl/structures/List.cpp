//
// Created by fersolano on 8/14/2021.
//

#include "List.h"

List::List() {
    setHead(nullptr);
    size = 0;
}

bool List::isEmpty() {
    if (getSize() == 0){
        return true;
    }
    return false;
}

int List::getSize() {
    return size;
}

void List::add(Jugador* jugador) {
    setSize(1);
    Node*aux = head;
    Node* temp = new Node();
    temp->setData(jugador);
    if (head == nullptr) {
        head = temp;
    } else {
        while (aux->getNext() != nullptr) {
            aux = aux->getNext();
        }
        aux->setNext(temp);
    }
}

string List::toString() {
    string players = "";
    Node* aux = getHead();
    while (aux != nullptr) {
        Jugador* jugador = aux->getData();
        players += jugador->toString() + "|\n";
        aux = aux->getNext();
    }
    return players;
}

Node * List::getHead() {
    return head;
}

void List::setHead(Node *node) {
    head = node;
}

void List::setSize(int num) {
    size = size + num;
}