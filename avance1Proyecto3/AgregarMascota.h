#pragma once

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
	private: System::Windows::Forms::TextBox^ textBox8;
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
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
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
			this->SuspendLayout();
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(191, 326);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(192, 22);
			this->textBox7->TabIndex = 55;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 332);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 16);
			this->label8->TabIndex = 54;
			this->label8->Text = L"Color:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(191, 399);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(192, 22);
			this->textBox8->TabIndex = 53;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(191, 362);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(192, 22);
			this->textBox9->TabIndex = 52;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 402);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 16);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Fecha de la última visita:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(28, 365);
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
			this->button1->Location = System::Drawing::Point(308, 441);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Cargar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(191, 288);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 22);
			this->textBox2->TabIndex = 40;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(191, 251);
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
			this->label2->Location = System::Drawing::Point(28, 291);
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
			// AgregarMascota
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 489);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
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
			this->Name = L"AgregarMascota";
			this->Text = L"AgregarMascota";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
