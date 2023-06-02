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
	/// Resumen de AgregarCliente
	/// </summary>
	public ref class AgregarCliente : public System::Windows::Forms::Form
	{
	public:
		AgregarCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::Label^ label8;
	public:
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

	public:



		Tienda* tienda = new Tienda();

		AgregarCliente(Tienda* tienda)
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
		~AgregarCliente()
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
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());

			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());

			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());

			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(191, 175);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 22);
			this->textBox3->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Código del País:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(308, 472);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Cargar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AgregarCliente::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(191, 213);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 22);
			this->textBox2->TabIndex = 18;
			
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 30);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Un nuevo Cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 216);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Teléfono:";
			 
			this->textBox4->Location = System::Drawing::Point(191, 62);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 22);
			this->textBox4->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Número de Cliente:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(191, 135);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(192, 22);
			this->textBox5->TabIndex = 25;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(191, 98);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(192, 22);
			this->textBox6->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 16);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Dirección:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 101);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 16);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Nombre:";
			
			this->textBox8->Location = System::Drawing::Point(191, 428);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(192, 22);
			this->textBox8->TabIndex = 32;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(191, 391);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(192, 22);
			this->textBox9->TabIndex = 31;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 431);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 16);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Saldo:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(28, 394);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 16);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Descuento:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 257);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 16);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Fecha de la última visita:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 315);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 16);
			this->label12->TabIndex = 38;
			this->label12->Text = L"Mes";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(28, 287);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 16);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Dia";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(191, 309);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(192, 22);
			this->textBox10->TabIndex = 36;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(191, 281);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(192, 22);
			this->textBox7->TabIndex = 35;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 340);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Año:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(191, 337);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 22);
			this->textBox1->TabIndex = 17;
			// 
			// AgregarCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 549);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AgregarCliente";
			this->Text = L"AgregarCliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ obtenerNumCliente = this->textBox4->Text;
		string ObtenerNumCliente;
		MarshalString(obtenerNumCliente, ObtenerNumCliente);
		int cod1 = atoi(ObtenerNumCliente.c_str());

		String^ obtenerNombreCliente = this->textBox6->Text;
		string ObtenerNombreCliente;

		String^ obtenerDireccionCliente = this->textBox5->Text;
		string ObtenerDireccionCliente;

		String^ obtenerCodPais = this->textBox3->Text;
		string ObtenerCodPais;
		MarshalString(obtenerCodPais, ObtenerCodPais);
		int cod2 = atoi(ObtenerCodPais.c_str());

		String^ obtenerTelefonoCliente = this->textBox2->Text;
		string ObtenerTelefonoCliente;
		MarshalString(obtenerTelefonoCliente, ObtenerTelefonoCliente);
		int cod4 = atoi(ObtenerTelefonoCliente.c_str());

		String^ obtenerUtlVisitaClienteDia = this->textBox7->Text;
		string ObtenerUtlVisitaClienteDia;
		MarshalString(obtenerUtlVisitaClienteDia, ObtenerUtlVisitaClienteDia);
		int cod5 = atoi(ObtenerUtlVisitaClienteDia.c_str());

		String^ obtenerUtlVisitaClienteMes = this->textBox10->Text;
		string ObtenerUtlVisitaClienteMes;
		MarshalString(obtenerUtlVisitaClienteMes, ObtenerUtlVisitaClienteMes);
		int cod6 = atoi(ObtenerUtlVisitaClienteMes.c_str());

		String^ obtenerNombreCiudad = this->textBox1->Text;
		string ObtenerNombreCiudad;
		MarshalString(obtenerNombreCiudad, ObtenerNombreCiudad);
		int cod3 = atoi(ObtenerCodPais.c_str());

		String^ obtenerDescuento = this->textBox9->Text;
		string ObtenerDescuento;
		MarshalString(obtenerDescuento, ObtenerDescuento);
		int cod7 = atoi(ObtenerDescuento.c_str());

		String^ obtenerSaldo = this->textBox8->Text;
		string ObtenerSaldo;
		MarshalString(obtenerSaldo, ObtenerSaldo);
		int cod8 = atoi(ObtenerSaldo.c_str());

		Cliente* nuevoNodo = new Cliente();
		nuevoNodo->numCliente = cod1;
		nuevoNodo->nombre = ObtenerNombreCliente;
		nuevoNodo->direccion = ObtenerDireccionCliente;
		nuevoNodo->codPais = cod2;
		nuevoNodo->telefono = cod4;
		nuevoNodo->dia = cod5;
		nuevoNodo->mes = cod6;
		nuevoNodo->anio = cod3;
		nuevoNodo->descuento = cod7;
		nuevoNodo->saldo = cod8;

		

		//nuevoNodo->
		
		this->tienda->clientes->insertarCliente(nuevoNodo);

		MessageBox::Show("Se a agregado el cliente correctamente");
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
