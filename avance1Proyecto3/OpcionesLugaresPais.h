#pragma once

#include "AgregarPais.h"
#include "ConsultarPais.h"
#include "ModificarPais.h"
#include "EliminarPais.h"
#include "AgregarPais.h"
#include "Tienda.h"
namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OpcionesLugaresPais
	/// </summary>
	public ref class OpcionesLugaresPais : public System::Windows::Forms::Form
	{
	public:
		OpcionesLugaresPais(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Tienda* tienda;
		OpcionesLugaresPais(Tienda* tienda)
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
		~OpcionesLugaresPais()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 99);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 23);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Eliminación";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &OpcionesLugaresPais::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Modificación";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &OpcionesLugaresPais::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Busqueda";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OpcionesLugaresPais::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Inserción";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OpcionesLugaresPais::button1_Click);
			// 
			// OpcionesLugaresPais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(135, 138);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OpcionesLugaresPais";
			this->Text = L"OpcionesLugaresPais";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarPais^ f = gcnew AgregarPais(this->tienda);
		f->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarPais^ f = gcnew ConsultarPais();
		f->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarPais^ f = gcnew ModificarPais();
		f->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		EliminarPais^ f = gcnew EliminarPais();
		f->Show();
	}
};
}
