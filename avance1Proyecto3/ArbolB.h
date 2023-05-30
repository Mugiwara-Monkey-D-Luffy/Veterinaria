#pragma once
#include "NodoB.h"
using namespace std;

class ArbolB {
public:

	void splitChild(NodoB* parent, int index, NodoB* child);
	void insertNonFull(NodoB* node, Cliente* key);

	void printInOrder(NodoB* node);

	void ReporteClientes(NodoB* raiz, ofstream& archivo) {

		if (raiz != NULL) {

			for (int i = 0; i < raiz->Clientes.size(); i++) {
				archivo << raiz->Clientes[i]->numCliente << " " << raiz->Clientes[i]->nombre << " " << raiz->Clientes[i]->direccion << " " << raiz->Clientes[i]->codPais << " " << raiz->Clientes[i]->codCuidad << " " << raiz->Clientes[i]->telefono << " " << raiz->Clientes[i]->dia << "-" << raiz->Clientes[i]->mes << "-" << raiz->Clientes[i]->anio << "\n\n";

			}
			archivo << endl;
			if (!raiz->esHoja) {
				for (int i = 0; i < raiz->Llaves.size(); i++) {
					ReporteClientes(raiz->Llaves[i], archivo);
				}
			}
		}
	}

	int saldo = 0;
	int indice = 0;
	void ReporteClienteConMasSaldo(NodoB* raiz, ofstream& archivo, int saldo, int indice) {

		if (raiz != NULL) {

			for (int i = 0; i < raiz->Clientes.size(); i++) {

				if (raiz->Clientes[i]->saldo > saldo) {
					saldo = raiz->Clientes[i]->saldo;
					indice = i;
				}
			}

			archivo << endl;
			if (!raiz->esHoja) {
				for (int i = 0; i < raiz->Llaves.size(); i++) {
					ReporteClienteConMasSaldo(raiz->Llaves[i], archivo, raiz->Clientes[i]->saldo, i);

				}
			}
			archivo << raiz->Clientes[indice]->numCliente << " " << raiz->Clientes[indice]->nombre << " " << raiz->Clientes[indice]->direccion << " " << raiz->Clientes[indice]->codPais << " " << raiz->Clientes[indice]->codCuidad << " " << raiz->Clientes[indice]->telefono << " " << raiz->Clientes[indice]->dia << "-" << raiz->Clientes[indice]->mes << "-" << raiz->Clientes[indice]->anio << " " << raiz->Clientes[indice]->descuento << " " << raiz->Clientes[indice]->saldo << "\n\n";
			archivo << endl;
		}
	}

	int descuento = 0;
	void mayorDescuento(NodoB* raiz, ofstream& archivo, int descuento) {

		if (raiz != NULL) {

			for (int i = 0; i < raiz->Clientes.size(); i++) {

				if (raiz->Clientes[i]->descuento > descuento) {
					descuento = raiz->Clientes[i]->descuento;

				}
			}

			if (!raiz->esHoja) {
				for (int i = 0; i < raiz->Llaves.size(); i++) {
					mayorDescuento(raiz->Llaves[i], archivo, raiz->Clientes[i]->descuento);
				}
			}
			ReporteClientesConMasDescuento(raiz, archivo, descuento);
		}
	}

	void ReporteClientesConMasDescuento(NodoB* raiz, ofstream& archivo, int descuento) {
		cout << descuento;
		if (raiz != NULL) {

			for (int i = 0; i < raiz->Clientes.size(); i++) {

				if (raiz->Clientes[i]->descuento == descuento) {
					archivo << raiz->Clientes[indice]->numCliente << " " << raiz->Clientes[indice]->nombre << " " << raiz->Clientes[indice]->direccion << " " << raiz->Clientes[indice]->codPais << " " << raiz->Clientes[indice]->codCuidad << " " << raiz->Clientes[indice]->telefono << " " << raiz->Clientes[indice]->dia << "-" << raiz->Clientes[indice]->mes << "-" << raiz->Clientes[indice]->anio << " " << raiz->Clientes[indice]->descuento << " " << raiz->Clientes[indice]->saldo << "\n\n";
				}
			}

			archivo << endl;
			if (!raiz->esHoja) {
				for (int i = 0; i < raiz->Llaves.size(); i++) {
					ReporteClientesConMasDescuento(raiz->Llaves[i], archivo, descuento);
				}
			}
		}
	}


	NodoB* raiz;
	int t;
	int MaxLlaves;

	ArbolB(int t, int MaxLlaves) {
		this->raiz = NULL;
		this->t = t;
		this->MaxLlaves = MaxLlaves;
	}

	void insertarCliente(Cliente* key);

	void mostrarClientes();

	Cliente* buscarCliente(int numCliente);

	Cliente* buscarCliente(NodoB* node, int numCliente);

	void ReporteClientes() {

		ofstream archivo("Reporte Clientes.txt");
		if (archivo.is_open()) {

			ReporteClientes(raiz, archivo);
			archivo.close();
		}
	}

	void ReporteClienteConMasSaldo() {

		ofstream archivo("Reporte Cliente con más saldo.txt");
		if (archivo.is_open()) {

			ReporteClienteConMasSaldo(raiz, archivo, saldo, indice);
			archivo.close();
		}
	}

	void ReporteClientesConMasDescuento() {

		ofstream archivo("Reporte Clientes con más descuento.txt");
		if (archivo.is_open()) {

			mayorDescuento(raiz, archivo, descuento);
			//ReporteClientesConMasDescuento(raiz, archivo);
			archivo.close();
		}
	}

	friend class ArbolAVL;
};
