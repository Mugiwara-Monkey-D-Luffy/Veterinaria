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

        size_t pos3 = linea.find(';', pos2 + 1);

        // Crear un nuevo objeto Nodo para almacenar los datos del artista
        NodoRN* aux = new NodoRN();

        // Separar la línea en tres partes: código del artista, nombre y código del género
        aux->codTratamiento = stoi(linea.substr(0, pos1));
        aux->nombre = linea.substr(pos1 + 1, pos2 - pos1 - 1);
        aux->precioUnitario = stoi(linea.substr(pos2 + 1, pos3 - pos2 - 1));
        aux->cantidad = stoi(linea.substr(pos3 + 1));


        if (buscarTratamiento(aux->codTratamiento) == NULL) {
            insertarTratamiento(aux);
        }
    }

    // Cerrar el archivo
    archivo.close();
}

void ArbolRN::rebalancearEliminar(NodoRN* nodo, NodoRN* padre) {
    NodoRN* hermano;
    while (nodo != raiz && (nodo == nullptr || nodo->color == BLACK)) {
        if (nodo == padre->izq) {
            hermano = padre->der;
            if (hermano->color == RED) {
                hermano->color = BLACK;
                padre->color = RED;
                rotacionIzquierda(padre);
                hermano = padre->der;
            }
            if ((hermano->izq == nullptr || hermano->izq->color == BLACK) && (hermano->der == nullptr || hermano->der->color == BLACK)) {
                hermano->color = RED;
                nodo = padre;
                padre = nodo->padre;
            }
            else {
                if (hermano->der == nullptr || hermano->der->color == BLACK) {
                    hermano->izq->color = BLACK;
                    hermano->color = RED;
                    rotacionDerecha(hermano);
                    hermano = padre->der;
                }
                hermano->color = padre->color;
                padre->color = BLACK;
                if (hermano->der != nullptr) {
                    hermano->der->color = BLACK;
                }
                rotacionIzquierda(padre);
                nodo = raiz;
                break;
            }
        }
        else {
            hermano = padre->izq;
            if (hermano->color == RED) {
                hermano->color = BLACK;
                padre->color = RED;
                rotacionDerecha(padre);
                hermano = padre->izq;
            }
            if ((hermano->der == nullptr || hermano->der->color == BLACK) && (hermano->izq == nullptr || hermano->izq->color == BLACK)) {
                hermano->color = RED;
                nodo = padre;
                padre = nodo->padre;
            }
            else {
                if (hermano->izq == nullptr || hermano->izq->color == BLACK) {
                    hermano->der->color = BLACK;
                    hermano->color = RED;
                    rotacionIzquierda(hermano);
                    hermano = padre->izq;
                }
                hermano->color = padre->color;
                padre->color = BLACK;
                if (hermano->izq != nullptr) {
                    hermano->izq->color = BLACK;
                }
                rotacionDerecha(padre);
                nodo = raiz;
                break;
            }
        }
    }
    if (nodo != nullptr) {
        nodo->color = BLACK;
    }
}

NodoRN* encontrarMinimo(NodoRN* nodo) {
    while (nodo->izq != nullptr) {
        nodo = nodo->izq;
    }
    return nodo;
}

NodoRN* encontrarSiguiente(NodoRN* nodo) {
    if (nodo->der != nullptr) {
        return encontrarMinimo(nodo->der);
    }
    NodoRN* padre = nodo->padre;
    while (padre != nullptr && nodo == padre->der) {
        nodo = padre;
        padre = padre->padre;
    }
    return padre;
}

void ArbolRN::reemplazarNodo(NodoRN* nodoEliminar, NodoRN* nodoReemplazo) {
    if (nodoEliminar->padre == nullptr) {
        raiz = nodoReemplazo;
    }
    else if (nodoEliminar == nodoEliminar->padre->izq) {
        nodoEliminar->padre->izq = nodoReemplazo;
    }
    else {
        nodoEliminar->padre->der = nodoReemplazo;
    }

    if (nodoReemplazo != nullptr) {
        nodoReemplazo->padre = nodoEliminar->padre;
    }
}

void ArbolRN::eliminar(int pCodTratamiento) {
    NodoRN* nodo = buscarTratamiento(pCodTratamiento);
    if (nodo == nullptr) {
        return;
    }
    NodoRN* hijo;
    NodoRN* padre;
    NodoRN* sucesor;
    Color originalColor = nodo->color;
    if (nodo->izq == nullptr) {
        hijo = nodo->der;
        padre = nodo->padre;
        reemplazarNodo(nodo, nodo->der);
    }
    else if (nodo->der == nullptr) {
        hijo = nodo->izq;
        padre = nodo->padre;
        reemplazarNodo(nodo, nodo->izq);
    }
    else {
        sucesor = encontrarMinimo(nodo->der);
        originalColor = sucesor->color;
        hijo = sucesor->der;
        padre = sucesor->padre;
        if (sucesor->padre == nodo) {
            if (hijo != nullptr) {
                hijo->padre = sucesor;
            }
        }
        else {
            reemplazarNodo(sucesor, sucesor->der);
            sucesor->der = nodo->der;
            sucesor->der->padre = sucesor;
        }
        reemplazarNodo(nodo, sucesor);
        sucesor->izq = nodo->izq;
        sucesor->izq->padre = sucesor;
        sucesor->color = nodo->color;
    }
    if (originalColor == BLACK) {
        rebalancearEliminar(hijo, padre);
    }
}

void NodoRN::MostrarTratamiento() {
    cout << codTratamiento << " " << nombre << " " << precioUnitario << endl;
}

