//
// Created by fersolano on 8/14/2021.
//

#ifndef PIEDRAPAPELTIJERA_QUEUE_H
#define PIEDRAPAPELTIJERA_QUEUE_H


#include "../List.h"

class Queue: public List{
public:
    Queue();
    void push(Jugador* jugador);
    Jugador* pop();
};


#endif //PIEDRAPAPELTIJERA_QUEUE_H
