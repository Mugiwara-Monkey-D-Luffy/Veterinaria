#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include "Cliente.h"

using namespace std;

bool  Cliente::CompareClients(Cliente* c1, Cliente* c2) {
    return c1->numCliente < c2->numCliente;
}

void Cliente::MostrarCliente() {
    cout << numCliente << " " << nombre << " " << direccion << " " << codPais << " " << codCuidad << " " << telefono << " " << dia << " " << mes << " " << anio << endl;
}