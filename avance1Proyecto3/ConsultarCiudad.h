#pragma once
//#include "Tienda.h"
#include <string>

namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultarCiudad
	/// </summary>
	public ref class ConsultarCiudad : public System::Windows::Forms::Form
	{
	public:
		ConsultarCiudad(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Tienda* tienda;

		ConsultarCiudad(Tienda* tienda)
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
		~ConsultarCiudad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ visor;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->visor = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 42);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(303, 22);
			this->textBox3->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Código del País:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(386, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultarCiudad::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(303, 22);
			this->textBox1->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 30);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Consultar Ciudad";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Código de la Ciudad:";
			// 
			// visor
			// 
			this->visor->Location = System::Drawing::Point(12, 166);
			this->visor->Multiline = true;
			this->visor->Name = L"visor";
			this->visor->Size = System::Drawing::Size(449, 60);
			this->visor->TabIndex = 22;
			// 
			// ConsultarCiudad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 247);
			this->Controls->Add(this->visor);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultarCiudad";
			this->Text = L"ConsultarCiudad";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ obtenerCodPais = this->textBox1->Text;
		string ObtenerCodPais;
		MarshalString(obtenerCodPais, ObtenerCodPais);

		int cod = atoi(ObtenerCodPais.c_str());

		NodoBB* nuevoNodo = new NodoBB(cod, msclr::interop::marshal_as<string>(this->textBox1->Text));
		this->visor->Text = gcnew String((this->tienda->paises->buscarCiudad(cod))->nombre.c_str());
	}
		   void MarshalString(String^ s, string& os) {
			   using namespace Runtime::InteropServices;
			   const char* chars =
				   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			   os = chars;
			   Marshal::FreeHGlobal(IntPtr((void*)chars));
		   }
};
}
