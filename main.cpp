#include "com/juego/bl/Business.h"

using namespace std;
Business *bl = new Business();

void crearJugador() {
    cout << "Digite el nombre" << endl;
    string name;
    cin >> name;
    bl->agregarJugador(name);
}


int opcJuego() {
    int opc;
    do {
        cout << "Digite lo que jugador desea" << endl;
        cout << "1- Piedra" << endl;
        cout << "2- Papel" << endl;
        cout << "3- Tijera" << endl;
        cin >> opc;
    } while (opc != 1 && opc != 2 && opc != 3);
    return opc;
}

void jugar() {
    Mensaje* msg;
    do {
        cout << bl->obtenerJugadoresActuales();
        cout << "Elige jugador 1" << endl;
        int opc1 = opcJuego();
        cout << "Elige jugador 2" << endl;
        int opc2 = opcJuego();
        msg = bl->obtenerJugadorGanador(opc1, opc2);
        cout << msg->getMsg();
    } while (msg->getStatus() != -1);
}

void iniciar() {
    bool created = bl->iniciarPartida();
    if (created) {
        jugar();
    } else{
        cout << "Al menos deben existir 2 jugadores" << endl;
    }
}

int main() {
    int opc = 0;
    do {
        cout << "Digite lo que desea" << endl;
        cout << "1- Definir jugadores" << endl;
        cout << "2- Iniciar juego" << endl;
        cout << "3- Mostrar puntaje" << endl;
        cout << "4- Mostrar records ordenados" << endl;
        cout << "5- Salir" << endl;
        cin >> opc;
        switch (opc) {
            case 1:
                crearJugador();
                break;
            case 2:
                iniciar();
                break;
            case 3:
                cout << bl->mostrarPuntos();
                break;
            case 4:
                cout << bl->jugadoresOrdenados();
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    } while (opc != 5);
    return 0;
}
