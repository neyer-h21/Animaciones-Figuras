#pragma once

namespace AnimacionesFigura {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmFiguras
	/// </summary>
	public ref class FrmFiguras : public System::Windows::Forms::Form
	{
	public:
		FrmFiguras(void)
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
		~FrmFiguras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtFigura;
	private: System::Windows::Forms::Button^ btnMover;
	private: System::Windows::Forms::Button^ btnDibujar;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Panel^ pnlFigura;

	private: System::Windows::Forms::Label^ lblAreaCirculo;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtRadio;
	private: System::Windows::Forms::Label^ lblRadio;
	private: System::Windows::Forms::Label^ lblAreaCuadrado;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtLado2;
	private: System::Windows::Forms::TextBox^ txtLado1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDibujar = (gcnew System::Windows::Forms::Button());
			this->btnMover = (gcnew System::Windows::Forms::Button());
			this->txtFigura = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pnlFigura = (gcnew System::Windows::Forms::Panel());
			this->lblRadio = (gcnew System::Windows::Forms::Label());
			this->txtRadio = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblAreaCirculo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtLado1 = (gcnew System::Windows::Forms::TextBox());
			this->txtLado2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblAreaCuadrado = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtFigura);
			this->groupBox1->Controls->Add(this->btnMover);
			this->groupBox1->Controls->Add(this->btnDibujar);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(0, 1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1136, 175);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccionar Figuras";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &FrmFiguras::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Figura";
			this->label1->Click += gcnew System::EventHandler(this, &FrmFiguras::label1_Click);
			// 
			// btnDibujar
			// 
			this->btnDibujar->Location = System::Drawing::Point(674, 25);
			this->btnDibujar->Name = L"btnDibujar";
			this->btnDibujar->Size = System::Drawing::Size(382, 40);
			this->btnDibujar->TabIndex = 1;
			this->btnDibujar->Text = L"Dibujar";
			this->btnDibujar->UseVisualStyleBackColor = true;
			// 
			// btnMover
			// 
			this->btnMover->Location = System::Drawing::Point(674, 93);
			this->btnMover->Name = L"btnMover";
			this->btnMover->Size = System::Drawing::Size(382, 40);
			this->btnMover->TabIndex = 2;
			this->btnMover->Text = L"Mover";
			this->btnMover->UseVisualStyleBackColor = true;
			// 
			// txtFigura
			// 
			this->txtFigura->Location = System::Drawing::Point(94, 59);
			this->txtFigura->Name = L"txtFigura";
			this->txtFigura->Size = System::Drawing::Size(218, 26);
			this->txtFigura->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblAreaCirculo);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->txtRadio);
			this->groupBox2->Controls->Add(this->lblRadio);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(13, 197);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(267, 207);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Circulo";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblAreaCuadrado);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->txtLado2);
			this->groupBox3->Controls->Add(this->txtLado1);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(12, 410);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(267, 207);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cuadrado";
			// 
			// pnlFigura
			// 
			this->pnlFigura->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pnlFigura->Location = System::Drawing::Point(306, 182);
			this->pnlFigura->Name = L"pnlFigura";
			this->pnlFigura->Size = System::Drawing::Size(912, 479);
			this->pnlFigura->TabIndex = 3;
			// 
			// lblRadio
			// 
			this->lblRadio->AutoSize = true;
			this->lblRadio->Location = System::Drawing::Point(7, 47);
			this->lblRadio->Name = L"lblRadio";
			this->lblRadio->Size = System::Drawing::Size(61, 20);
			this->lblRadio->TabIndex = 4;
			this->lblRadio->Text = L"Radio:";
			// 
			// txtRadio
			// 
			this->txtRadio->Location = System::Drawing::Point(69, 47);
			this->txtRadio->Name = L"txtRadio";
			this->txtRadio->Size = System::Drawing::Size(180, 26);
			this->txtRadio->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Area:";
			// 
			// lblAreaCirculo
			// 
			this->lblAreaCirculo->AutoSize = true;
			this->lblAreaCirculo->Location = System::Drawing::Point(78, 110);
			this->lblAreaCirculo->Name = L"lblAreaCirculo";
			this->lblAreaCirculo->Size = System::Drawing::Size(15, 20);
			this->lblAreaCirculo->TabIndex = 6;
			this->lblAreaCirculo->Text = L"-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Lado 1:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Lado 2:";
			// 
			// txtLado1
			// 
			this->txtLado1->Location = System::Drawing::Point(75, 45);
			this->txtLado1->Name = L"txtLado1";
			this->txtLado1->Size = System::Drawing::Size(180, 26);
			this->txtLado1->TabIndex = 7;
			// 
			// txtLado2
			// 
			this->txtLado2->Location = System::Drawing::Point(73, 78);
			this->txtLado2->Name = L"txtLado2";
			this->txtLado2->Size = System::Drawing::Size(180, 26);
			this->txtLado2->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Area:";
			// 
			// lblAreaCuadrado
			// 
			this->lblAreaCuadrado->AutoSize = true;
			this->lblAreaCuadrado->Location = System::Drawing::Point(66, 131);
			this->lblAreaCuadrado->Name = L"lblAreaCuadrado";
			this->lblAreaCuadrado->Size = System::Drawing::Size(15, 20);
			this->lblAreaCuadrado->TabIndex = 7;
			this->lblAreaCuadrado->Text = L"-";
			// 
			// FrmFiguras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1230, 673);
			this->Controls->Add(this->pnlFigura);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"FrmFiguras";
			this->Text = L"FrmFiguras";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
