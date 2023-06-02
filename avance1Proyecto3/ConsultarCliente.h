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
	/// Resumen de ConsultarCliente
	/// </summary>
	public ref class ConsultarCliente : public System::Windows::Forms::Form
	{
	public:
		ConsultarCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ visor1;
	public:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ visor3;


		Tienda* tienda;

		ConsultarCliente(Tienda* tienda)
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
		~ConsultarCliente()
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

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ visor2;


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

			this->label3 = (gcnew System::Windows::Forms::Label());

			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->visor2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->visor1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->visor3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(175, 47);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(286, 22);
			this->textBox3->TabIndex = 43;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Código del País:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(386, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultarCliente::button1_Click);
			
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 30);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Consultar Cliente";
		
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 16);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Número de Cliente:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(175, 90);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(286, 22);
			this->textBox4->TabIndex = 49;
			// 
			// visor2
			// 
			this->visor2->Location = System::Drawing::Point(175, 214);
			this->visor2->Multiline = true;
			this->visor2->Name = L"visor2";
			this->visor2->Size = System::Drawing::Size(286, 21);
			this->visor2->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Cliente:";
			// 
			// visor1
			// 
			this->visor1->Location = System::Drawing::Point(175, 174);
			this->visor1->Name = L"visor1";
			this->visor1->Size = System::Drawing::Size(286, 22);
			this->visor1->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Dirección:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 16);
			this->label6->TabIndex = 53;
			this->label6->Text = L"Telefono:";
			// 
			// visor3
			// 
			this->visor3->Location = System::Drawing::Point(175, 252);
			this->visor3->Multiline = true;
			this->visor3->Name = L"visor3";
			this->visor3->Size = System::Drawing::Size(286, 21);
			this->visor3->TabIndex = 52;
			// 
			// ConsultarCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 300);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->visor3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->visor2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->visor1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultarCliente";
			this->Text = L"ConsultarCliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ obtenerCodPais = this->textBox4->Text;
		string ObtenerCodPais;
		MarshalString(obtenerCodPais, ObtenerCodPais);

		int cod = atoi(ObtenerCodPais.c_str());

		Cliente* nuevoNodo = new Cliente();

		if (this->tienda->clientes->buscarCliente(cod) == NULL) {
			MessageBox::Show("Este cliente no exciste");
		}
		else {
			this->visor1->Text = gcnew String((this->tienda->clientes->buscarCliente(cod))->nombre.c_str());
			this->visor2->Text = gcnew String((this->tienda->clientes->buscarCliente(cod))->direccion.c_str());
			std::string telefono = std::to_string(nuevoNodo->telefono);
			this->visor3->Text = gcnew String(telefono.c_str());
		}
		
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
