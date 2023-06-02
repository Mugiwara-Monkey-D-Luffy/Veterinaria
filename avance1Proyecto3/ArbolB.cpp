#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "ArbolB.h"
#include "ArbolBB.h"

using namespace std;

void ArbolB::splitChild(NodoB* parent, int index, NodoB* child) {
    NodoB* newNodeB = new NodoB(MaxLlaves, child->esHoja);
    newNodeB->Clientes.insert(newNodeB->Clientes.begin(), child->Clientes.begin() + t, child->Clientes.end());
    child->Clientes.erase(child->Clientes.begin() + t, child->Clientes.end());
    if (!child->esHoja) {
        newNodeB->Llaves.insert(newNodeB->Llaves.begin(), child->Llaves.begin() + t, child->Llaves.end());
        child->Llaves.erase(child->Llaves.begin() + t, child->Llaves.end());
    }
    parent->Llaves.insert(parent->Llaves.begin() + index + 1, newNodeB);
    parent->Clientes.insert(parent->Clientes.begin() + index, child->Clientes.back());
    child->Clientes.pop_back();
}

void ArbolB::insertNonFull(NodoB* node, Cliente* key) {
    int i = node->Clientes.size() - 1;
    if (node->esHoja) {
        node->Clientes.push_back(key);
        //sort(node->Clientes.begin(), node->Clientes.end(), key.CompareClients);
        return;
    }
    while (i >= 0 && node->Clientes[i]->numCliente > key->numCliente) {
        i--;
    }
    if (node->Llaves[i + 1]->Clientes.size() == MaxLlaves) {
        splitChild(node, i + 1, node->Llaves[i + 1]);
        if (node->Clientes[i + 1]->numCliente < key->numCliente) {
            i++;
        }
    }
    insertNonFull(node->Llaves[i + 1], key);
}

void ArbolB::printInOrder(NodoB* node) {
    int i;
    for (i = 0; i < node->Clientes.size(); i++) {
        if (!node->esHoja) {
            printInOrder(node->Llaves[i]);
        }
        cout << node->Clientes[i]->numCliente << ", " << node->Clientes[i]->nombre << " ";
    }
    if (!node->esHoja) {
        printInOrder(node->Llaves[i]);
    }
}

Cliente* ArbolB::buscarCliente(NodoB* node, int numCliente) {
    int i = 0;
    while (i < node->Clientes.size() && numCliente > node->Clientes[i]->numCliente) {
        i++;
    }
    if (i < node->Clientes.size() && numCliente == node->Clientes[i]->numCliente) {
        return node->Clientes[i];
    }
    if (node->esHoja) {
        return NULL;
    }
    return buscarCliente(node->Llaves[i], numCliente);
}

void ArbolB::cargarCliente(ArbolBB* ArbolPaises, ArbolBB* ArbolCuidades) {

    string pDireccion = "Clientes.txt";

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

        // Crear un nuevo objeto Nodo para almacenar los datos de la canción
        Cliente* aux = new Cliente();

        // Separar la línea en 13 parte y los asigna cada parte a un atributo
        aux->numCliente = stoi(linea.substr(0, pos1));
        aux->nombre = linea.substr(pos1 + 1, pos2 - pos1 - 1);
        aux->direccion = linea.substr(pos2 + 1, pos3 - pos2 - 1);
        aux->codPais = stoi(linea.substr(pos3 + 1, pos4 - pos3 - 1));
        aux->codCuidad = stoi(linea.substr(pos4 + 1, pos5 - pos4 - 1));
        aux->telefono = stoi(linea.substr(pos5 + 1, pos6 - pos5 - 1));
        aux->dia = stoi(linea.substr(pos6 + 1, pos7 - pos6 - 1));
        aux->mes = stoi(linea.substr(pos7 + 1, pos8 - pos7 - 1));
        aux->anio = stoi(linea.substr(pos8 + 1, pos9 - pos8 - 1));
        aux->descuento = stoi(linea.substr(pos9 + 1, pos10 - pos9 - 1));
        aux->saldo = stoi(linea.substr(pos10 + 1));

        if (ArbolPaises->buscarPais(aux->codPais) == NULL) {
            continue;
        }

        if (ArbolCuidades->buscarCiudad(aux->codCuidad) == NULL) {
            continue;
        }

        if (buscarCliente(aux->numCliente) == NULL) {
            insertarCliente(aux);
        }
    }

    // Cerrar el archivo
    archivo.close();
}

void ArbolB::insertarCliente(Cliente* key) {
    if (raiz == NULL) {
        raiz = new NodoB(MaxLlaves, true);
        raiz->Clientes.push_back(key);
        return;
    }
    if (raiz->Clientes.size() == MaxLlaves) {
        NodoB* newRoot = new NodoB(MaxLlaves, false);
        newRoot->Llaves.push_back(raiz);
        splitChild(newRoot, 0, raiz);
        raiz = newRoot;
    }
    insertNonFull(raiz, key);
}

void ArbolB::mostrarClientes() {
    if (raiz == NULL) {
        return;
    }
    printInOrder(raiz);
    cout << endl;
}

Cliente* ArbolB::buscarCliente(int numCliente) {
    if (raiz == NULL) {
        return NULL;
    }
    return buscarCliente(raiz, numCliente);
}

void ArbolB::eliminarCliente(int numCliente) {
    if (raiz == nullptr)
        return;

    // Llama a la función recursiva para eliminar el cliente
    eliminarClienteAux(raiz, numCliente);

    // Si la raíz se queda sin clientes, se actualiza la raíz
    if (raiz->Clientes.empty() && !raiz->esHoja) {
        NodoB* antiguaRaiz = raiz;
        raiz = raiz->Llaves[0];
        delete antiguaRaiz;
    }
}

void ArbolB::eliminarClienteAux(NodoB* nodo, int numCliente) {
    int i = 0;
    while (i < nodo->Clientes.size() && numCliente > nodo->Clientes[i]->numCliente)
        i++;

    // Si el cliente se encuentra en este nodo
    if (i < nodo->Clientes.size() && numCliente == nodo->Clientes[i]->numCliente) {
        if (nodo->esHoja) {
            // Si el nodo es una hoja, simplemente se elimina el cliente
            nodo->Clientes.erase(nodo->Clientes.begin() + i);
        }
        else {
            // Si el nodo no es una hoja, se encuentra el predecesor del cliente
            NodoB* predecesor = nodo->Llaves[i];
            while (!predecesor->esHoja)
                predecesor = predecesor->Llaves[predecesor->Llaves.size() - 1];

            // Se intercambia el cliente a eliminar con el predecesor
            Cliente* temp = predecesor->Clientes[predecesor->Clientes.size() - 1];
            predecesor->Clientes[predecesor->Clientes.size() - 1] = nodo->Clientes[i];
            nodo->Clientes[i] = temp;

            // Se llama a la función recursiva para eliminar el cliente del predecesor
            eliminarClienteAux(nodo->Llaves[i], numCliente);
        }
    }
    else {
        // Si el cliente no está en este nodo
        if (nodo->esHoja)
            return;

        // Verifica si el hijo que debería contener al cliente tiene menos clientes mínimos
        if (nodo->Llaves[i]->Clientes.size() == MaxLlaves - 1) {
            // Verifica si el hijo derecho tiene más clientes mínimos
            if (i < nodo->Llaves.size() && nodo->Llaves[i + 1]->Clientes.size() > MaxLlaves - 1) {
                // Mueve un cliente del nodo actual al hijo izquierdo
                nodo->Llaves[i]->Clientes.push_back(nodo->Clientes[i]);
                nodo->Clientes[i] = nodo->Llaves[i + 1]->Clientes[0];
                nodo->Llaves[i + 1]->Clientes.erase(nodo->Llaves[i + 1]->Clientes.begin());
                // Mueve el hijo más a la izquierda del hijo derecho al hijo actual
                if (!nodo->Llaves[i + 1]->esHoja) {
                    nodo->Llaves[i]->Llaves.push_back(nodo->Llaves[i + 1]->Llaves[0]);
                    nodo->Llaves[i + 1]->Llaves.erase(nodo->Llaves[i + 1]->Llaves.begin());
                }
            }
            // Verifica si el hijo izquierdo tiene más clientes mínimos
            else if (i > 0 && nodo->Llaves[i - 1]->Clientes.size() > MaxLlaves - 1) {
                // Mueve un cliente del nodo actual al el hijo derecho
                nodo->Llaves[i]->Clientes.insert(nodo->Llaves[i]->Clientes.begin(), nodo->Clientes[i - 1]);
                nodo->Clientes[i - 1] = nodo->Llaves[i - 1]->Clientes[nodo->Llaves[i - 1]->Clientes.size() - 1];
                nodo->Llaves[i - 1]->Clientes.erase(nodo->Llaves[i - 1]->Clientes.begin() + nodo->Llaves[i - 1]->Clientes.size() - 1);
                // Mueve el hijo más a la derecha del hijo izquierdo al el hijo actual
                if (!nodo->Llaves[i - 1]->esHoja) {
                    nodo->Llaves[i]->Llaves.insert(nodo->Llaves[i]->Llaves.begin(), nodo->Llaves[i - 1]->Llaves[nodo->Llaves[i - 1]->Llaves.size() - 1]);
                    nodo->Llaves[i - 1]->Llaves.erase(nodo->Llaves[i - 1]->Llaves.begin() + nodo->Llaves[i - 1]->Llaves.size() - 1);
                }
            }
            // Si ninguno de los hermanos tiene más clientes mínimos, se realiza una fusión
            else {
                if (i < nodo->Llaves.size()) {
                    fusionarNodos(nodo, i);
                }
                else {
                    fusionarNodos(nodo, i - 1);
                }
            }
        }
        // Llama recursivamente al método en el hijo adecuado
        eliminarClienteAux(nodo->Llaves[i], numCliente);
    }
}

void ArbolB::fusionarNodos(NodoB* nodo, int indiceHermanoDerecho) {
    NodoB* hijo = nodo->Llaves[indiceHermanoDerecho];
    NodoB* hermano = nodo->Llaves[indiceHermanoDerecho + 1];

    hijo->Clientes.push_back(nodo->Clientes[indiceHermanoDerecho]);
    hijo->Clientes.insert(hijo->Clientes.end(), hermano->Clientes.begin(), hermano->Clientes.end());

    if (!hijo->esHoja) {
        hijo->Llaves.insert(hijo->Llaves.end(), hermano->Llaves.begin(), hermano->Llaves.end());
    }

    nodo->Clientes.erase(nodo->Clientes.begin() + indiceHermanoDerecho);
    nodo->Llaves.erase(nodo->Llaves.begin() + indiceHermanoDerecho + 1);

    delete hermano;
}
