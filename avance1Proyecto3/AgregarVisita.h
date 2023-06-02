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
	/// Resumen de AgregarVisita
	/// </summary>
	public ref class AgregarVisita : public System::Windows::Forms::Form
	{
	public:
		AgregarVisita(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::Label^ label15;
	public:
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;

		Tienda* tienda;

		AgregarVisita(Tienda* tienda)
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
		~AgregarVisita()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox10;
	protected:
	private: System::Windows::Forms::Label^ label11;




	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label6;

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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());

			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(189, 100);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(192, 22);
			this->textBox10->TabIndex = 79;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 103);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 16);
			this->label11->TabIndex = 78;
			this->label11->Text = L"Identificación del Animal:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(27, 140);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 16);
			this->label9->TabIndex = 73;
			this->label9->Text = L"Fecha de la última visita:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(189, 59);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 22);
			this->textBox4->TabIndex = 71;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 16);
			this->label5->TabIndex = 70;
			this->label5->Text = L"Código de la Visita:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(189, 255);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(192, 22);
			this->textBox5->TabIndex = 69;
			
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 16);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Total de la factura:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(189, 295);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 22);
			this->textBox3->TabIndex = 65;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 301);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 16);
			this->label4->TabIndex = 64;
			this->label4->Text = L"Forma de pago:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(306, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 63;
			this->button1->Text = L"Cargar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AgregarVisita::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 30);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Una nueva Visita";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 331);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 16);
			this->label1->TabIndex = 58;
			this->label1->Text = L"(Digite 1 para contado, 2 para crédito)";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(26, 218);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 16);
			this->label15->TabIndex = 112;
			this->label15->Text = L"Año:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(26, 196);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 16);
			this->label16->TabIndex = 111;
			this->label16->Text = L"Mes:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(26, 168);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(31, 16);
			this->label17->TabIndex = 110;
			this->label17->Text = L"Día:";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(189, 218);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(192, 22);
			this->textBox13->TabIndex = 109;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(189, 190);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(192, 22);
			this->textBox14->TabIndex = 108;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(189, 162);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(192, 22);
			this->textBox15->TabIndex = 107;
			// 
			// AgregarVisita
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(408, 414);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);

			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"AgregarVisita";
			this->Text = L"AgregarVisita";
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

		//dia de utl visita
		String^ obtenerDiaUltVisita = this->textBox15->Text;
		string ObtenerDiaUltVisita;
		MarshalString(obtenerDiaUltVisita, ObtenerDiaUltVisita);
		int cod3 = atoi(ObtenerDiaUltVisita.c_str());

		//mes de utl visita
		String^ obtenerMesUltVisita = this->textBox14->Text;
		string ObtenerMesUltVisita;
		MarshalString(obtenerMesUltVisita, ObtenerMesUltVisita);
		int cod4 = atoi(ObtenerMesUltVisita.c_str());

		//año de utl visita
		String^ obtenerAnioUltVisita = this->textBox13->Text;
		string ObtenerAnioUltVisita;
		MarshalString(obtenerAnioUltVisita, ObtenerAnioUltVisita);
		int cod5 = atoi(ObtenerAnioUltVisita.c_str());

		//total
		String^ obtenerTotal = this->textBox5->Text;
		string ObtenerTotal;
		MarshalString(obtenerTotal, ObtenerTotal);
		int cod6 = atoi(ObtenerTotal.c_str());

		//forma de pago
		String^ obtenerFormaPago = this->textBox3->Text;
		string ObtenerFormaPago;
		MarshalString(obtenerFormaPago, ObtenerFormaPago);
		int cod7 = atoi(ObtenerFormaPago.c_str());
		
		NodoBB* nuevoNodo = new NodoBB();
		nuevoNodo->codVisita = cod1;
		nuevoNodo->idAnimal = cod2;
		nuevoNodo->dia = cod3;
		nuevoNodo->mes = cod4;
		nuevoNodo->anio = cod5;
		nuevoNodo->totalFactura = cod6;
		nuevoNodo->formatoPago = cod7;

		this->tienda->visitas->insertarVisita(nuevoNodo);

		MessageBox::Show("Se a agregado la visita correctamente");
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
