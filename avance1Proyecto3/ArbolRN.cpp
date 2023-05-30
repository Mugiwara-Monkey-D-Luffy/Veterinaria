#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include "NodoRN.h"
#include "ArbolRN.h"

using namespace std;

ArbolRN::ArbolRN() {
    raiz = NULL;
}

void ArbolRN::insertarTratamiento(NodoRN* nuevoNodo) {
    if (raiz == NULL) {
        // Si el árbol está vacío, el nuevo nodo se convierte en la raíz
        raiz = nuevoNodo;
        raiz->color = BLACK;
        return;
    }

    NodoRN* actual = raiz;
    NodoRN* padre = NULL;

    // Búsqueda del lugar adecuado para insertar el nuevo nodo
    while (actual != NULL) {
        padre = actual;
        if (nuevoNodo->codTratamiento < actual->codTratamiento) {
            actual = actual->izq;
        }
        else {
            actual = actual->der;
        }
    }

    // Asignación de punteros
    nuevoNodo->padre = padre;
    if (nuevoNodo->codTratamiento < padre->codTratamiento) {
        padre->izq = nuevoNodo;
    }
    else {
        padre->der = nuevoNodo;
    }

    // Rebalanceo del árbol si es necesario
    rebalancear(nuevoNodo);
}

void ArbolRN::mostrarTratamientos() {
    if (raiz == nullptr) {
        std::cout << "Arbol vacio" << std::endl;
        return;
    }

    mostrarPreorden(raiz);
}

void ArbolRN::rotacionIzquierda(NodoRN* nodo) {
    NodoRN* derecha = nodo->der;
    nodo->der = derecha->izq;

    if (nodo->der != NULL) {
        nodo->der->padre = nodo;
    }

    if (nodo->padre == NULL) {
        raiz = derecha;
    }
    else if (nodo == nodo->padre->izq) {
        nodo->padre->izq = derecha;
    }
    else {
        nodo->padre->der = derecha;
    }

    derecha->izq = nodo;
    derecha->padre = nodo->padre;
    nodo->padre = derecha;
}

void ArbolRN::rotacionDerecha(NodoRN* nodo) {
    NodoRN* izquierda = nodo->izq;
    nodo->izq = izquierda->der;

    if (nodo->izq != nullptr) {
        nodo->izq->padre = nodo;
    }

    if (nodo->padre == nullptr) {
        raiz = izquierda;
    }
    else if (nodo == nodo->padre->izq) {
        nodo->padre->izq = izquierda;
    }
    else {
        nodo->padre->der = izquierda;
    }

    izquierda->der = nodo;
    izquierda->padre = nodo->padre;
    nodo->padre = izquierda;
}

void ArbolRN::rebalancear(NodoRN* nodo) {
    while (nodo != raiz && nodo->padre->color == RED) {
        NodoRN* padre = nodo->padre;
        NodoRN* abuelo = padre->padre;

        if (padre == abuelo->izq) {
            NodoRN* tio = abuelo->der;

            if (tio != nullptr && tio->color == RED) {
                // Caso 1: El tío del nodo es rojo
                abuelo->color = RED;
                padre->color = BLACK;
                tio->color = BLACK;
                nodo = abuelo;
            }
            else {
                if (nodo == padre->der) {
                    // Caso 2: El tío del nodo es negro y el nodo es un hijo derecho
                    nodo = padre;
                    rotacionIzquierda(nodo);
                    padre = nodo->padre;
                }

                // Caso 3: El tío del nodo es negro y el nodo es un hijo izquierdo
                padre->color = BLACK;
                abuelo->color = RED;
                rotacionDerecha(abuelo);
            }
        }
        else {
            NodoRN* tio = abuelo->izq;

            if (tio != nullptr && tio->color == RED) {
                // Caso 1: El tío del nodo es rojo
                abuelo->color = RED;
                padre->color = BLACK;
                tio->color = BLACK;
                nodo = abuelo;
            }
            else {
                if (nodo == padre->izq) {
                    // Caso 2: El tío del nodo es negro y el nodo es un hijo izquierdo
                    nodo = padre;
                    rotacionDerecha(nodo);
                    padre = nodo->padre;
                }

                // Caso 3: El tío del nodo es negro y el nodo es un hijo derecho
                padre->color = BLACK;
                abuelo->color = RED;
                rotacionIzquierda(abuelo);
            }
        }
    }

    raiz->color = BLACK;
}

void ArbolRN::mostrarPreorden(NodoRN* nodo) {
    if (nodo != NULL) {
        cout << nodo->codTratamiento << nodo->nombre << " ";
        mostrarPreorden(nodo->izq);
        mostrarPreorden(nodo->der);
    }
}

NodoRN* ArbolRN::buscarTratamiento(int valor) {
    NodoRN* actual = raiz;

    while (actual != NULL) {
        if (valor == actual->codTratamiento) {
            return actual;
        }
        else if (valor < actual->codTratamiento) {
            actual = actual->izq;
        }
        else {
            actual = actual->der;
        }
    }

    return NULL;
}

void ArbolRN::cargarTratamiento() {

    string pDireccion = "Tratamiento.txt";

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

        // Encontrar la posición del primer ";" en la línea actual
        size_t pos1 = linea.find(';');

        // Encontrar la posición del segundo ";" en la línea actual, a partir de la posición del primer ";"
        size_t pos2 = linea.find(';', pos1 + 1);

        // Crear un nuevo objeto Nodo para almacenar los datos del artista
        NodoRN* aux = new NodoRN();

        // Separar la línea en tres partes: código del artista, nombre y código del género
        aux->codTratamiento = stoi(linea.substr(0, pos1));
        aux->nombre = linea.substr(pos1 + 1, pos2 - pos1 - 1);
        aux->precioUnitario = stoi(linea.substr(pos2 + 1));


        if (buscarTratamiento(aux->codTratamiento) == NULL) {
            insertarTratamiento(aux);
        }
    }

    // Cerrar el archivo
    archivo.close();
}

void NodoRN::MostrarTratamiento() {
    cout << codTratamiento << " " << nombre << " " << precioUnitario << endl;
}

