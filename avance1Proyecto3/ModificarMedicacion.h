#pragma once

namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModificarMedicacion
	/// </summary>
	public ref class ModificarMedicacion : public System::Windows::Forms::Form
	{
	public:
		ModificarMedicacion(void)
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
		~ModificarMedicacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(255, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 24);
			this->button2->TabIndex = 104;
			this->button2->Text = L"Modificar Medicamento";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(234, 54);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(192, 22);
			this->textBox10->TabIndex = 103;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 57);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 16);
			this->label11->TabIndex = 102;
			this->label11->Text = L"Identificación del Animal:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(146, 16);
			this->label9->TabIndex = 101;
			this->label9->Text = L"Código de Medicación:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(234, 125);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(192, 22);
			this->textBox5->TabIndex = 100;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(234, 88);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(192, 22);
			this->textBox6->TabIndex = 99;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 16);
			this->label6->TabIndex = 98;
			this->label6->Text = L"Nueva cantidad del medicamento:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(234, 159);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 22);
			this->textBox3->TabIndex = 97;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 16);
			this->label4->TabIndex = 96;
			this->label4->Text = L"Nuevo precio unitario:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(351, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 95;
			this->button1->Text = L"Modificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarMedicacion::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 30);
			this->label3->TabIndex = 94;
			this->label3->Text = L"Modificar Medicación";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(234, 195);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 22);
			this->textBox1->TabIndex = 106;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 195);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 16);
			this->label1->TabIndex = 105;
			this->label1->Text = L"Nuevo precio total:";
			// 
			// ModificarMedicacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(456, 333);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Name = L"ModificarMedicacion";
			this->Text = L"ModificarMedicacion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
