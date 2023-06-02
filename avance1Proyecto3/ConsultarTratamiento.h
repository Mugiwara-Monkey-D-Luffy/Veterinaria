#pragma once
#include <string>
#include "Tienda.h"

namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultarTratamiento
	/// </summary>
	public ref class ConsultarTratamiento : public System::Windows::Forms::Form
	{
	public:
		ConsultarTratamiento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Tienda* tienda;

		ConsultarTratamiento(Tienda* tienda)
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
		~ConsultarTratamiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->visor = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(177, 50);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(289, 22);
			this->textBox4->TabIndex = 99;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 16);
			this->label5->TabIndex = 98;
			this->label5->Text = L"Código del Tratamiento:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(391, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 94;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultarTratamiento::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 30);
			this->label3->TabIndex = 93;
			this->label3->Text = L"Consultar Tratamiento";
			// 
			// visor
			// 
			this->visor->Location = System::Drawing::Point(17, 142);
			this->visor->Multiline = true;
			this->visor->Name = L"visor";
			this->visor->Size = System::Drawing::Size(449, 60);
			this->visor->TabIndex = 100;
			// 
			// ConsultarTratamiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 230);
			this->Controls->Add(this->visor);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Name = L"ConsultarTratamiento";
			this->Text = L"ConsultarTratamiento";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ obtenerCodPais = this->textBox4->Text;
		string ObtenerCodPais;
		MarshalString(obtenerCodPais, ObtenerCodPais);

		int cod = atoi(ObtenerCodPais.c_str());

		ArbolRN* nuevoNodo = new ArbolRN();
		this->visor->Text = gcnew String((this->tienda->tratamientos->buscarTratamiento(cod))->nombre.c_str());
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
