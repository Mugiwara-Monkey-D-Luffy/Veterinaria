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
	/// Resumen de ModificarTratamiento
	/// </summary>
	public ref class ModificarTratamiento : public System::Windows::Forms::Form
	{
	public:
		ModificarTratamiento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Tienda* tienda;

		ModificarTratamiento(Tienda* tienda)
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
		~ModificarTratamiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;

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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 16);
			this->label9->TabIndex = 100;
			this->label9->Text = L"Nuevo precio unitario:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(177, 50);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 22);
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
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(177, 91);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(192, 22);
			this->textBox6->TabIndex = 96;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(294, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 94;
			this->button1->Text = L"Modificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarTratamiento::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 30);
			this->label3->TabIndex = 93;
			this->label3->Text = L"Modificar Tratamiento";
			// 
			// ModificarTratamiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(395, 188);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Name = L"ModificarTratamiento";
			this->Text = L"ModificarTratamiento";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//codigo
		String^ obtenerCodigo = this->textBox4->Text;
		string ObtenerCodigo;
		MarshalString(obtenerCodigo, ObtenerCodigo);
		int cod1 = atoi(ObtenerCodigo.c_str());

		//precio
		String^ obtenerPrecio = this->textBox6->Text;
		string ObtenerPrecio;
		MarshalString(obtenerPrecio, ObtenerPrecio);
		int cod2 = atoi(ObtenerPrecio.c_str());


		NodoRN* nuevoNodo = new NodoRN();
		this->tienda->tratamientos->buscarTratamiento(cod1)->precioUnitario = cod2;

		MessageBox::Show("Se a modificado el tratamiento correctamente");
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
