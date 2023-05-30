#pragma once

#include "OpcionesLugaresPais.h"
#include "OpcionesLugaresCiudad.h"
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
	/// Resumen de OpcionesLugares
	/// </summary>
	public ref class OpcionesLugares : public System::Windows::Forms::Form
	{
	public:
		OpcionesLugares(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Tienda* tienda;
		OpcionesLugares(Tienda* tienda)
		{
			this->tienda = tienda;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~OpcionesLugares()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ opcionesLugares2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OpcionesLugares::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->opcionesLugares2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button1->Location = System::Drawing::Point(12, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Países";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OpcionesLugares::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(12, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ciudades";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OpcionesLugares::button2_Click);
			// 
			// opcionesLugares2
			// 
			this->opcionesLugares2->Location = System::Drawing::Point(158, 12);
			this->opcionesLugares2->Name = L"opcionesLugares2";
			this->opcionesLugares2->Size = System::Drawing::Size(183, 142);
			this->opcionesLugares2->TabIndex = 2;
			// 
			// OpcionesLugares
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 166);
			this->Controls->Add(this->opcionesLugares2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OpcionesLugares";
			this->Text = L"OpcionesLugares";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesLugaresPais^ f = gcnew OpcionesLugaresPais(this->tienda);
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesLugares2->Controls->Clear();
		opcionesLugares2->Controls->Add(f);

		f->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesLugaresCiudad^ f = gcnew OpcionesLugaresCiudad();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesLugares2->Controls->Clear();
		opcionesLugares2->Controls->Add(f);

		f->Show();
	}
};
}
