#pragma once
#include <string>

using namespace std;

class NodoAVL {
public:

    int numCliente;
    int idAnimal;
    string nombre;
    string tipoMascota;
    string raza;
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
    string sexo;
    string color;
    string castrado;
    int diaVisita;
    int mesVisita;
    int anioVisita;

    NodoAVL* izquierda;
    NodoAVL* derecha;
    int equilibrio;

    NodoAVL() {

        numCliente = 0;
        idAnimal = 0;
        nombre = "";
        tipoMascota = "";
        raza = "";
        diaNacimiento = 0;
        mesNacimiento = 0;
        anioNacimiento = 0;
        sexo = "";
        color = "";
        castrado = "";
        diaVisita = 0;
        mesVisita = 0;
        anioVisita = 0;

        izquierda = NULL;
        derecha = NULL;
        equilibrio = 0;
    }

    void MostrarMascota() {
        //Aqui cambiar cout por un return string
        cout << numCliente << " " << idAnimal << " " << nombre << " " << tipoMascota << " " << raza << " ";
        cout << diaNacimiento << "-" << mesNacimiento << "-" << anioNacimiento << " ";
        cout << sexo << " " << color << " " << castrado << " ";
        cout << diaVisita << "-" << mesVisita << "-" << anioVisita << endl;
    }

    friend class ArbolAVL;
};