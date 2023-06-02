#pragma once
#include <iostream>
#include "ArbolB.h"
#include "ArbolBB.h"
#include "ArbolRN.h"
#include "ArbolAA.h"
#include "ArbolAVL.h"

using namespace std;

class Tienda {

private:


public:
	

	ArbolBB* paises;
	ArbolBB* ciudades;
	ArbolB* clientes;
	ArbolAVL* mascotas;
	ArbolBB* visitas;
	ArbolRN* tratamientos;
	ArbolAA* medicacion;

	Tienda() {
		paises = new ArbolBB();
		paises->cargarPais();

		ciudades = new ArbolBB();
		ciudades->cargarCuidad(paises);

		clientes = new ArbolB();
		//clientes->cargarCliente(paises, ciudades);

		mascotas = new ArbolAVL();
		//mascotas->cargarMascota(clientes);

		visitas = new ArbolBB();
		//visitas->cargarVisita(mascotas);

		tratamientos = new ArbolRN();
		//tratamientos->cargarTratamiento();

		medicacion = new ArbolAA();
		//medicacion->cargarMascota(mascotas);
	}

	//Gets y sets
	friend class AgregarPais;
	friend class ModificarPais;
	friend class ConusltarPais;
	friend class EliminarPais;

	friend class AgregarCiudad;
	friend class ModificarCiudad;
	friend class ConusltarCiudad;
	friend class EliminarCiudad;

	friend class AgregarCliente;
	friend class ModificarCliente;
	friend class ConusltarCliente;
	friend class EliminarCliente;

	friend class AgregarMascota;
	friend class ModificarMascota;
	friend class ConusltarMascota;
	friend class EliminarMascota;

	friend class AgregarVisita;
	friend class ModificarVisita;
	friend class ConusltarVisita;
	friend class EliminarVisita;

	friend class AgregarTratamiento;
	friend class ModificarTratamiento;
	friend class ConusltarTratamiento;
	friend class EliminarTratamiento;

	friend class AgregarMedicacion;
	friend class ModificarMedicacion;
	friend class ConusltarMedicacion;
	friend class EliminarMedicacion;
};