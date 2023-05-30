#pragma once

namespace avance1Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OpcionesSucursalPuntosArt
	/// </summary>
	public ref class OpcionesSucursalPuntosArt : public System::Windows::Forms::Form
	{
	public:
		OpcionesSucursalPuntosArt(void)
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
		~OpcionesSucursalPuntosArt()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Distancias";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Sucursales";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// OpcionesSucursalPuntosArt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(121, 78);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OpcionesSucursalPuntosArt";
			this->Text = L"OpcionesSucursalPuntosArt";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
