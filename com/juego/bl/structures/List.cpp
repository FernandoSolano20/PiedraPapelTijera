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

string List::mostrar() {
    string players = "";
    Node* aux = getHead();
    int count = 0;
    while (aux != nullptr) {
        Jugador* jugador = aux->getData();
        count++;
        players += "Jugador #" + to_string(count) + ":\n    Nombre: " + jugador->getNombre() +
                "\n    Puntos: " + to_string(jugador->getPuntos()) + "\n";
        aux = aux->getNext();
    }
    return players;
}

void List::ordernar() {
    Jugador* temp;
    Node *primero = getHead(), *i, *j;
    for(i=primero;i->getNext()!=NULL;i=i->getNext()){
        for(j=i->getNext();j!=NULL;j=j->getNext()){
            if(i->getData()->getPuntos() < j->getData()->getPuntos()){ // "< de Mayor a menor" y "> de menor a mayor"
                temp = i->getData();
                i->setData(j->getData());
                j->setData(temp);
            }
        }
    }
}

void List::setHead(Node *node) {
    head = node;
}

void List::setSize(int num) {
    size = size + num;
}