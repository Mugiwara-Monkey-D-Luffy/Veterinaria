#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>

#include "ArbolBB.h"

using namespace std;

NodoBB* ArbolBB::insertarNodoPais(NodoBB* nodo, NodoBB* nuevoNodo) {
    // Si el árbol está vacío, el nuevo nodo se convierte en la raíz
    if (nodo == NULL) {
        return nuevoNodo;
    }
    // Si el valor del nuevo nodo es menor que el valor del nodo actual, inserta en la rama izquierda
    else if (nuevoNodo->codPais < nodo->codPais) {
        nodo->izquierda = insertarNodoPais(nodo->izquierda, nuevoNodo);
    }
    // Si el valor del nuevo nodo es mayor que el valor del nodo actual, inserta en la rama derecha
    else if (nuevoNodo->codPais > nodo->codPais) {
        nodo->derecha = insertarNodoPais(nodo->derecha, nuevoNodo);
    }
    // Si el valor ya existe en el árbol, no hagas nada
    return nodo;
}


NodoBB* ArbolBB::insertarNodoCuidad(NodoBB* nodo, NodoBB* nuevoNodo) {
    // Si el árbol está vacío, el nuevo nodo se convierte en la raíz
    if (nodo == NULL) {
        return nuevoNodo;
    }
    // Si el valor del nuevo nodo es menor que el valor del nodo actual, inserta en la rama izquierda
    else if (nuevoNodo->codCuidad < nodo->codCuidad) {
        nodo->izquierda = insertarNodoCuidad(nodo->izquierda, nuevoNodo);
    }
    // Si el valor del nuevo nodo es mayor que el valor del nodo actual, inserta en la rama derecha
    else if (nuevoNodo->codCuidad > nodo->codCuidad) {
        nodo->derecha = insertarNodoCuidad(nodo->derecha, nuevoNodo);
    }
    // Si el valor ya existe en el árbol, no hagas nada
    return nodo;
}

NodoBB* ArbolBB::insertarNodoVisita(NodoBB* nodo, NodoBB* nuevoNodo) {
    // Si el árbol está vacío, el nuevo nodo se convierte en la raíz
    if (nodo == NULL) {
        return nuevoNodo;
    }
    // Si el valor del nuevo nodo es menor que el valor del nodo actual, inserta en la rama izquierda
    else if (nuevoNodo->codVisita < nodo->codVisita) {
        nodo->izquierda = insertarNodoVisita(nodo->izquierda, nuevoNodo);
    }
    // Si el valor del nuevo nodo es mayor que el valor del nodo actual, inserta en la rama derecha
    else if (nuevoNodo->codVisita > nodo->codVisita) {
        nodo->derecha = insertarNodoVisita(nodo->derecha, nuevoNodo);
    }
    // Si el valor ya existe en el árbol, no hagas nada
    return nodo;
}

NodoBB* ArbolBB::buscarNodoPais(NodoBB* nodo, int valorBuscado) {
    // Si el nodo actual es nulo o si el valor del nodo actual es igual al valor buscado, devuelve el nodo actual
    if (nodo == NULL || (nodo != NULL && nodo->codPais == valorBuscado)) {
        return nodo;
    }
    // Si el valor buscado es menor que el valor del nodo actual, busca en la rama izquierda
    else if (valorBuscado < nodo->codPais) {
        return buscarNodoPais(nodo->izquierda, valorBuscado);
    }
    // Si el valor buscado es mayor que el valor del nodo actual, busca en la rama derecha
    else {
        return buscarNodoPais(nodo->derecha, valorBuscado);
    }
}

bool ArbolBB::InsertaNodo(int codPais, string nombre, NodoBB* nuevoNodo) {
    bool result = false;

    if (codPais < nuevoNodo->codPais) {
        if (nuevoNodo->izquierda == NULL) {
            nuevoNodo->izquierda = new NodoBB(codPais, nombre);
            result = true;
        }
        else {
            result = InsertaNodo(codPais, nombre, nuevoNodo->izquierda);
        }
    }
    else if (codPais > nuevoNodo->codPais) {
        if (nuevoNodo->derecha == NULL) {
            nuevoNodo->derecha = new NodoBB(codPais, nombre);
            result = true;
        }
        else {
            result = InsertaNodo(codPais, nombre, nuevoNodo->derecha);
        }
    }
    return result;
}

bool ArbolBB::InsertaPais(int codPais, string nombre) {
    if (this->raiz == NULL) {
        this->raiz = new NodoBB(codPais, nombre);
        return true;
    }
    else {
        return this->InsertaNodo(codPais, nombre, this->raiz);
    }
}


NodoBB* ArbolBB::buscarNodoCuidad(NodoBB* nodo, int valorBuscado) {
    // Si el nodo actual es nulo o si el valor del nodo actual es igual al valor buscado, devuelve el nodo actual
    if (nodo == NULL || nodo->codCuidad == valorBuscado) {
        return nodo;
    }
    // Si el valor buscado es menor que el valor del nodo actual, busca en la rama izquierda
    else if (valorBuscado < nodo->codCuidad) {
        return buscarNodoCuidad(nodo->izquierda, valorBuscado);
    }
    // Si el valor buscado es mayor que el valor del nodo actual, busca en la rama derecha
    else {
        return buscarNodoCuidad(nodo->derecha, valorBuscado);
    }
}

NodoBB* ArbolBB::buscarNodoVisita(NodoBB* nodo, int valorBuscado) {
    // Si el nodo actual es nulo o si el valor del nodo actual es igual al valor buscado, devuelve el nodo actual
    if (nodo == NULL || nodo->codVisita == valorBuscado) {
        return nodo;
    }
    // Si el valor buscado es menor que el valor del nodo actual, busca en la rama izquierda
    else if (valorBuscado < nodo->codVisita) {
        return buscarNodoVisita(nodo->izquierda, valorBuscado);
    }
    // Si el valor buscado es mayor que el valor del nodo actual, busca en la rama derecha
    else {
        return buscarNodoVisita(nodo->derecha, valorBuscado);
    }
}

void ArbolBB::mostrarPais(NodoBB* nodo) {
    if (nodo != NULL) {

        cout << nodo->codPais << " " << nodo->nombre << endl;

        mostrarPais(nodo->izquierda);
        mostrarPais(nodo->derecha);
    }
}

void ArbolBB::mostrarCuidad(NodoBB* nodo) {
    if (nodo != NULL) {

        cout << nodo->codPais << " " << nodo->codCuidad << " " << nodo->nombre << endl;

        mostrarCuidad(nodo->izquierda);
        mostrarCuidad(nodo->derecha);
    }
}

void ArbolBB::mostrarVisita(NodoBB* nodo) {
    if (nodo != NULL) {

        cout << nodo->codVisita << " " << nodo->idAnimal << " " << nodo->dia << "-" << nodo->mes << "-" << nodo->anio << " $" << nodo->totalFactura;
        if (nodo->formatoPago == 1)
            cout << " Contado" << endl;
        else
            cout << " Credito" << endl;

        mostrarVisita(nodo->izquierda);
        mostrarVisita(nodo->derecha);
    }
}

void ArbolBB::insertarPais(NodoBB* nuevoNodo) {
    raiz = insertarNodoPais(raiz, nuevoNodo);
}

void ArbolBB::insertarCuidad(NodoBB* nuevoNodo) {
    raiz = insertarNodoCuidad(raiz, nuevoNodo);
}

void ArbolBB::insertarVisita(NodoBB* nuevoNodo) {
    raiz = insertarNodoVisita(raiz, nuevoNodo);
}

NodoBB* ArbolBB::buscarPais(int valorBuscado) {
    return buscarNodoPais(raiz, valorBuscado);
}

NodoBB* ArbolBB::buscarCiudad(int valorBuscado) {
    return buscarNodoCuidad(raiz, valorBuscado);
}

NodoBB* ArbolBB::buscarVisita(int valorBuscado) {
    return buscarNodoVisita(raiz, valorBuscado);
}

void ArbolBB::cargarPais() {

    string pDireccion = "Paises.txt";

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
        size_t pos = linea.find(';');

        // Crear un nuevo objeto Nodo para almacenar los datos del artista
        //NodoBB* aux = new NodoBB();

        // Separar la línea en tres partes: código del Pais y nombre
        /*aux->codPais = stoi(linea.substr(0, pos));
        aux->nombre = linea.substr(pos + 1);*/

        // Insertar el nuevo Nodo en la lista doble

        //if (buscarPais(aux->codPais) == NULL) {
            InsertaPais(stoi(linea.substr(0, pos)), linea.substr(pos + 1));
        //}

    }
    // Cerrar el archivo
    archivo.close();
}

void ArbolBB::cargarCuidad(ArbolBB* ArbolPaises) {

    string pDireccion = "Ciudades.txt";

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
        NodoBB* aux = new NodoBB();

        // Separar la línea en tres partes: código del artista, nombre y código del género
        aux->codPais = stoi(linea.substr(0, pos1));
        aux->codCuidad = stoi(linea.substr(pos1 + 1, pos2 - pos1 - 1));
        aux->nombre = linea.substr(pos2 + 1);

        // Valida el codigo de pais exista
        if (ArbolPaises->buscarPais(aux->codPais) == NULL) {
            continue;
        }
        if (buscarCiudad(aux->codCuidad) == NULL) {
            insertarCuidad(aux);
        }
    }

    // Cerrar el archivo
    archivo.close();
}

void ArbolBB::cargarVisita(ArbolAVL* ArbolMascotas) {

    string pDireccion = "Visitas.txt";

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

        // Encontrar la posición del tercer ";" en la línea actual, a partir de la posición del segundo ";"
        size_t pos3 = linea.find(';', pos2 + 1);

        // Encontrar la posición del cuarto ";" en la línea actual, a partir de la posición del tercer ";"
        size_t pos4 = linea.find(';', pos3 + 1);

        // Encontrar la posición del quito ";" en la línea actual, a partir de la posición del cuarto ";"
        size_t pos5 = linea.find(';', pos4 + 1);

        // Encontrar la posición del sexto ";" en la línea actual, a partir de la posición del quinto ";"
        size_t pos6 = linea.find(';', pos5 + 1);

        // Crear un nuevo objeto Nodo para almacenar los datos de la canción
        NodoBB* aux = new NodoBB();

        // Separar la línea en cinco partes: código de la canción, nombre, código del artista, código del álbum, código del género y código de la lista de reproducción
        aux->codVisita = stoi(linea.substr(0, pos1));
        aux->idAnimal = stoi(linea.substr(pos1 + 1, pos2 - pos1 - 1));
        aux->dia = stoi(linea.substr(pos2 + 1, pos3 - pos2 - 1));
        aux->mes = stoi(linea.substr(pos3 + 1, pos4 - pos3 - 1));
        aux->anio = stoi(linea.substr(pos4 + 1, pos5 - pos4 - 1));
        aux->totalFactura = stoi(linea.substr(pos5 + 1, pos6 - pos5 - 1));
        aux->formatoPago = stoi(linea.substr(pos6 + 1));

        if (ArbolMascotas->buscarMascota(aux->idAnimal) == NULL) {
            continue;
        }

        insertarVisita(aux);
    }

    // Cerrar el archivo
    archivo.close();
}

NodoBB* encontrarMasPequenio(NodoBB* node) {
        NodoBB* current = node;
        while (current && current->derecha != nullptr) {
            current = current->derecha;
        }
        return current;
    }
NodoBB* eliminarPais(NodoBB* root, int pCodPais) {
        if (root == nullptr) {
            return root;
        }
        if (pCodPais < root->codPais) {
            root->izquierda = eliminarPais(root->izquierda, pCodPais);
        } else if (pCodPais > root->codPais) {
            root->derecha = eliminarPais(root->derecha, pCodPais);
        } else {
            if (root->izquierda == nullptr) {
                NodoBB* temp = root->derecha;
                delete root;
                return temp;
            } else if (root->derecha == nullptr) {
                NodoBB* temp = root->derecha;
                delete root;
                return temp;
            }

            NodoBB* minNode = encontrarMasPequenio(root->derecha);
            root->codPais = minNode->codPais;
            root->nombre = minNode->nombre;
            root->derecha = eliminarPais(root->derecha, minNode->codPais);
        }
        return root;
    }
NodoBB* eliminarCuidad(NodoBB* root, int pCodCuidad) {
        if (root == nullptr) {
            return root;
        }
        if (pCodCuidad < root->codCuidad) {
            root->izquierda = eliminarPais(root->izquierda, pCodCuidad);
        } else if (pCodCuidad > root->codCuidad) {
            root->derecha = eliminarPais(root->derecha, pCodCuidad);
        } else {
            if (root->izquierda == nullptr) {
                NodoBB* temp = root->derecha;
                delete root;
                return temp;
            } else if (root->derecha == nullptr) {
                NodoBB* temp = root->derecha;
                delete root;
                return temp;
            }

            NodoBB* minNode = encontrarMasPequenio(root->derecha);
            root->codCuidad = minNode->codCuidad;
            root->nombre = minNode->nombre;
            root->codPais = minNode->codPais;
            root->derecha = eliminarPais(root->derecha, minNode->codCuidad);
        }
        return root;
    }
NodoBB* eliminarVisita(NodoBB* root, int pCodVisita) {
        if (root == nullptr) {
            return root;
        }
        if (pCodVisita < root->codVisita) {
            root->izquierda = eliminarPais(root->izquierda, pCodVisita);
        } else if (pCodVisita > root->codVisita) {
            root->derecha = eliminarPais(root->derecha, pCodVisita);
        } else {
            if (root->izquierda == nullptr) {
                NodoBB* temp = root->derecha;
                delete root;
                return temp;
            } else if (root->derecha == nullptr) {
                NodoBB* temp = root->derecha;
                delete root;
                return temp;
            }

            NodoBB* minNode = encontrarMasPequenio(root->derecha);
            root->codVisita = minNode->codVisita;
            root->idAnimal = minNode->idAnimal;
            root->dia = minNode->dia;
            root->mes = minNode->mes;
            root->anio = minNode->anio;
            root->totalFactura = minNode->totalFactura;
            root->formatoPago = minNode->formatoPago;
            root->derecha = eliminarPais(root->derecha, minNode->codVisita);
        }
        return root;
    }

void ArbolBB::eliminarPais(int pCodPais) {
        eliminarCuidad(raiz, pCodPais);
    }
void ArbolBB::eliminarCiudad(int pCodCuidad){
        eliminarCuidad(raiz,pCodCuidad);
    }
void ArbolBB::eliminarVisita(int pCodVisita){
        eliminarCuidad(raiz, pCodVisita);
    }

void ArbolBB::mostrarPaises() {
    mostrarPais(raiz);
}

void ArbolBB::mostrarCuidades() {
    mostrarCuidad(raiz);
}

void ArbolBB::mostrarVisitas() {
    mostrarVisita(raiz);
}