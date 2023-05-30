#pragma once
#include <iostream>
#include "ArbolB.h"
#include "ArbolBB.h"
#include "ArbolRN.h"
#include "ArbolAA.h"

using namespace std;

class Tienda {

private:


public:

	ArbolB* clientes;
	ArbolBB* paises;
	ArbolBB* ciudades;
	ArbolAVL* mascotas;
	ArbolBB* visitas;
	ArbolRN* treatments;
	ArbolAA* medication;

	Tienda() {
		paises = new ArbolBB();
		paises->cargarPais();

		// Todos los new de los arboles
		// y despues carcar cada arbol
	}

	//Gets y sets
	friend class AgregarPais;
};