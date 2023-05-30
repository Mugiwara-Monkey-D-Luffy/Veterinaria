#pragma once

#include "OpcionesSucursalDijkstra.h"
#include "OpcionesSucursalPrim.h"
#include "OpcionesSucursalKruskal.h"
#include "OpcionesSucursalPuntosArt.h"
#include "OpcionesSucursalGrado.h"
#include "OpcionesSucursalCamino.h"

namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OpcionesSucursal
	/// </summary>
	public ref class OpcionesSucursal : public System::Windows::Forms::Form
	{
	public:
		OpcionesSucursal(void)
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
		~OpcionesSucursal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ opcionesSucursal2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->opcionesSucursal2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dijkstra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OpcionesSucursal::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Prim";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OpcionesSucursal::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Kruskal";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &OpcionesSucursal::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 99);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Puntos Art";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &OpcionesSucursal::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 128);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Grado";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &OpcionesSucursal::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 157);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Camino";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &OpcionesSucursal::button6_Click);
			// 
			// opcionesSucursal2
			// 
			this->opcionesSucursal2->Location = System::Drawing::Point(107, 12);
			this->opcionesSucursal2->Name = L"opcionesSucursal2";
			this->opcionesSucursal2->Size = System::Drawing::Size(186, 164);
			this->opcionesSucursal2->TabIndex = 6;
			// 
			// OpcionesSucursal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(302, 188);
			this->Controls->Add(this->opcionesSucursal2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OpcionesSucursal";
			this->Text = L"OpcionesSucursal";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesSucursalDijkstra^ f = gcnew OpcionesSucursalDijkstra();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesSucursal2->Controls->Clear();
		opcionesSucursal2->Controls->Add(f);

		f->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesSucursalPrim^ f = gcnew OpcionesSucursalPrim();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesSucursal2->Controls->Clear();
		opcionesSucursal2->Controls->Add(f);

		f->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesSucursalKruskal^ f = gcnew OpcionesSucursalKruskal();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesSucursal2->Controls->Clear();
		opcionesSucursal2->Controls->Add(f);

		f->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesSucursalPuntosArt^ f = gcnew OpcionesSucursalPuntosArt();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesSucursal2->Controls->Clear();
		opcionesSucursal2->Controls->Add(f);

		f->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesSucursalGrado^ f = gcnew OpcionesSucursalGrado();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesSucursal2->Controls->Clear();
		opcionesSucursal2->Controls->Add(f);

		f->Show();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		OpcionesSucursalCamino^ f = gcnew OpcionesSucursalCamino();
		f->TopLevel = false;
		f->Dock = DockStyle::Fill;

		opcionesSucursal2->Controls->Clear();
		opcionesSucursal2->Controls->Add(f);

		f->Show();
	}
};
}
