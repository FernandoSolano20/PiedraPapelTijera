//
// Created by fersolano on 8/14/2021.
//

#include "Business.h"
#include "../pojo/Mensaje.h"

Business::Business() {
    dl = new DataAccess();
    jugadores = new List();
    initList();
}

void Business::agregarJugador(string nombre) {
    Jugador* jugador = new Jugador();
    jugador->setNombre(nombre);
    jugadores->add(jugador);
    dl->write(jugadores->toString());
}

bool Business::iniciarPartida() {
    if (jugadores->getSize() >= 2) {
        cola = new Queue();
        Node* aux = jugadores->getHead();
        while (aux != nullptr) {
            cola->push(aux->getData());
            aux = aux->getNext();
        }
        j1 = cola->pop();
        j2 = cola->pop();
        return true;
    }
    return false;
}

Mensaje* Business::obtenerJugadorGanador(int opc1, int opc2) {
    int res = ganador(opc1, opc2);
    string moreInfo = "\n";
    Mensaje* msg = new Mensaje();

    if (cola->isEmpty()) {
        moreInfo = "\nFin de la partida. \n";
    }

    if (res == -1) {
        msg->setStatus(0);
        msg->setMsg("Ocurrio un error \n");
        return msg;
    }

    if (res == 0) {
        msg->setStatus(res);
        msg->setMsg("Empate \n");
        return msg;
    }

    if (res == 1) {
        msg->setStatus(-1);
        j1->setPuntos(j1->getPuntos() + 1);
        if (!cola->isEmpty()) {
            j2 = cola->pop();
            msg->setStatus(1);
        }
        dl->write(jugadores->toString());
        msg->setMsg(j1->getNombre() + " es el ganador" + moreInfo);
        return msg;
    }

    msg->setStatus(-1);
    j2->setPuntos(j2->getPuntos() + 1);
    if (!cola->isEmpty()) {
        j1 = cola->pop();
        msg->setStatus(1);
    }
    dl->write(jugadores->toString());
    msg->setMsg(j2->getNombre() + " es el ganador" + moreInfo);
    return msg;
}

string Business::obtenerJugadoresActuales() {
    return "Juegan: \nJugador 1: " + j1->getNombre() + "\n" + "Jugador 2: " + j2->getNombre() + "\n";
}

string Business::mostrarPuntos() {
    return jugadores->mostrar();
}

string Business::jugadoresOrdenados() {
    List* list = new List();
    Node* aux = jugadores->getHead();
    while (aux != nullptr) {
        list->add(aux->getData());
        aux = aux->getNext();
    }
    list->ordernar();
    return list->mostrar();
}

void Business::initList() {
    string delimiter = "|";
    string jugadoresText = dl->read();
    if (jugadoresText != "") {
        size_t pos = 0;
        string token;
        while ((pos = jugadoresText.find(delimiter)) != std::string::npos) {
            token = jugadoresText.substr(0, pos);
            createJugador(token);
            jugadoresText.erase(0, pos + delimiter.length());
        }
        if (jugadoresText != "") {
            createJugador(jugadoresText);
        }
    }
}

void Business::createJugador(string play) {
    string delimiter = ";";
    size_t pos = 0;
    string token;
    Jugador* jugador = new Jugador();
    while ((pos = play.find(delimiter)) != std::string::npos) {
        token = play.substr(0, pos);
        jugador->setNombre(token);
        play.erase(0, pos + delimiter.length());
    }
    jugador->setPuntos(stoi(play));
    jugadores->add(jugador);
}

int Business::ganador(int opc1, int opc2) {
    if (opc1 == opc2) {
        return 0;
    }

    if (opc1 == 1) {
        if (opc2 == 2) {
            return 2;
        }
        return 1;
    }

    if (opc1 == 2) {
        if (opc2 == 1) {
            return 1;
        }
        return 2;
    }

    if (opc1 == 3) {
        if (opc2 == 1) {
            return 2;
        }
        return 1;
    }

    return -1;
}