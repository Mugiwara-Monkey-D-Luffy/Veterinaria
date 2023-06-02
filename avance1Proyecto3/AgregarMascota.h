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
	/// Resumen de AgregarMascota
	/// </summary>
	public ref class AgregarMascota : public System::Windows::Forms::Form
	{
	public:
		AgregarMascota(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::TextBox^ textBox11;
	public:
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label18;

		Tienda* tienda;

		AgregarMascota(Tienda* tienda)
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
		~AgregarMascota()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox7;
	protected:
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;

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
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(191, 421);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(192, 22);
			this->textBox7->TabIndex = 55;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 427);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 16);
			this->label8->TabIndex = 54;
			this->label8->Text = L"Color:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(191, 457);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(192, 22);
			this->textBox9->TabIndex = 52;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 497);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 16);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Fecha de la última visita:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(28, 460);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 16);
			this->label10->TabIndex = 50;
			this->label10->Text = L"Castrado:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(191, 63);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 22);
			this->textBox4->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 16);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Número de Cliente:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(191, 175);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(192, 22);
			this->textBox5->TabIndex = 47;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(191, 138);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(192, 22);
			this->textBox6->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 16);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Tipo de Mascota:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 16);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Nombre:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(191, 215);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 22);
			this->textBox3->TabIndex = 43;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 16);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Raza:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(308, 626);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Cargar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AgregarMascota::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(191, 383);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 22);
			this->textBox2->TabIndex = 40;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(191, 288);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 22);
			this->textBox1->TabIndex = 39;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 30);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Una nueva Mascota";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 386);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Sexo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 254);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 16);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Fecha de Nacimiento:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(191, 104);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(192, 22);
			this->textBox10->TabIndex = 57;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(28, 107);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 16);
			this->label11->TabIndex = 56;
			this->label11->Text = L"Identificación del Animal:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(191, 316);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(192, 22);
			this->textBox11->TabIndex = 58;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(191, 344);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(192, 22);
			this->textBox12->TabIndex = 59;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 294);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 16);
			this->label12->TabIndex = 60;
			this->label12->Text = L"Día:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(28, 322);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 16);
			this->label13->TabIndex = 61;
			this->label13->Text = L"Mes:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(28, 344);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 16);
			this->label14->TabIndex = 62;
			this->label14->Text = L"Año:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(28, 588);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 16);
			this->label15->TabIndex = 68;
			this->label15->Text = L"Año:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(28, 566);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 16);
			this->label16->TabIndex = 67;
			this->label16->Text = L"Mes:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(28, 538);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(31, 16);
			this->label17->TabIndex = 66;
			this->label17->Text = L"Día:";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(191, 588);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(192, 22);
			this->textBox13->TabIndex = 65;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(191, 560);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(192, 22);
			this->textBox14->TabIndex = 64;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(191, 532);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(192, 22);
			this->textBox15->TabIndex = 63;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(28, 421);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(42, 16);
			this->label18->TabIndex = 69;
			this->label18->Text = L"Color:";
			// 
			// AgregarMascota
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 679);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox7);
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
			this->Name = L"AgregarMascota";
			this->Text = L"AgregarMascota";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//numero del cliente
		String^ obtenerNumCliente = this->textBox4->Text;
		string ObtenerNumCliente;
		MarshalString(obtenerNumCliente, ObtenerNumCliente);
		int cod1 = atoi(ObtenerNumCliente.c_str());

		//id animal
		String^ obtenerIdAnimal = this->textBox10->Text;
		string ObtenerIdAnimal;
		MarshalString(obtenerIdAnimal, ObtenerIdAnimal);
		int cod2 = atoi(ObtenerIdAnimal.c_str());

		//nombre
		String^ obtenerNombre = this->textBox6->Text;
		string ObtenerNombre;

		//tipo mascota
		String^ obtenerTipoMascota = this->textBox5->Text;
		string ObtenerTipoMascota;

		//raza
		String^ obtenerRaza = this->textBox3->Text;
		string ObtenerRaza;

		//dia de nacimiento
		String^ obtenerDiaNacimiento = this->textBox1->Text;
		string ObtenerDiaNacimiento;
		MarshalString(obtenerDiaNacimiento, ObtenerDiaNacimiento);
		int cod3 = atoi(ObtenerDiaNacimiento.c_str());

		//mes de nacimiento
		String^ obtenerMesNacimiento = this->textBox11->Text;
		string ObtenerMesNacimiento;
		MarshalString(obtenerMesNacimiento, ObtenerMesNacimiento);
		int cod4 = atoi(ObtenerMesNacimiento.c_str());

		//año de nacimiento
		String^ obtenerAnioNacimiento = this->textBox12->Text;
		string ObtenerAnioNacimiento;
		MarshalString(obtenerAnioNacimiento, ObtenerAnioNacimiento);
		int cod5 = atoi(ObtenerAnioNacimiento.c_str());
		
		//sexo
		String^ obtenerSexo = this->textBox2->Text;
		string ObtenerSexo;

		//color
		String^ obtenerColor = this->textBox7->Text;
		string ObtenerColor;

		//castrado
		String^ obtenerCastrado = this->textBox9->Text;
		string ObtenerCastrado;

		//dia de utl visita
		String^ obtenerDiaUltVisita = this->textBox15->Text;
		string ObtenerDiaUltVisita;
		MarshalString(obtenerDiaUltVisita, ObtenerDiaUltVisita);
		int cod6 = atoi(ObtenerDiaUltVisita.c_str());

		//mes de utl visita
		String^ obtenerMesUltVisita = this->textBox14->Text;
		string ObtenerMesUltVisita;
		MarshalString(obtenerMesUltVisita, ObtenerMesUltVisita);
		int cod7 = atoi(ObtenerMesUltVisita.c_str());

		//año de utl visita
		String^ obtenerAnioUltVisita = this->textBox13->Text;
		string ObtenerAnioUltVisita;
		MarshalString(obtenerAnioUltVisita, ObtenerAnioUltVisita);
		int cod8 = atoi(ObtenerAnioUltVisita.c_str());

		NodoAVL* nuevoNodo = new NodoAVL();
		nuevoNodo->numCliente = cod1;
		nuevoNodo->idAnimal = cod3;
		nuevoNodo->nombre = ObtenerNombre;
		nuevoNodo->tipoMascota = ObtenerTipoMascota;
		nuevoNodo->raza = ObtenerRaza;
		nuevoNodo->diaNacimiento = cod3;
		nuevoNodo->mesNacimiento = cod4;
		nuevoNodo->anioNacimiento = cod5;
		nuevoNodo->sexo = ObtenerSexo;
		nuevoNodo->color = ObtenerColor;
		nuevoNodo->castrado = ObtenerCastrado;
		nuevoNodo->diaVisita = cod6;
		nuevoNodo->mesVisita = cod7;
		nuevoNodo->anioVisita = cod8;

		this->tienda->mascotas->insertarMascota(nuevoNodo);

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
