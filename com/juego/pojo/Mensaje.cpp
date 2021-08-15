//
// Created by fersolano on 8/14/2021.
//

#include "Mensaje.h"

Mensaje::Mensaje() {
    setMsg("");
    setStatus(0);
}

void Mensaje::setStatus(int status) {
    this->status = status;
}

int Mensaje::getStatus() {
    return status;
}

void Mensaje::setMsg(string msg) {
    this->msg = msg;
}

string Mensaje::getMsg() {
    return msg;
}