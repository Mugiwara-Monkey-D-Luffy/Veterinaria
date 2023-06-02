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
	/// Resumen de AgregarMedicacion
	/// </summary>
	public ref class AgregarMedicacion : public System::Windows::Forms::Form
	{
	public:
		AgregarMedicacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;

		Tienda* tienda;

		AgregarMedicacion(Tienda* tienda)
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
		~AgregarMedicacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox10;
	protected:
	private: System::Windows::Forms::Label^ label11;



	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;

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

			this->label6 = (gcnew System::Windows::Forms::Label());

			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(190, 68);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(192, 22);
			this->textBox10->TabIndex = 92;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(27, 71);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 16);
			this->label11->TabIndex = 91;
			this->label11->Text = L"Identificación del Animal:";
		
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 16);
			this->label6->TabIndex = 85;
			this->label6->Text = L"Lista de medicamentos:";
	
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 394);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 16);
			this->label4->TabIndex = 83;
			this->label4->Text = L"Cantidad:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(307, 567);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 82;
			this->button1->Text = L"Cargar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AgregarMedicacion::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 30);
			this->label3->TabIndex = 81;
			this->label3->Text = L"Una nueva Medicación";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(212, 474);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 24);
			this->button2->TabIndex = 93;
			this->button2->Text = L"Cargar Medicamento";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(191, 310);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 22);
			this->textBox1->TabIndex = 94;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(191, 349);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 22);
			this->textBox2->TabIndex = 95;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(191, 388);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 22);
			this->textBox4->TabIndex = 96;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 355);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 16);
			this->label1->TabIndex = 97;
			this->label1->Text = L"Precio unitario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 316);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 16);
			this->label2->TabIndex = 97;
			this->label2->Text = L"Código de tratamiento:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(28, 195);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 16);
			this->label15->TabIndex = 105;
			this->label15->Text = L"Año:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(28, 173);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 16);
			this->label16->TabIndex = 104;
			this->label16->Text = L"Mes:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(28, 145);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(31, 16);
			this->label17->TabIndex = 103;
			this->label17->Text = L"Día:";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(191, 195);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(192, 22);
			this->textBox13->TabIndex = 102;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(191, 167);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(192, 22);
			this->textBox14->TabIndex = 101;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(191, 139);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(192, 22);
			this->textBox15->TabIndex = 100;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 16);
			this->label7->TabIndex = 99;
			this->label7->Text = L"Fecha de la última visita:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(29, 523);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 16);
			this->label8->TabIndex = 106;
			this->label8->Text = L"Cantidad recetada:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 432);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 16);
			this->label10->TabIndex = 107;
			this->label10->Text = L"Costo total:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(190, 429);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(192, 22);
			this->textBox6->TabIndex = 108;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(190, 517);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(192, 22);
			this->textBox7->TabIndex = 109;
			// 
			// AgregarMedicacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 623);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);

			this->Controls->Add(this->label6);

			this->Controls->Add(this->label4);

			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Name = L"AgregarMedicacion";
			this->Text = L"AgregarMedicacion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//id animal
		String^ obtenerIdAnimal = this->textBox10->Text;
		string ObtenerIdAnimal;
		MarshalString(obtenerIdAnimal, ObtenerIdAnimal);
		int cod1 = atoi(ObtenerIdAnimal.c_str());

		//dia de utl visita
		String^ obtenerDiaUltVisita = this->textBox15->Text;
		string ObtenerDiaUltVisita;
		MarshalString(obtenerDiaUltVisita, ObtenerDiaUltVisita);
		int cod2 = atoi(ObtenerDiaUltVisita.c_str());

		//mes de utl visita
		String^ obtenerMesUltVisita = this->textBox14->Text;
		string ObtenerMesUltVisita;
		MarshalString(obtenerMesUltVisita, ObtenerMesUltVisita);
		int cod3 = atoi(ObtenerMesUltVisita.c_str());

		//año de utl visita
		String^ obtenerAnioUltVisita = this->textBox13->Text;
		string ObtenerAnioUltVisita;
		MarshalString(obtenerAnioUltVisita, ObtenerAnioUltVisita);
		int cod4 = atoi(ObtenerAnioUltVisita.c_str());

		//codigo medicamento
		String^ obtenerCodMedicacion = this->textBox1->Text;
		string ObtenerCodMedicacion;
		MarshalString(obtenerCodMedicacion, ObtenerCodMedicacion);
		int cod5 = atoi(ObtenerCodMedicacion.c_str());

		

		//precio
		String^ obtenerPrecio = this->textBox2->Text;
		string ObtenerPrecio;
		MarshalString(obtenerPrecio, ObtenerPrecio);
		int cod7 = atoi(ObtenerPrecio.c_str());

		//cantidad
		String^ obtenerCantidad = this->textBox4->Text;
		string ObtenerCantidad;
		MarshalString(obtenerCantidad, ObtenerCantidad);
		int cod8 = atoi(ObtenerCantidad.c_str());

		//total cantidad
		String^ obtenerTotal = this->textBox6->Text;
		string ObtenerTotal;
		MarshalString(obtenerTotal, ObtenerTotal);
		int cod9 = atoi(ObtenerTotal.c_str());


		NodoAA* nuevoNodo = new NodoAA();
		nuevoNodo->idAnimal = cod1;
		nuevoNodo->dia = cod2;
		/*nuevoNodo->mesVisita = cod3;
		nuevoNodo->anioVisita = cod4;*/
		nuevoNodo->codMedicacion = cod5;
		/*nuevoNodo->nombre = cod6;*/
		nuevoNodo->costoUnitario = cod7;
		nuevoNodo->cantidad = cod8;
		nuevoNodo->costoTotal = cod9;


		this->tienda->medicacion->insertarMedicacion(nuevoNodo);

		MessageBox::Show("Se a agregado la mascota correctamente");
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
