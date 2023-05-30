#include "Sucursal.h"
#include <iostream>
#include<fstream>
#include <string>
using namespace std;

// Clase para representar una arista entre dos sucursales
class Distancia {
public:
    string codSucursal1;
    string codSucursal2;
    int distancia;
    Distancia* siguiente;

    Distancia() {
        codSucursal1 = "";
        codSucursal2 = "";
        distancia = 0;
        siguiente = NULL;
    }
};

// Clase para representar el grafo
class Grafo {
public:

    Sucursal* primeraSucursal;
    Distancia* primeraDistancia;

    // Constructor
    Grafo() {
        primeraDistancia = NULL;
        primeraSucursal = NULL;
    }

    // Agregar una sucursal al grafo
    void InsertarSucursal(Sucursal* sucursal) {
        if (primeraSucursal == nullptr) {
            primeraSucursal = sucursal;
        }
        else {
            Sucursal* actual = primeraSucursal;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = sucursal;
        }
    }

    // Verificar si el código de una sucursal es único en el grafo
    Sucursal* BuscarSucursal(string codigo) {

        Sucursal* actual = primeraSucursal;

        while (actual != nullptr) {

            if (actual->codSucursal == codigo) {
                return actual;  // El código ya existe en el grafo
            }
            actual = actual->siguiente;
        }
        return actual;  // El código es único en el grafo
    }

    // Agregar una arista al grafo
    void InsertarArista(Distancia* arista) {
        if (primeraDistancia == nullptr) {
            primeraDistancia = arista;
        }
        else {
            Distancia* actual = primeraDistancia;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = arista;
        }
    }

    void CargarSucursal(string pSucursal) {
        // Crear objeto ifstream para leer el archivo en la dirección especificada
        ifstream archivo;
        archivo.open(pSucursal);

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

            // Crear un nuevo objeto Nodo para almacenar los datos del artista
            Sucursal* aux = new Sucursal();

            // Separar la línea en tres partes: código del artista, nombre y código del género
            aux->codSucursal = linea.substr(0, pos1);
            aux->nombre = linea.substr(pos1 + 1);

            if (BuscarSucursal(aux->codSucursal) == NULL) {
                InsertarSucursal(aux);
            }
        }

        // Cerrar el archivo
        archivo.close();
    }

    void CargarDistancia(string pDistancia) {

        // Crear objeto ifstream para leer el archivo en la dirección especificada
        ifstream archivo;
        archivo.open(pDistancia);

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
            Distancia* aux = new Distancia();

            // Separar la línea en tres partes: código del artista, nombre y código del género
            aux->codSucursal1 = linea.substr(0, pos1);
            aux->codSucursal2 = linea.substr(pos1 + 1, pos2 - pos1 - 1);
            aux->distancia = stoi(linea.substr(pos2 + 1));

            // Valida el codigo de pais exista

            if (BuscarSucursal(aux->codSucursal1) == NULL) {
                continue;
            }
            if (BuscarSucursal(aux->codSucursal2) == NULL) {
                continue;
            }
            InsertarArista(aux);
        }
        // Cerrar el archivo
        archivo.close();
    }
};
//
//int main() {
//    // Crear un objeto Grafo
//    Grafo grafo;
//
//    grafo.CargarSucursal("Sucursales1.txt");
//    grafo.CargarDistancia("Distancias1.txt");
//
//    // Imprimir la lista de sucursales
//    cout << "Lista de sucursales:" << endl;
//    Sucursal* actualSucursal = grafo.primeraSucursal;
//    while (actualSucursal != nullptr) {
//        cout << "Código: " << actualSucursal->codSucursal << ", Nombre: " << actualSucursal->nombre << endl;
//        actualSucursal = actualSucursal->siguiente;
//    }
//
//    // Imprimir la lista de aristas
//    cout << "Lista de aristas:" << endl;
//    Distancia* actualArista = grafo.primeraDistancia;
//    while (actualArista != nullptr) {
//        cout << "Sucursal " << actualArista->codSucursal1 << " - Sucursal " << actualArista->codSucursal2 << ", Distancia: " << actualArista->distancia << endl;
//        actualArista = actualArista->siguiente;
//    }
//
//    return 0;
//}