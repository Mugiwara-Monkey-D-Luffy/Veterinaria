#pragma once
#include <iostream>
#include <fstream> 
// Clase para representar una sucursal
using namespace std;

class Sucursal {
public:
    string codSucursal;
    string nombre;
    Sucursal* siguiente;

    Sucursal() {
        codSucursal = "";
        nombre = "";
        siguiente = NULL;
    }
};