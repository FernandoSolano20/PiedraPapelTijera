//
// Created by fersolano on 8/14/2021.
//

#include "Node.h"

Node::Node() {
    setNext(nullptr);
}


Jugador* Node::getData() {
    return data;
}

void Node::setData(Jugador* data) {
    this->data = data;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node *next) {
    this->next = next;
}