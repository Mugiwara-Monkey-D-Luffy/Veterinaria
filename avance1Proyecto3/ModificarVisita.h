#pragma once
#include "Tienda.h"

namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModificarVisita
	/// </summary>
	public ref class ModificarVisita : public System::Windows::Forms::Form
	{
	public:
		ModificarVisita(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Tienda* tienda;

		ModificarVisita(Tienda* tienda)
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
		~ModificarVisita()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox10;
	protected:
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(177, 91);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(192, 22);
			this->textBox10->TabIndex = 92;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(14, 94);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 16);
			this->label11->TabIndex = 91;
			this->label11->Text = L"Identificación del Animal:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(177, 50);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 22);
			this->textBox4->TabIndex = 89;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 16);
			this->label5->TabIndex = 88;
			this->label5->Text = L"Código de la Visita:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(177, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 22);
			this->textBox3->TabIndex = 84;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 16);
			this->label4->TabIndex = 83;
			this->label4->Text = L"Nueva forma de pago:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(294, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 82;
			this->button1->Text = L"Modificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarVisita::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 30);
			this->label3->TabIndex = 81;
			this->label3->Text = L"Modificar Visita";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 16);
			this->label1->TabIndex = 80;
			this->label1->Text = L"(Digite 1 para contado, 2 para crédito)";
			// 
			// ModificarVisita
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 245);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarVisita";
			this->Text = L"ModificarVisita";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//cod visita
		String^ obtenerCodVisita = this->textBox4->Text;
		string ObtenerCodVisita;
		MarshalString(obtenerCodVisita, ObtenerCodVisita);
		int cod1 = atoi(ObtenerCodVisita.c_str());

		//id animal
		String^ obtenerIdAnimal = this->textBox10->Text;
		string ObtenerIdAnimal;
		MarshalString(obtenerIdAnimal, ObtenerIdAnimal);
		int cod2 = atoi(ObtenerIdAnimal.c_str());

		//forma de pago
		String^ obtenerFormaPago = this->textBox3->Text;
		string ObtenerFormaPago;
		MarshalString(obtenerFormaPago, ObtenerFormaPago);
		int cod7 = atoi(ObtenerFormaPago.c_str());

		NodoBB* nuevoNodo = new NodoBB();
		this->tienda->visitas->buscarVisita(cod1)->formatoPago = cod7;

		MessageBox::Show("Se a modificado la visita correctamente");
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
