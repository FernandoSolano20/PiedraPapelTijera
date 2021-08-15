//
// Created by fersolano on 8/14/2021.
//

#ifndef PIEDRAPAPELTIJERA_BUSINESS_H
#define PIEDRAPAPELTIJERA_BUSINESS_H


#include "../dl/DataAccess.h"
#include "structures/List.h"
#include "structures/Queue/Queue.h"
#include "../pojo/Mensaje.h"

class Business {
public:
    Business();
    void agregarJugador(string nombre);
    bool iniciarPartida();
    Mensaje* obtenerJugadorGanador(int opc1, int opc2);
    string obtenerJugadoresActuales();
    string mostrarPuntos();
    string top5Jugadores();
private:
    void initList();
    void createJugador(string play);
    int ganador(int opc1, int opc2);
    List* jugadores;
    Queue* cola;
    DataAccess* dl;
    Jugador* j1;
    Jugador* j2;
};


#endif //PIEDRAPAPELTIJERA_BUSINESS_H
