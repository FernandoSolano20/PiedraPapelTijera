//
// Created by fersolano on 8/14/2021.
//

#include "DataAccess.h"
#include<iostream>
#include<stdlib.h>


DataAccess::DataAccess() {

}

void DataAccess::write(string players) {
    ofstream file_out;

    file_out.open(nombreArchivo.c_str(),ios::out); //Creamos el archivo
    file_out << players << endl;
    file_out.close();
}

string DataAccess::read() {
    ifstream archivo;
    string text;
    string players = "";
    archivo.open(nombreArchivo.c_str(),ios::in); //Abrimos el archivo en modo lectura

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()){ //mientras no sea final del archivo
        getline(archivo,text);
        if (text != "") {
            players += text;
        }
    }

    archivo.close(); //Cerramos el archivo
    return players;
}