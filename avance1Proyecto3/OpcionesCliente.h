#pragma once

#include "OpcionesClienteCliente.h"
#include "OpcionesClienteMascota.h"
#include "OpcionesClienteVisita.h"

#include "AgregarCliente.h"
#include "ConsultarCliente.h"
#include "ModificarCliente.h"
#include "EliminarCliente.h"

namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OpcionesCliente
	/// </summary>
	public ref class OpcionesCliente : public System::Windows::Forms::Form
	{
	public:
		OpcionesCliente(void)
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
		~OpcionesCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ opcionesCliente2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OpcionesCliente::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->opcionesCliente2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(12, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cliente";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OpcionesCliente::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(12, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Mascota";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OpcionesCliente::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(12, 127);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 52);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Visita";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &OpcionesCliente::button3_Click);
			// 
			// opcionesCliente2
			// 
			this->opcionesCliente2->Location = System::Drawing::Point(137, 18);
			this->opcionesCliente2->Name = L"opcionesCliente2";
			this->opcionesCliente2->Size = System::Drawing::Size(200, 157);
			this->opcionesCliente2->TabIndex = 3;
			// 
			// OpcionesCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 187);
			this->Controls->Add(this->opcionesCliente2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OpcionesCliente";
			this->Text = L"OpcionesCliente";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesClienteCliente^ f = gcnew OpcionesClienteCliente();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesCliente2->Controls->Clear();
		opcionesCliente2->Controls->Add(f);

		f->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesClienteMascota^ f = gcnew OpcionesClienteMascota();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesCliente2->Controls->Clear();
		opcionesCliente2->Controls->Add(f);

		f->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesClienteVisita^ f = gcnew OpcionesClienteVisita();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesCliente2->Controls->Clear();
		opcionesCliente2->Controls->Add(f);

		f->Show();
	}
};
}
