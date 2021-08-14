//
// Created by fersolano on 8/14/2021.
//

#ifndef PIEDRAPAPELTIJERA_DATAACCESS_H
#define PIEDRAPAPELTIJERA_DATAACCESS_H

#include <iostream>
#include <string>
#include<fstream>

using namespace std;

class DataAccess {
public:
    DataAccess();
    void write(string player);
    string read();

private:
    const string nombreArchivo = "players.txt";
};


#endif //PIEDRAPAPELTIJERA_DATAACCESS_H
