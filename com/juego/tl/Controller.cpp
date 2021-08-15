//
// Created by fersolano on 8/15/2021.
//

#include "Controller.h"

Controller::Controller() {
    bl = new Business();
}

void Controller::agregarJugador(string nombre) {
    bl->agregarJugador(nombre);
}

bool Controller::iniciarPartida() {
    return bl->iniciarPartida();
}

Mensaje * Controller::obtenerJugadorGanador(int opc1, int opc2) {
    return bl->obtenerJugadorGanador(opc1, opc2);
}

string Controller::obtenerJugadoresActuales() {
    return bl->obtenerJugadoresActuales();
}

string Controller::mostrarPuntos() {
    return bl->mostrarPuntos();
}

string Controller::jugadoresOrdenados() {
    return bl->jugadoresOrdenados();
}

