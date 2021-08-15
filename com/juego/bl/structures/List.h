//
// Created by fersolano on 8/14/2021.
//

#ifndef PIEDRAPAPELTIJERA_LIST_H
#define PIEDRAPAPELTIJERA_LIST_H


#include "../objects/Jugador.h"
#include "Node/Node.h"

class List {
public:
    List();
    bool isEmpty();
    int getSize();
    void add(Jugador* jugador);
    string toString();
    Node* getHead();
protected:
    void setHead(Node* node);
    void setSize(int num);
    int size;
private:
    Node* head;
};


#endif //PIEDRAPAPELTIJERA_LIST_H
