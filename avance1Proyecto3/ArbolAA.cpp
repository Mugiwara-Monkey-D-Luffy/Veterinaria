#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include "NodoAA.h"
#include "ArbolAA.h"

using namespace std;

void ArbolAA::rotarIzquierda(NodoAA*& nodo) {
    NodoAA* temp = nodo->izquierda;
    nodo->izquierda = temp->derecha;
    temp->derecha = nodo;
    nodo = temp;
}

void ArbolAA::rotarDerecha(NodoAA*& nodo) {
    NodoAA* temp = nodo->derecha;
    nodo->derecha = temp->izquierda;
    temp->izquierda = nodo;
    nodo = temp;
}

void ArbolAA::rebalancear(NodoAA*& nodo) {
    if (!nodo) return;

    if (nodo->izquierda && nodo->izquierda->nivel == nodo->nivel) {
        rotarIzquierda(nodo);
    }

    if (nodo->derecha && nodo->derecha->derecha && nodo->nivel == nodo->derecha->derecha->nivel) {
        rotarDerecha(nodo);
        nodo->nivel++;
    }

    if (nodo->izquierda && nodo->izquierda->izquierda && nodo->nivel == nodo->izquierda->izquierda->nivel) {
        rotarIzquierda(nodo->izquierda);
        rotarIzquierda(nodo);
        nodo->nivel++;
    }
}

void ArbolAA::insertarMedicacion(NodoAA*& nuevo) {
    NodoAA* actual = raiz;
    NodoAA* padre = nullptr;

    while (actual) {
        padre = actual;

        if (nuevo->codMedicacion < actual->codMedicacion) {
            actual = actual->izquierda;
        }
        else {
            actual = actual->derecha;
        }
    }

    if (!padre) {
        raiz = nuevo;
    }
    else if (nuevo->codMedicacion < padre->codMedicacion) {
        padre->izquierda = nuevo;
    }
    else {
        padre->derecha = nuevo;
    }

    rebalancear(raiz);
}

NodoAA* ArbolAA::evaluarMedicacion(int pcodMedicacion, int idAnimal, int dia, int mes, int anio) {

    NodoAA* actual = raiz;

    while (actual) {

        if (pcodMedicacion == actual->codMedicacion && idAnimal == actual->idAnimal) {

            if (dia == actual->dia && mes == actual->mes && anio == actual->anio)
                return actual;

        }
        else if (pcodMedicacion < actual->codMedicacion) {
            actual = actual->izquierda;
        }
        else {
            actual = actual->derecha;
        }
    }

    return NULL;
}

NodoAA* ArbolAA::buscarMedicacion(int valor) {

    NodoAA* actual = raiz;

    while (actual) {

        if (valor == actual->codMedicacion) {
            return actual;
        }
        else if (valor < actual->codMedicacion) {
            actual = actual->izquierda;
        }
        else {
            actual = actual->derecha;
        }
    }

    return NULL;
}

void ArbolAA::imprimirPreorden(NodoAA* nodo) {

    if (nodo) {

        cout << nodo->idAnimal << " " << nodo->codMedicacion << " ";

        imprimirPreorden(nodo->izquierda);
        imprimirPreorden(nodo->derecha);
    }
}

void ArbolAA::mostrarMedicamentos() {

    if (raiz == NULL)
        return;

    imprimirPreorden(raiz);
    cout << endl;
}

void ArbolAA::cargarMascota(ArbolAVL* ArbolMascotas) {

    string pDireccion = "Medicacion.txt";

    // Crear objeto ifstream para leer el archivo en la dirección especificada
    ifstream archivo;
    archivo.open(pDireccion);

    // Verificar si se pudo abrir el archivo
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }

    // String para almacenar cada línea del archivo
    string linea;

    // Recorrer cada línea del archivo
    while (getline(archivo, linea)) {

        size_t pos1 = linea.find(';');
        size_t pos2 = linea.find(';', pos1 + 1);
        size_t pos3 = linea.find(';', pos2 + 1);
        size_t pos4 = linea.find(';', pos3 + 1);
        size_t pos5 = linea.find(';', pos4 + 1);
        size_t pos6 = linea.find(';', pos5 + 1);
        size_t pos7 = linea.find(';', pos6 + 1);
        size_t pos8 = linea.find(';', pos7 + 1);

        // Crear un nuevo objeto Nodo para almacenar los datos de la canción
        NodoAA* aux = new NodoAA();

        // Separar la línea en 13 parte y los asigna cada parte a un atributo
        aux->idAnimal = stoi(linea.substr(0, pos1));
        aux->dia = stoi(linea.substr(pos1 + 1, pos2 - pos1 - 1));
        aux->mes = stoi(linea.substr(pos2 + 1, pos3 - pos2 - 1));
        aux->anio = stoi(linea.substr(pos3 + 1, pos4 - pos3 - 1));
        aux->codTratamiento = stoi(linea.substr(pos4 + 1, pos5 - pos4 - 1));
        aux->codMedicacion = stoi(linea.substr(pos5 + 1, pos6 - pos5 - 1));
        aux->costoUnitario = stoi(linea.substr(pos6 + 1, pos7 - pos6 - 1));
        aux->cantidad = stoi(linea.substr(pos7 + 1, pos8 - pos7 - 1));
        aux->costoTotal = stoi(linea.substr(pos8 + 1));


        if (ArbolMascotas->buscarMascota(aux->idAnimal) == NULL) {
            continue;
        }

        if (evaluarMedicacion(aux->codMedicacion, aux->idAnimal, aux->dia, aux->mes, aux->anio) == NULL) {
            insertarMedicacion(aux);
        }
    }

    // Cerrar el archivo
    archivo.close();
}

void ArbolAA::eliminarNodoMedicaion(NodoAA*& nodo, int pCodMedicaion) {
    if (nodo == nullptr)
        return;

    if (pCodMedicaion < nodo->codMedicacion) {
        eliminarNodoMedicaion(nodo->izquierda, pCodMedicaion);
    }
    else if (pCodMedicaion > nodo->codMedicacion) {
        eliminarNodoMedicaion(nodo->derecha, pCodMedicaion);
    }
    else {
        if (nodo->izquierda == nullptr && nodo->derecha == nullptr) {
            delete nodo;
            nodo = nullptr;
        }
        else if (nodo->izquierda == nullptr) {
            NodoAA* temp = nodo;
            nodo = nodo->derecha;
            delete temp;
        }
        else if (nodo->derecha == nullptr) {
            NodoAA* temp = nodo;
            nodo = nodo->izquierda;
            delete temp;
        }
        else {
            NodoAA* sucesor = nodo->derecha;
            while (sucesor->izquierda != nullptr) {
                sucesor = sucesor->izquierda;
            }
            nodo->codMedicacion = sucesor->codMedicacion;
            eliminarNodoMedicaion(nodo->derecha, sucesor->codMedicacion);
        }
    }

    rebalancear(nodo);
}

void NodoAA::MostrarMedicacion() {
    // Cambiar a string
    cout << idAnimal << " " << codMedicacion << " " << dia << "-" << mes << "-" << anio << " " << listaMedicamento << " $" << costoUnitario << " " << cantidad << " $" << costoTotal << endl;
}

