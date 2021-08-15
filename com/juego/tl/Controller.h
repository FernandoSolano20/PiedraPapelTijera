//
// Created by fersolano on 8/15/2021.
//

#ifndef PIEDRAPAPELTIJERA_CONTROLLER_H
#define PIEDRAPAPELTIJERA_CONTROLLER_H


#include "../bl/Business.h"

class Controller {
public:
    Controller();
    void agregarJugador(string nombre);
    bool iniciarPartida();
    Mensaje* obtenerJugadorGanador(int opc1, int opc2);
    string obtenerJugadoresActuales();
    string mostrarPuntos();
    string jugadoresOrdenados();
private:
    Business* bl;
};


#endif //PIEDRAPAPELTIJERA_CONTROLLER_H
