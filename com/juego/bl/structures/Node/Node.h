//
// Created by fersolano on 8/14/2021.
//

#ifndef PIEDRAPAPELTIJERA_NODE_H
#define PIEDRAPAPELTIJERA_NODE_H


#include "../../objects/Jugador.h"

class Node {
public:
    Node();
    Jugador* getData();
    void setData(Jugador* data);
    Node* getNext();
    void setNext(Node* next);
private:
    Jugador* data;
    Node* next;
};


#endif //PIEDRAPAPELTIJERA_NODE_H
