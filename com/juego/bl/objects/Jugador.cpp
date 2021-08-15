//
// Created by fersolano on 8/14/2021.
//

#include "Jugador.h"

Jugador::Jugador() {
    setNombre("");
    setPuntos(0);
}

void Jugador::setNombre(string nombre) {
    this->nombre = nombre;
}

string Jugador::getNombre() {
    return nombre;
}

void Jugador::setPuntos(int puntos) {
    this->puntos = puntos;
}

int Jugador::getPuntos() {
    return puntos;
}

string Jugador::toString() {
    return getNombre() + ";" + to_string(getPuntos());
}