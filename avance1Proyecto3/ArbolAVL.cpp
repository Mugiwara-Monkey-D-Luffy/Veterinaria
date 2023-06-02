#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include "ArbolAVL.h"
#include "ArbolB.h"
using namespace std;

NodoAVL* ArbolAVL::insertar(NodoAVL* raizActual, NodoAVL* nuevoNodo) {
    if (raizActual == NULL) {
        return nuevoNodo;
    }

    if (nuevoNodo->idAnimal < raizActual->idAnimal) {
        raizActual->izquierda = insertar(raizActual->izquierda, nuevoNodo);
    }
    else {
        raizActual->derecha = insertar(raizActual->derecha, nuevoNodo);
    }

    // Actualizamos el equilibrio del nodo actual
    raizActual->equilibrio = altura(raizActual->izquierda) - altura(raizActual->derecha);

    // Realizamos las rotaciones necesarias
    if (raizActual->equilibrio > 1 && nuevoNodo->idAnimal < raizActual->izquierda->idAnimal) {
        return rotacionSimpleDerecha(raizActual);
    }
    if (raizActual->equilibrio > 1 && nuevoNodo->idAnimal > raizActual->izquierda->idAnimal) {
        return rotacionDobleDerecha(raizActual);
    }
    if (raizActual->equilibrio < -1 && nuevoNodo->idAnimal > raizActual->derecha->idAnimal) {
        return rotacionSimpleIzquierda(raizActual);
    }
    if (raizActual->equilibrio < -1 && nuevoNodo->idAnimal < raizActual->derecha->idAnimal) {
        return rotacionDobleIzquierda(raizActual);
    }

    return raizActual;
}

int ArbolAVL::altura(NodoAVL* nodo) {
    if (nodo == NULL) {
        return -1;
    }
    return 1 + max(altura(nodo->izquierda), altura(nodo->derecha));
}

NodoAVL* ArbolAVL::rotacionSimpleDerecha(NodoAVL* nodo) {
    NodoAVL* nodoIzquierda = nodo->izquierda;
    nodo->izquierda = nodoIzquierda->derecha;
    nodoIzquierda->derecha = nodo;
    nodo->equilibrio = max(altura(nodo->derecha), altura(nodo->izquierda)) + 1;
    nodoIzquierda->equilibrio = max(altura(nodo->derecha), altura(nodo->izquierda)) + 1;
    return nodoIzquierda;
}

NodoAVL* ArbolAVL::rotacionSimpleIzquierda(NodoAVL* nodo) {
    NodoAVL* nodoDerecha = nodo->derecha;
    nodo->derecha = nodoDerecha->izquierda;
    nodoDerecha->izquierda = nodo;
    nodo->equilibrio = max(altura(nodo->izquierda), altura(nodo->derecha)) + 1;
    nodoDerecha->equilibrio = max(altura(nodoDerecha->izquierda), altura(nodoDerecha->derecha)) + 1;
    return nodoDerecha;
}

NodoAVL* ArbolAVL::rotacionDobleIzquierda(NodoAVL* nodo) {
    nodo->derecha = rotacionSimpleDerecha(nodo->derecha);
    return rotacionSimpleIzquierda(nodo);
}

NodoAVL* ArbolAVL::rotacionDobleDerecha(NodoAVL* nodo) {
    nodo->izquierda = rotacionSimpleIzquierda(nodo->izquierda);
    return rotacionSimpleDerecha(nodo);
}

void ArbolAVL::mostrarMascota(NodoAVL* nodo) {
    if (nodo != NULL) {

        //Cambiar por un retorno de un string
        cout << nodo->numCliente << " " << nodo->idAnimal << " " << nodo->nombre << " " << nodo->tipoMascota << " " << nodo->raza << " ";
        cout << nodo->diaNacimiento << "-" << nodo->mesNacimiento << "-" << nodo->anioNacimiento << " ";
        cout << nodo->sexo << " " << nodo->color << " " << nodo->castrado << " ";
        cout << nodo->diaVisita << "-" << nodo->mesVisita << "-" << nodo->anioVisita << endl;

        mostrarMascota(nodo->izquierda); // Recorrer subárbol izquierdo en preorden
        mostrarMascota(nodo->derecha);   // Recorrer subárbol derecho en preorden
    }
}

ArbolAVL::ArbolAVL() {
    raiz = NULL;
}

void ArbolAVL::insertarMascota(NodoAVL* nuevoNodo) {
    this->raiz = insertar(this->raiz, nuevoNodo);
}

NodoAVL* ArbolAVL::buscarMascota(int valorBuscado) {
    NodoAVL* nodoActual = this->raiz;

    while (nodoActual != NULL) {

        if (valorBuscado == nodoActual->idAnimal) {
            return nodoActual; // Nodo encontrado
        }
        else if (valorBuscado < nodoActual->idAnimal) {
            nodoActual = nodoActual->izquierda; // Buscar en el subárbol izquierdo
        }
        else {
            nodoActual = nodoActual->derecha; // Buscar en el subárbol derecho
        }
    }

    return NULL; // Nodo no encontrado
}

void ArbolAVL::cargarMascota(ArbolB* ArbolClientes) {

    string pDireccion = "Mascotas.txt";

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
        size_t pos9 = linea.find(';', pos8 + 1);
        size_t pos10 = linea.find(';', pos9 + 1);
        size_t pos11 = linea.find(';', pos10 + 1);
        size_t pos12 = linea.find(';', pos11 + 1);
        size_t pos13 = linea.find(';', pos12 + 1);

        // Crear un nuevo objeto Nodo para almacenar los datos de la canción
        NodoAVL* aux = new NodoAVL();

        // Separar la línea en 13 parte y los asigna cada parte a un atributo
        aux->numCliente = stoi(linea.substr(0, pos1));
        aux->idAnimal = stoi(linea.substr(pos1 + 1, pos2 - pos1 - 1));
        aux->nombre = linea.substr(pos2 + 1, pos3 - pos2 - 1);
        aux->tipoMascota = linea.substr(pos3 + 1, pos4 - pos3 - 1);
        aux->raza = linea.substr(pos4 + 1, pos5 - pos4 - 1);
        aux->diaNacimiento = stoi(linea.substr(pos5 + 1, pos6 - pos5 - 1));
        aux->mesNacimiento = stoi(linea.substr(pos6 + 1, pos7 - pos6 - 1));
        aux->anioNacimiento = stoi(linea.substr(pos7 + 1, pos8 - pos7 - 1));
        aux->sexo = linea.substr(pos8 + 1, pos9 - pos8 - 1);
        aux->color = linea.substr(pos9 + 1, pos10 - pos9 - 1);
        aux->castrado = linea.substr(pos10 + 1, pos11 - pos10 - 1);
        aux->diaVisita = stoi(linea.substr(pos11 + 1, pos12 - pos11 - 1));
        aux->mesVisita = stoi(linea.substr(pos12 + 1, pos13 - pos12 - 1));
        aux->anioVisita = stoi(linea.substr(pos13 + 1));

        if (ArbolClientes->buscarCliente(aux->numCliente) == NULL) {
            continue;
        }

        if (buscarMascota(aux->idAnimal) == NULL) {
            insertarMascota(aux);
        }
    }

    // Cerrar el archivo
    archivo.close();
}

int ArbolAVL::calcularBalance(NodoAVL* nodo) {
    if (nodo == nullptr) {
        return 0;
    }
    return altura(nodo->izquierda) - altura(nodo->derecha);
}

NodoAVL* encontrarMinimo(NodoAVL* nodo) {
    NodoAVL* actual = nodo;
    while (actual->izquierda != nullptr) {
        actual = actual->izquierda;
    }
    return actual;
}

NodoAVL* ArbolAVL::eliminarNodo(NodoAVL* nodo, int idAnimal) {
    if (nodo == nullptr) {
        return nodo;
    }

    if (idAnimal < nodo->idAnimal) {
        nodo->izquierda = eliminarNodo(nodo->izquierda, idAnimal);
    }
    else if (idAnimal > nodo->idAnimal) {
        nodo->derecha = eliminarNodo(nodo->derecha, idAnimal);
    }
    else {
        // Encontrado el nodo a eliminar

        if (nodo->izquierda == nullptr || nodo->derecha == nullptr) {
            NodoAVL* temp = nodo->izquierda ? nodo->izquierda : nodo->derecha;

            if (temp == nullptr) {
                temp = nodo;
                nodo = nullptr;
            }
            else {
                *nodo = *temp;
            }

            delete temp;
        }
        else {
            NodoAVL* minimo = encontrarMinimo(nodo->derecha);
            nodo->idAnimal = minimo->idAnimal;
            nodo->derecha = eliminarNodo(nodo->derecha, minimo->idAnimal);
        }
    }

    if (nodo == nullptr) {
        return nodo;
    }

    int balance = calcularBalance(nodo);

    // Caso de rotación simple a la derecha
    if (balance > 1 && calcularBalance(nodo->izquierda) >= 0) {
        return rotacionSimpleDerecha(nodo);
    }

    // Caso de rotación simple a la izquierda
    if (balance < -1 && calcularBalance(nodo->derecha) <= 0) {
        return rotacionSimpleIzquierda(nodo);
    }

    // Caso de rotación doble a la izquierda
    if (balance > 1 && calcularBalance(nodo->izquierda) < 0) {
        return rotacionDobleIzquierda(nodo);
    }

    // Caso de rotación doble a la derecha
    if (balance < -1 && calcularBalance(nodo->derecha) > 0) {
        return rotacionDobleDerecha(nodo);
    }

    return nodo;
}

void ArbolAVL::eliminar(int idAnimal) {
    raiz = eliminarNodo(raiz, idAnimal);
}

void ArbolAVL::mostrarMascotas() {
    mostrarMascota(raiz);
}