#pragma once

#include "OpcionesClinicaTratamiento.h"
#include "OpcionesClinicaMedicacion.h"

namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OpcionesClinica
	/// </summary>
	public ref class OpcionesClinica : public System::Windows::Forms::Form
	{
	public:
		OpcionesClinica(void)
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
		~OpcionesClinica()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ opcionesClinica2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OpcionesClinica::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->opcionesClinica2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(12, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 59);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Tratamientos";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OpcionesClinica::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(12, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Medicamentos";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OpcionesClinica::button2_Click);
			// 
			// opcionesClinica2
			// 
			this->opcionesClinica2->Location = System::Drawing::Point(152, 16);
			this->opcionesClinica2->Name = L"opcionesClinica2";
			this->opcionesClinica2->Size = System::Drawing::Size(200, 150);
			this->opcionesClinica2->TabIndex = 2;
			// 
			// OpcionesClinica
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 178);
			this->Controls->Add(this->opcionesClinica2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OpcionesClinica";
			this->Text = L"OpcionesClinica";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesClinicaTratamiento^ f = gcnew OpcionesClinicaTratamiento();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesClinica2->Controls->Clear();
		opcionesClinica2->Controls->Add(f);

		f->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesClinicaMedicacion^ f = gcnew OpcionesClinicaMedicacion();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesClinica2->Controls->Clear();
		opcionesClinica2->Controls->Add(f);

		f->Show();
	}
};
}
