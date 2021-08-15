//
// Created by fersolano on 8/14/2021.
//

#ifndef PIEDRAPAPELTIJERA_MENSAJE_H
#define PIEDRAPAPELTIJERA_MENSAJE_H

#include <string>

using namespace std;

class Mensaje {
public:
    Mensaje();
    int getStatus();
    void setStatus(int status);
    string getMsg();
    void setMsg(string msg);
private:
    int status;
    string msg;
};


#endif //PIEDRAPAPELTIJERA_MENSAJE_H
