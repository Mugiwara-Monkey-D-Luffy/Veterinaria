#pragma once
#include<iostream>
#include<fstream>
#include "ArbolAVL.h"
#include "NodoBB.h"
using namespace std;

class ArbolBB {

public:

    NodoBB* insertarNodoPais(NodoBB* nodo, NodoBB* nuevoNodo);
    NodoBB* insertarNodoCuidad(NodoBB* nodo, NodoBB* nuevoNodo);
    NodoBB* insertarNodoVisita(NodoBB* nodo, NodoBB* nuevoNodo);

    NodoBB* buscarNodoPais(NodoBB* nodo, int valorBuscado);
    NodoBB* buscarNodoCuidad(NodoBB* nodo, int valorBuscado);
    NodoBB* buscarNodoVisita(NodoBB* nodo, int valorBuscado);


    bool InsertaNodo(int codPais, string nombre, NodoBB* nuevoNodo);
    bool InsertaPais(int codPais, string nombre);

    void mostrarPais(NodoBB* nodo);
    void mostrarCuidad(NodoBB* nodo);
    void mostrarVisita(NodoBB* nodo);

    void reportePaises(NodoBB* raiz, ofstream& archivo) {

        if (raiz != NULL) {

            reportePaises(raiz->izquierda, archivo);

            archivo << raiz->codPais << " , " << raiz->nombre << "\n\n";

            reportePaises(raiz->derecha, archivo);

        }
    }

    void reporteCuidadesDePais(NodoBB* raiz, int id_pais, ofstream& archivo) {

        if (raiz != NULL) {

            reporteCuidadesDePais(raiz->izquierda, id_pais, archivo);

            if (raiz->codPais == id_pais) {

                archivo << raiz->codCuidad << "," << raiz->nombre << "," << raiz->codPais << "\n\n";
            }
            reporteCuidadesDePais(raiz->derecha, id_pais, archivo);
        }
    }

    void reporteVisitasdeMascotas(NodoBB* raiz, int idAnimal, ofstream& archivo) {

        if (raiz != NULL) {

            reporteVisitasdeMascotas(raiz->izquierda, idAnimal, archivo);

            if (raiz->idAnimal == idAnimal) {

                archivo << raiz->codVisita << " " << raiz->idAnimal << " " << raiz->dia << "-" << raiz->mes << "-" << raiz->anio << " $" << raiz->totalFactura;

                if (raiz->formatoPago == 1)
                    archivo << " Contado" << "\n\n";
                else
                    archivo << " Credito" << "\n\n";
            }
            reporteVisitasdeMascotas(raiz->derecha, idAnimal, archivo);
        }
    }

    NodoBB* raiz;

    NodoBB* raizCiudad;


    ArbolBB() {
        raiz = NULL;
        raizCiudad = NULL;
    }

    void ReportePaises() {

        ofstream archivo("Reporte Paises.txt");

        reportePaises(raiz, archivo);

        archivo.close();
    }

    void reporteCuidadesDePais(int codPais) {

        ofstream archivo("Reporte de Cuidades de Pais.txt");

        reporteCuidadesDePais(raiz, codPais, archivo);

        archivo.close();
    }

    void reporteVisitasdeMascotas(int idAnimal) {

        ofstream archivo("Reporte de Visitas de Mascotas.txt");

        reporteVisitasdeMascotas(raiz, idAnimal, archivo);

        archivo.close();
    }

    void insertarPais(NodoBB* nuevoNodo);
    void insertarCuidad(NodoBB* nuevoNodo);
    void insertarVisita(NodoBB* nuevoNodo);

    NodoBB* buscarPais(int valorBuscado);
    NodoBB* buscarCiudad(int valorBuscado);
    NodoBB* buscarVisita(int valorBuscado);

    void cargarPais();
    void cargarCuidad(ArbolBB* ArbolPaises);
    void cargarVisita(ArbolAVL* ArbolMascotas);

    void eliminarPais(int pCodPais);
    void eliminarCiudad(int pCodCuidad);
    void eliminarVisita(int pCodVisita);

    void mostrarPaises();
    void mostrarCuidades();
    void mostrarVisitas();

    void cargarPaises();

    void ImprimirArbol(string& result, NodoBB* nodo);

    NodoBB* BuscarPorIdPais(int id, NodoBB* nodo);

    bool InsertaCiudad(int codCiudad, string nombre);

    NodoBB* BuscarPorIdCiudad(int id, NodoBB* nodo);
};