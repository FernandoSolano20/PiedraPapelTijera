//
// Created by fersolano on 8/14/2021.
//

#ifndef PIEDRAPAPELTIJERA_JUGADOR_H
#define PIEDRAPAPELTIJERA_JUGADOR_H
#include <string>

using namespace std;

class Jugador {
public:
    Jugador();
    void setNombre(string nombre);
    string getNombre();
    void setPuntos(int puntos);
    int getPuntos();
    string toString();
private:
    string nombre;
    int puntos;
};


#endif //PIEDRAPAPELTIJERA_JUGADOR_H
