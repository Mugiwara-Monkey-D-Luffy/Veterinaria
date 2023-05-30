#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "ArbolB.h"

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
