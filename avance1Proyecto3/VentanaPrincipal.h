#pragma once

#include "AgregarPais.h"
#include "AgregarCiudad.h"
#include "AgregarCliente.h"
#include "AgregarMascota.h"
#include "AcercaDe.h"
#include "OpcionesLugares.h"
#include "AgregarVisita.h"
#include "AgregarTratamiento.h"
#include "AgregarMedicacion.h"
#include "ModificarCliente.h"
#include "ModificarMascota.h"
#include "ModificarVisita.h"
#include "ModificarTratamiento.h"
#include "ModificarMedicacion.h"
#include "ConsultarCliente.h"
#include "ConsultarMascota.h"
#include "ConsultarVisita.h"
#include "ConsultarTratamiento.h"
#include "ConsultarMedicacion.h"
#include "OpcionesClinica.h"
#include "Contacto.h"
#include "EliminarVisita.h"
#include "EliminarMascota.h"
#include "EliminarCliente.h"
#include "OpcionesCliente.h"
#include "OpcionesFacturacion.h"
#include "OpcionesSucursal.h"
#include "Tienda.h"

using namespace std;

namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaPrincipal
	/// </summary>
	public ref class VentanaPrincipal : public System::Windows::Forms::Form
	{

		Tienda* tienda = new Tienda();

	public:
		VentanaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inserciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ visitaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ visitaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ medicaciónToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ consultaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotaToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ visitaToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ medicaciónToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotaToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ visitaToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ medicaciónToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadDeUnPaísToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotaDeUnClienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ visitasDeUnaMascotaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fcaturaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saldosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sucursalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicacionesDeUnaMascotaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ otrosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteConMásSaldoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesDeCréditoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesConMásDescuentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ últimoTratamientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoMásUtilizadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteConMásFacturoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dijstraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ primToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kruskalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ puntosArtToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gradoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ caminoToolStripMenuItem;
	private: System::Windows::Forms::Button^ lugares;
	private: System::Windows::Forms::Button^ clinica;
	private: System::Windows::Forms::Button^ clientes;
	private: System::Windows::Forms::Button^ facturacion;
	private: System::Windows::Forms::Button^ sucursales;
	private: System::Windows::Forms::Panel^ opcionesLugares;

	private: System::Windows::Forms::Panel^ opcionesClinica;

	private: System::Windows::Forms::Panel^ opcionesCliente;

	private: System::Windows::Forms::Panel^ opcionesFacturacion;

	private: System::Windows::Forms::Panel^ opcionesSucursal;









	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inserciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicaciónToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotaToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitaToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicaciónToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotaToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitaToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicaciónToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadDeUnPaísToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotaDeUnClienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitasDeUnaMascotaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicacionesDeUnaMascotaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteConMásSaldoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesDeCréditoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesConMásDescuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->últimoTratamientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoMásUtilizadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteConMásFacturoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fcaturaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saldosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sucursalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dijstraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->primToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kruskalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->puntosArtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gradoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->caminoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lugares = (gcnew System::Windows::Forms::Button());
			this->clinica = (gcnew System::Windows::Forms::Button());
			this->clientes = (gcnew System::Windows::Forms::Button());
			this->facturacion = (gcnew System::Windows::Forms::Button());
			this->sucursales = (gcnew System::Windows::Forms::Button());
			this->opcionesLugares = (gcnew System::Windows::Forms::Panel());
			this->opcionesClinica = (gcnew System::Windows::Forms::Panel());
			this->opcionesCliente = (gcnew System::Windows::Forms::Panel());
			this->opcionesFacturacion = (gcnew System::Windows::Forms::Panel());
			this->opcionesSucursal = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem, this->facturaciónToolStripMenuItem, this->sucursalesToolStripMenuItem, this->acercaDeToolStripMenuItem,
					this->contactoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1478, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->inserciónToolStripMenuItem,
					this->modificaciónToolStripMenuItem, this->consultaToolStripMenuItem, this->eliminaciónToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// inserciónToolStripMenuItem
			// 
			this->inserciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paísToolStripMenuItem,
					this->ciudadToolStripMenuItem, this->clienteToolStripMenuItem, this->mascotaToolStripMenuItem, this->visitaToolStripMenuItem,
					this->tratamientoToolStripMenuItem, this->medicaciónToolStripMenuItem
			});
			this->inserciónToolStripMenuItem->Name = L"inserciónToolStripMenuItem";
			this->inserciónToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->inserciónToolStripMenuItem->Text = L"Inserción";
			// 
			// paísToolStripMenuItem
			// 
			this->paísToolStripMenuItem->Name = L"paísToolStripMenuItem";
			this->paísToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->paísToolStripMenuItem->Text = L"País";
			this->paísToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::paísToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::ciudadToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			this->clienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::clienteToolStripMenuItem_Click);
			// 
			// mascotaToolStripMenuItem
			// 
			this->mascotaToolStripMenuItem->Name = L"mascotaToolStripMenuItem";
			this->mascotaToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->mascotaToolStripMenuItem->Text = L"Mascota";
			this->mascotaToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::mascotaToolStripMenuItem_Click);
			// 
			// visitaToolStripMenuItem
			// 
			this->visitaToolStripMenuItem->Name = L"visitaToolStripMenuItem";
			this->visitaToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->visitaToolStripMenuItem->Text = L"Visita";
			this->visitaToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::visitaToolStripMenuItem_Click);
			// 
			// tratamientoToolStripMenuItem
			// 
			this->tratamientoToolStripMenuItem->Name = L"tratamientoToolStripMenuItem";
			this->tratamientoToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->tratamientoToolStripMenuItem->Text = L"Tratamiento";
			this->tratamientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::tratamientoToolStripMenuItem_Click);
			// 
			// medicaciónToolStripMenuItem
			// 
			this->medicaciónToolStripMenuItem->Name = L"medicaciónToolStripMenuItem";
			this->medicaciónToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->medicaciónToolStripMenuItem->Text = L"Medicación";
			this->medicaciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::medicaciónToolStripMenuItem_Click);
			// 
			// modificaciónToolStripMenuItem
			// 
			this->modificaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paísToolStripMenuItem1,
					this->ciudadToolStripMenuItem1, this->clienteToolStripMenuItem1, this->mascotaToolStripMenuItem1, this->visitaToolStripMenuItem1,
					this->tratamientoToolStripMenuItem1, this->medicaciónToolStripMenuItem1
			});
			this->modificaciónToolStripMenuItem->Name = L"modificaciónToolStripMenuItem";
			this->modificaciónToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->modificaciónToolStripMenuItem->Text = L"Modificación";
			// 
			// paísToolStripMenuItem1
			// 
			this->paísToolStripMenuItem1->Name = L"paísToolStripMenuItem1";
			this->paísToolStripMenuItem1->Size = System::Drawing::Size(172, 26);
			this->paísToolStripMenuItem1->Text = L"País";
			this->paísToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::paísToolStripMenuItem1_Click);
			// 
			// ciudadToolStripMenuItem1
			// 
			this->ciudadToolStripMenuItem1->Name = L"ciudadToolStripMenuItem1";
			this->ciudadToolStripMenuItem1->Size = System::Drawing::Size(172, 26);
			this->ciudadToolStripMenuItem1->Text = L"Ciudad";
			this->ciudadToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::ciudadToolStripMenuItem1_Click);
			// 
			// clienteToolStripMenuItem1
			// 
			this->clienteToolStripMenuItem1->Name = L"clienteToolStripMenuItem1";
			this->clienteToolStripMenuItem1->Size = System::Drawing::Size(172, 26);
			this->clienteToolStripMenuItem1->Text = L"Cliente";
			this->clienteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::clienteToolStripMenuItem1_Click);
			// 
			// mascotaToolStripMenuItem1
			// 
			this->mascotaToolStripMenuItem1->Name = L"mascotaToolStripMenuItem1";
			this->mascotaToolStripMenuItem1->Size = System::Drawing::Size(172, 26);
			this->mascotaToolStripMenuItem1->Text = L"Mascota";
			this->mascotaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::mascotaToolStripMenuItem1_Click);
			// 
			// visitaToolStripMenuItem1
			// 
			this->visitaToolStripMenuItem1->Name = L"visitaToolStripMenuItem1";
			this->visitaToolStripMenuItem1->Size = System::Drawing::Size(172, 26);
			this->visitaToolStripMenuItem1->Text = L"Visita";
			this->visitaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::visitaToolStripMenuItem1_Click);
			// 
			// tratamientoToolStripMenuItem1
			// 
			this->tratamientoToolStripMenuItem1->Name = L"tratamientoToolStripMenuItem1";
			this->tratamientoToolStripMenuItem1->Size = System::Drawing::Size(172, 26);
			this->tratamientoToolStripMenuItem1->Text = L"Tratamiento";
			this->tratamientoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::tratamientoToolStripMenuItem1_Click);
			// 
			// medicaciónToolStripMenuItem1
			// 
			this->medicaciónToolStripMenuItem1->Name = L"medicaciónToolStripMenuItem1";
			this->medicaciónToolStripMenuItem1->Size = System::Drawing::Size(172, 26);
			this->medicaciónToolStripMenuItem1->Text = L"Medicación";
			this->medicaciónToolStripMenuItem1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::medicaciónToolStripMenuItem1_Click);
			// 
			// consultaToolStripMenuItem
			// 
			this->consultaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paísToolStripMenuItem2,
					this->ciudadToolStripMenuItem2, this->clienteToolStripMenuItem2, this->mascotaToolStripMenuItem2, this->visitaToolStripMenuItem2,
					this->tratamientoToolStripMenuItem2, this->medicaciónToolStripMenuItem2
			});
			this->consultaToolStripMenuItem->Name = L"consultaToolStripMenuItem";
			this->consultaToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->consultaToolStripMenuItem->Text = L"Consulta";
			// 
			// paísToolStripMenuItem2
			// 
			this->paísToolStripMenuItem2->Name = L"paísToolStripMenuItem2";
			this->paísToolStripMenuItem2->Size = System::Drawing::Size(172, 26);
			this->paísToolStripMenuItem2->Text = L"País";
			this->paísToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::paísToolStripMenuItem2_Click);
			// 
			// ciudadToolStripMenuItem2
			// 
			this->ciudadToolStripMenuItem2->Name = L"ciudadToolStripMenuItem2";
			this->ciudadToolStripMenuItem2->Size = System::Drawing::Size(172, 26);
			this->ciudadToolStripMenuItem2->Text = L"Ciudad";
			this->ciudadToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::ciudadToolStripMenuItem2_Click);
			// 
			// clienteToolStripMenuItem2
			// 
			this->clienteToolStripMenuItem2->Name = L"clienteToolStripMenuItem2";
			this->clienteToolStripMenuItem2->Size = System::Drawing::Size(172, 26);
			this->clienteToolStripMenuItem2->Text = L"Cliente";
			this->clienteToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::clienteToolStripMenuItem2_Click);
			// 
			// mascotaToolStripMenuItem2
			// 
			this->mascotaToolStripMenuItem2->Name = L"mascotaToolStripMenuItem2";
			this->mascotaToolStripMenuItem2->Size = System::Drawing::Size(172, 26);
			this->mascotaToolStripMenuItem2->Text = L"Mascota";
			this->mascotaToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::mascotaToolStripMenuItem2_Click);
			// 
			// visitaToolStripMenuItem2
			// 
			this->visitaToolStripMenuItem2->Name = L"visitaToolStripMenuItem2";
			this->visitaToolStripMenuItem2->Size = System::Drawing::Size(172, 26);
			this->visitaToolStripMenuItem2->Text = L"Visita";
			this->visitaToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::visitaToolStripMenuItem2_Click);
			// 
			// tratamientoToolStripMenuItem2
			// 
			this->tratamientoToolStripMenuItem2->Name = L"tratamientoToolStripMenuItem2";
			this->tratamientoToolStripMenuItem2->Size = System::Drawing::Size(172, 26);
			this->tratamientoToolStripMenuItem2->Text = L"Tratamiento";
			this->tratamientoToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::tratamientoToolStripMenuItem2_Click);
			// 
			// medicaciónToolStripMenuItem2
			// 
			this->medicaciónToolStripMenuItem2->Name = L"medicaciónToolStripMenuItem2";
			this->medicaciónToolStripMenuItem2->Size = System::Drawing::Size(172, 26);
			this->medicaciónToolStripMenuItem2->Text = L"Medicación";
			this->medicaciónToolStripMenuItem2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::medicaciónToolStripMenuItem2_Click);
			// 
			// eliminaciónToolStripMenuItem
			// 
			this->eliminaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paísToolStripMenuItem3,
					this->ciudadToolStripMenuItem3, this->clienteToolStripMenuItem3, this->mascotaToolStripMenuItem3, this->visitaToolStripMenuItem3,
					this->tratamientoToolStripMenuItem3, this->medicaciónToolStripMenuItem3
			});
			this->eliminaciónToolStripMenuItem->Name = L"eliminaciónToolStripMenuItem";
			this->eliminaciónToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->eliminaciónToolStripMenuItem->Text = L"Eliminación";
			// 
			// paísToolStripMenuItem3
			// 
			this->paísToolStripMenuItem3->Name = L"paísToolStripMenuItem3";
			this->paísToolStripMenuItem3->Size = System::Drawing::Size(172, 26);
			this->paísToolStripMenuItem3->Text = L"País";
			this->paísToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VentanaPrincipal::paísToolStripMenuItem3_Click);
			// 
			// ciudadToolStripMenuItem3
			// 
			this->ciudadToolStripMenuItem3->Name = L"ciudadToolStripMenuItem3";
			this->ciudadToolStripMenuItem3->Size = System::Drawing::Size(172, 26);
			this->ciudadToolStripMenuItem3->Text = L"Ciudad";
			this->ciudadToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VentanaPrincipal::ciudadToolStripMenuItem3_Click);
			// 
			// clienteToolStripMenuItem3
			// 
			this->clienteToolStripMenuItem3->Name = L"clienteToolStripMenuItem3";
			this->clienteToolStripMenuItem3->Size = System::Drawing::Size(172, 26);
			this->clienteToolStripMenuItem3->Text = L"Cliente";
			this->clienteToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VentanaPrincipal::clienteToolStripMenuItem3_Click);
			// 
			// mascotaToolStripMenuItem3
			// 
			this->mascotaToolStripMenuItem3->Name = L"mascotaToolStripMenuItem3";
			this->mascotaToolStripMenuItem3->Size = System::Drawing::Size(172, 26);
			this->mascotaToolStripMenuItem3->Text = L"Mascota";
			this->mascotaToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VentanaPrincipal::mascotaToolStripMenuItem3_Click);
			// 
			// visitaToolStripMenuItem3
			// 
			this->visitaToolStripMenuItem3->Name = L"visitaToolStripMenuItem3";
			this->visitaToolStripMenuItem3->Size = System::Drawing::Size(172, 26);
			this->visitaToolStripMenuItem3->Text = L"Visita";
			this->visitaToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VentanaPrincipal::visitaToolStripMenuItem3_Click);
			// 
			// tratamientoToolStripMenuItem3
			// 
			this->tratamientoToolStripMenuItem3->Name = L"tratamientoToolStripMenuItem3";
			this->tratamientoToolStripMenuItem3->Size = System::Drawing::Size(172, 26);
			this->tratamientoToolStripMenuItem3->Text = L"Tratamiento";
			this->tratamientoToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VentanaPrincipal::tratamientoToolStripMenuItem3_Click);
			// 
			// medicaciónToolStripMenuItem3
			// 
			this->medicaciónToolStripMenuItem3->Name = L"medicaciónToolStripMenuItem3";
			this->medicaciónToolStripMenuItem3->Size = System::Drawing::Size(172, 26);
			this->medicaciónToolStripMenuItem3->Text = L"Medicación";
			this->medicaciónToolStripMenuItem3->Click += gcnew System::EventHandler(this, &VentanaPrincipal::medicaciónToolStripMenuItem3_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->paísToolStripMenuItem4,
					this->ciudadDeUnPaísToolStripMenuItem, this->clientesToolStripMenuItem, this->mascotaDeUnClienteToolStripMenuItem, this->visitasDeUnaMascotaToolStripMenuItem,
					this->tratamientosToolStripMenuItem, this->medicacionesDeUnaMascotaToolStripMenuItem, this->otrosToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// paísToolStripMenuItem4
			// 
			this->paísToolStripMenuItem4->Name = L"paísToolStripMenuItem4";
			this->paísToolStripMenuItem4->Size = System::Drawing::Size(292, 26);
			this->paísToolStripMenuItem4->Text = L"País";
			// 
			// ciudadDeUnPaísToolStripMenuItem
			// 
			this->ciudadDeUnPaísToolStripMenuItem->Name = L"ciudadDeUnPaísToolStripMenuItem";
			this->ciudadDeUnPaísToolStripMenuItem->Size = System::Drawing::Size(292, 26);
			this->ciudadDeUnPaísToolStripMenuItem->Text = L"Ciudad de un País";
			this->ciudadDeUnPaísToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::ciudadDeUnPaísToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(292, 26);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			// 
			// mascotaDeUnClienteToolStripMenuItem
			// 
			this->mascotaDeUnClienteToolStripMenuItem->Name = L"mascotaDeUnClienteToolStripMenuItem";
			this->mascotaDeUnClienteToolStripMenuItem->Size = System::Drawing::Size(292, 26);
			this->mascotaDeUnClienteToolStripMenuItem->Text = L"Mascotas de un Cliente";
			// 
			// visitasDeUnaMascotaToolStripMenuItem
			// 
			this->visitasDeUnaMascotaToolStripMenuItem->Name = L"visitasDeUnaMascotaToolStripMenuItem";
			this->visitasDeUnaMascotaToolStripMenuItem->Size = System::Drawing::Size(292, 26);
			this->visitasDeUnaMascotaToolStripMenuItem->Text = L"Visitas de una Mascota";
			// 
			// tratamientosToolStripMenuItem
			// 
			this->tratamientosToolStripMenuItem->Name = L"tratamientosToolStripMenuItem";
			this->tratamientosToolStripMenuItem->Size = System::Drawing::Size(292, 26);
			this->tratamientosToolStripMenuItem->Text = L"Tratamientos";
			// 
			// medicacionesDeUnaMascotaToolStripMenuItem
			// 
			this->medicacionesDeUnaMascotaToolStripMenuItem->Name = L"medicacionesDeUnaMascotaToolStripMenuItem";
			this->medicacionesDeUnaMascotaToolStripMenuItem->Size = System::Drawing::Size(292, 26);
			this->medicacionesDeUnaMascotaToolStripMenuItem->Text = L"Medicaciones de una Mascota";
			// 
			// otrosToolStripMenuItem
			// 
			this->otrosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->clienteConMásSaldoToolStripMenuItem,
					this->clientesDeCréditoToolStripMenuItem, this->clientesConMásDescuentosToolStripMenuItem, this->últimoTratamientoToolStripMenuItem,
					this->tratamientoMásUtilizadoToolStripMenuItem, this->clienteConMásFacturoToolStripMenuItem
			});
			this->otrosToolStripMenuItem->Name = L"otrosToolStripMenuItem";
			this->otrosToolStripMenuItem->Size = System::Drawing::Size(292, 26);
			this->otrosToolStripMenuItem->Text = L"Otros";
			// 
			// clienteConMásSaldoToolStripMenuItem
			// 
			this->clienteConMásSaldoToolStripMenuItem->Name = L"clienteConMásSaldoToolStripMenuItem";
			this->clienteConMásSaldoToolStripMenuItem->Size = System::Drawing::Size(281, 26);
			this->clienteConMásSaldoToolStripMenuItem->Text = L"Cliente con más saldo";
			// 
			// clientesDeCréditoToolStripMenuItem
			// 
			this->clientesDeCréditoToolStripMenuItem->Name = L"clientesDeCréditoToolStripMenuItem";
			this->clientesDeCréditoToolStripMenuItem->Size = System::Drawing::Size(281, 26);
			this->clientesDeCréditoToolStripMenuItem->Text = L"Clientes de crédito";
			// 
			// clientesConMásDescuentosToolStripMenuItem
			// 
			this->clientesConMásDescuentosToolStripMenuItem->Name = L"clientesConMásDescuentosToolStripMenuItem";
			this->clientesConMásDescuentosToolStripMenuItem->Size = System::Drawing::Size(281, 26);
			this->clientesConMásDescuentosToolStripMenuItem->Text = L"Clientes con más descuentos";
			// 
			// últimoTratamientoToolStripMenuItem
			// 
			this->últimoTratamientoToolStripMenuItem->Name = L"últimoTratamientoToolStripMenuItem";
			this->últimoTratamientoToolStripMenuItem->Size = System::Drawing::Size(281, 26);
			this->últimoTratamientoToolStripMenuItem->Text = L"Último tratamiento";
			// 
			// tratamientoMásUtilizadoToolStripMenuItem
			// 
			this->tratamientoMásUtilizadoToolStripMenuItem->Name = L"tratamientoMásUtilizadoToolStripMenuItem";
			this->tratamientoMásUtilizadoToolStripMenuItem->Size = System::Drawing::Size(281, 26);
			this->tratamientoMásUtilizadoToolStripMenuItem->Text = L"Tratamiento más utilizado";
			// 
			// clienteConMásFacturoToolStripMenuItem
			// 
			this->clienteConMásFacturoToolStripMenuItem->Name = L"clienteConMásFacturoToolStripMenuItem";
			this->clienteConMásFacturoToolStripMenuItem->Size = System::Drawing::Size(281, 26);
			this->clienteConMásFacturoToolStripMenuItem->Text = L"Cliente con más facturo";
			// 
			// facturaciónToolStripMenuItem
			// 
			this->facturaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fcaturaciónToolStripMenuItem,
					this->saldosToolStripMenuItem, this->descuentosToolStripMenuItem
			});
			this->facturaciónToolStripMenuItem->Name = L"facturaciónToolStripMenuItem";
			this->facturaciónToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->facturaciónToolStripMenuItem->Text = L"Facturación";
			// 
			// fcaturaciónToolStripMenuItem
			// 
			this->fcaturaciónToolStripMenuItem->Name = L"fcaturaciónToolStripMenuItem";
			this->fcaturaciónToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->fcaturaciónToolStripMenuItem->Text = L"Facturación";
			// 
			// saldosToolStripMenuItem
			// 
			this->saldosToolStripMenuItem->Name = L"saldosToolStripMenuItem";
			this->saldosToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->saldosToolStripMenuItem->Text = L"Saldos";
			// 
			// descuentosToolStripMenuItem
			// 
			this->descuentosToolStripMenuItem->Name = L"descuentosToolStripMenuItem";
			this->descuentosToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->descuentosToolStripMenuItem->Text = L"Descuentos";
			// 
			// sucursalesToolStripMenuItem
			// 
			this->sucursalesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->dijstraToolStripMenuItem,
					this->primToolStripMenuItem, this->kruskalToolStripMenuItem, this->puntosArtToolStripMenuItem, this->gradoToolStripMenuItem,
					this->caminoToolStripMenuItem
			});
			this->sucursalesToolStripMenuItem->Name = L"sucursalesToolStripMenuItem";
			this->sucursalesToolStripMenuItem->Size = System::Drawing::Size(91, 24);
			this->sucursalesToolStripMenuItem->Text = L"Sucursales";
			// 
			// dijstraToolStripMenuItem
			// 
			this->dijstraToolStripMenuItem->Name = L"dijstraToolStripMenuItem";
			this->dijstraToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->dijstraToolStripMenuItem->Text = L"Dijstra";
			// 
			// primToolStripMenuItem
			// 
			this->primToolStripMenuItem->Name = L"primToolStripMenuItem";
			this->primToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->primToolStripMenuItem->Text = L"Prim";
			// 
			// kruskalToolStripMenuItem
			// 
			this->kruskalToolStripMenuItem->Name = L"kruskalToolStripMenuItem";
			this->kruskalToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->kruskalToolStripMenuItem->Text = L"Kruskal";
			// 
			// puntosArtToolStripMenuItem
			// 
			this->puntosArtToolStripMenuItem->Name = L"puntosArtToolStripMenuItem";
			this->puntosArtToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->puntosArtToolStripMenuItem->Text = L"Puntos Art";
			// 
			// gradoToolStripMenuItem
			// 
			this->gradoToolStripMenuItem->Name = L"gradoToolStripMenuItem";
			this->gradoToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->gradoToolStripMenuItem->Text = L"Grado";
			// 
			// caminoToolStripMenuItem
			// 
			this->caminoToolStripMenuItem->Name = L"caminoToolStripMenuItem";
			this->caminoToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->caminoToolStripMenuItem->Text = L"Camino";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			this->acercaDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::acercaDeToolStripMenuItem_Click);
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(83, 24);
			this->contactoToolStripMenuItem->Text = L"Contacto";
			this->contactoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::contactoToolStripMenuItem_Click);
			// 
			// lugares
			// 
			this->lugares->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lugares.Image")));
			this->lugares->Location = System::Drawing::Point(30, 58);
			this->lugares->Name = L"lugares";
			this->lugares->Size = System::Drawing::Size(128, 166);
			this->lugares->TabIndex = 1;
			this->lugares->Text = L"Lugares";
			this->lugares->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->lugares->UseVisualStyleBackColor = true;
			this->lugares->Click += gcnew System::EventHandler(this, &VentanaPrincipal::button1_Click);
			// 
			// clinica
			// 
			this->clinica->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clinica.Image")));
			this->clinica->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->clinica->Location = System::Drawing::Point(30, 272);
			this->clinica->Name = L"clinica";
			this->clinica->Size = System::Drawing::Size(128, 178);
			this->clinica->TabIndex = 2;
			this->clinica->Text = L"Clínica";
			this->clinica->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->clinica->UseVisualStyleBackColor = true;
			this->clinica->Click += gcnew System::EventHandler(this, &VentanaPrincipal::clinica_Click);
			// 
			// clientes
			// 
			this->clientes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clientes.Image")));
			this->clientes->Location = System::Drawing::Point(515, 58);
			this->clientes->Name = L"clientes";
			this->clientes->Size = System::Drawing::Size(128, 166);
			this->clientes->TabIndex = 3;
			this->clientes->Text = L"Clientes";
			this->clientes->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->clientes->UseVisualStyleBackColor = true;
			this->clientes->Click += gcnew System::EventHandler(this, &VentanaPrincipal::clientes_Click);
			// 
			// facturacion
			// 
			this->facturacion->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"facturacion.Image")));
			this->facturacion->Location = System::Drawing::Point(515, 272);
			this->facturacion->Name = L"facturacion";
			this->facturacion->Size = System::Drawing::Size(128, 178);
			this->facturacion->TabIndex = 4;
			this->facturacion->Text = L"Facturación";
			this->facturacion->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->facturacion->UseVisualStyleBackColor = true;
			this->facturacion->Click += gcnew System::EventHandler(this, &VentanaPrincipal::facturacion_Click);
			// 
			// sucursales
			// 
			this->sucursales->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sucursales.Image")));
			this->sucursales->Location = System::Drawing::Point(988, 173);
			this->sucursales->Name = L"sucursales";
			this->sucursales->Size = System::Drawing::Size(128, 178);
			this->sucursales->TabIndex = 5;
			this->sucursales->Text = L"Sucursales";
			this->sucursales->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->sucursales->UseVisualStyleBackColor = true;
			this->sucursales->Click += gcnew System::EventHandler(this, &VentanaPrincipal::sucursales_Click);
			// 
			// opcionesLugares
			// 
			this->opcionesLugares->Location = System::Drawing::Point(166, 58);
			this->opcionesLugares->Name = L"opcionesLugares";
			this->opcionesLugares->Size = System::Drawing::Size(304, 188);
			this->opcionesLugares->TabIndex = 6;
			// 
			// opcionesClinica
			// 
			this->opcionesClinica->Location = System::Drawing::Point(166, 272);
			this->opcionesClinica->Name = L"opcionesClinica";
			this->opcionesClinica->Size = System::Drawing::Size(304, 220);
			this->opcionesClinica->TabIndex = 8;
			// 
			// opcionesCliente
			// 
			this->opcionesCliente->Location = System::Drawing::Point(649, 47);
			this->opcionesCliente->Name = L"opcionesCliente";
			this->opcionesCliente->Size = System::Drawing::Size(324, 188);
			this->opcionesCliente->TabIndex = 8;
			this->opcionesCliente->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &VentanaPrincipal::opcionesCliente_Paint);
			// 
			// opcionesFacturacion
			// 
			this->opcionesFacturacion->Location = System::Drawing::Point(649, 241);
			this->opcionesFacturacion->Name = L"opcionesFacturacion";
			this->opcionesFacturacion->Size = System::Drawing::Size(324, 220);
			this->opcionesFacturacion->TabIndex = 8;
			// 
			// opcionesSucursal
			// 
			this->opcionesSucursal->Location = System::Drawing::Point(1122, 160);
			this->opcionesSucursal->Name = L"opcionesSucursal";
			this->opcionesSucursal->Size = System::Drawing::Size(331, 218);
			this->opcionesSucursal->TabIndex = 9;
			// 
			// VentanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1478, 519);
			this->Controls->Add(this->opcionesSucursal);
			this->Controls->Add(this->opcionesFacturacion);
			this->Controls->Add(this->opcionesCliente);
			this->Controls->Add(this->opcionesClinica);
			this->Controls->Add(this->opcionesLugares);
			this->Controls->Add(this->sucursales);
			this->Controls->Add(this->facturacion);
			this->Controls->Add(this->clientes);
			this->Controls->Add(this->clinica);
			this->Controls->Add(this->lugares);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"VentanaPrincipal";
			this->Text = L"Veterinaria Suli";
			this->Load += gcnew System::EventHandler(this, &VentanaPrincipal::VentanaPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void VentanaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ciudadDeUnPaísToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void acercaDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AcercaDe^ f = gcnew AcercaDe();
		f->Show();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		OpcionesLugares^ f = gcnew OpcionesLugares(this->tienda);
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesLugares->Controls->Clear();
		opcionesLugares->Controls->Add(f);

		f->Show();
	}
	private: System::Void paísToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarPais^ f = gcnew AgregarPais(this->tienda);
		f->Show();
	}
	private: System::Void ciudadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarCiudad^ f = gcnew AgregarCiudad();
		f->Show();
	}
	private: System::Void clienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarCliente^ f = gcnew AgregarCliente();
		f->Show();
	}
	private: System::Void mascotaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarMascota^ f = gcnew AgregarMascota();
		f->Show();
	}
	private: System::Void visitaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarVisita^ f = gcnew AgregarVisita();
		f->Show();
	}
	private: System::Void tratamientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarTratamiento^ f = gcnew AgregarTratamiento();
		f->Show();
	}
	private: System::Void medicaciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarMedicacion^ f = gcnew AgregarMedicacion();
		f->Show();
	}
	private: System::Void paísToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarPais^ f = gcnew ModificarPais();
		f->Show();
	}
	private: System::Void ciudadToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarCiudad^ f = gcnew ModificarCiudad();
		f->Show();
	}
	private: System::Void clienteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarCliente^ f = gcnew ModificarCliente();
		f->Show();
	}
	private: System::Void mascotaToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarMascota^ f = gcnew ModificarMascota();
		f->Show();
	}
	private: System::Void visitaToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarVisita^ f = gcnew ModificarVisita();
		f->Show();
	}
	private: System::Void tratamientoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarTratamiento^ f = gcnew ModificarTratamiento();
		f->Show();
	}
	private: System::Void medicaciónToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarMedicacion^ f = gcnew ModificarMedicacion();
		f->Show();
	}
	private: System::Void paísToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarPais^ f = gcnew ConsultarPais();
		f->Show();
	}
	private: System::Void ciudadToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarCiudad^ f = gcnew ConsultarCiudad();
		f->Show();
	}
	private: System::Void clienteToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarCliente^ f = gcnew ConsultarCliente();
		f->Show();
	}
	private: System::Void mascotaToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarMascota^ f = gcnew ConsultarMascota();
		f->Show();
	}
	private: System::Void visitaToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarVisita^ f = gcnew ConsultarVisita();
		f->Show();
	}
	private: System::Void tratamientoToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarTratamiento^ f = gcnew ConsultarTratamiento();
		f->Show();
	}
	private: System::Void medicaciónToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarMedicacion^ f = gcnew ConsultarMedicacion();
		f->Show();
	}
	private: System::Void paísToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		EliminarPais^ f = gcnew EliminarPais();
		f->Show();
	}
	private: System::Void ciudadToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		EliminarCiudad^ f = gcnew EliminarCiudad();
		f->Show();
	}
	private: System::Void clienteToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		EliminarCliente^ f = gcnew EliminarCliente();
		f->Show();
	}
	private: System::Void mascotaToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		EliminarMascota^ f = gcnew EliminarMascota();
		f->Show();
	}
	private: System::Void visitaToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		EliminarVisita^ f = gcnew EliminarVisita();
		f->Show();
	}
	private: System::Void tratamientoToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		EliminarTratamiento^ f = gcnew EliminarTratamiento();
		f->Show();
	}
	private: System::Void medicaciónToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		EliminarMedicacion^ f = gcnew EliminarMedicacion();
		f->Show();
	}
	private: System::Void contactoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Contacto^ f = gcnew Contacto();
		f->Show();
	}
private: System::Void opcionesCliente_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void clinica_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesClinica^ f = gcnew OpcionesClinica();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesClinica->Controls->Clear();
		opcionesClinica->Controls->Add(f);

		f->Show();
	}
	private: System::Void clientes_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesCliente^ f = gcnew OpcionesCliente();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesCliente->Controls->Clear();
		opcionesCliente->Controls->Add(f);

		f->Show();
	}
	private: System::Void facturacion_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesFacturacion^ f = gcnew OpcionesFacturacion();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesFacturacion->Controls->Clear();
		opcionesFacturacion->Controls->Add(f);

		f->Show();
	}
	private: System::Void sucursales_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesSucursal^ f = gcnew OpcionesSucursal();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesSucursal->Controls->Clear();
		opcionesSucursal->Controls->Add(f);

		f->Show();
	}
};
}
