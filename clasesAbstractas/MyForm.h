#pragma once
#include "triangulo.h";
#include "cuadrilatero.h";
#include "pentagono.h";
#include "hexagono.h";
#include "heptagono.h";
#include "octagono.h";
#include "eneagono.h";
#include "decagono.h";

namespace clasesAbstractas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioOctagono;
	private: System::Windows::Forms::RadioButton^  radioDecagono;
	private: System::Windows::Forms::RadioButton^  radioHexagono;
	private: System::Windows::Forms::RadioButton^  radioPentagono;
	private: System::Windows::Forms::RadioButton^  radioCuadrilatero;
	private: System::Windows::Forms::RadioButton^  radioEneagono;
	private: System::Windows::Forms::RadioButton^  radioHeptagono;
	private: System::Windows::Forms::RadioButton^  radioTriangulo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtBase;
	private: System::Windows::Forms::TextBox^  txtAltura;
	private: System::Windows::Forms::TextBox^  txtLado1;
	private: System::Windows::Forms::TextBox^  txtLado2;
	private: System::Windows::Forms::TextBox^  txtLado3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txtLado;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtApotema;
	private: System::Windows::Forms::Label^  label8;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioOctagono = (gcnew System::Windows::Forms::RadioButton());
			this->radioDecagono = (gcnew System::Windows::Forms::RadioButton());
			this->radioHexagono = (gcnew System::Windows::Forms::RadioButton());
			this->radioPentagono = (gcnew System::Windows::Forms::RadioButton());
			this->radioCuadrilatero = (gcnew System::Windows::Forms::RadioButton());
			this->radioEneagono = (gcnew System::Windows::Forms::RadioButton());
			this->radioHeptagono = (gcnew System::Windows::Forms::RadioButton());
			this->radioTriangulo = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtBase = (gcnew System::Windows::Forms::TextBox());
			this->txtAltura = (gcnew System::Windows::Forms::TextBox());
			this->txtLado1 = (gcnew System::Windows::Forms::TextBox());
			this->txtLado2 = (gcnew System::Windows::Forms::TextBox());
			this->txtLado3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtLado = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtApotema = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(130, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Figuras Geometricas";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioOctagono);
			this->groupBox1->Controls->Add(this->radioDecagono);
			this->groupBox1->Controls->Add(this->radioHexagono);
			this->groupBox1->Controls->Add(this->radioPentagono);
			this->groupBox1->Controls->Add(this->radioCuadrilatero);
			this->groupBox1->Controls->Add(this->radioEneagono);
			this->groupBox1->Controls->Add(this->radioHeptagono);
			this->groupBox1->Controls->Add(this->radioTriangulo);
			this->groupBox1->Location = System::Drawing::Point(36, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(388, 104);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Figuras";
			// 
			// radioOctagono
			// 
			this->radioOctagono->AutoSize = true;
			this->radioOctagono->Location = System::Drawing::Point(122, 60);
			this->radioOctagono->Name = L"radioOctagono";
			this->radioOctagono->Size = System::Drawing::Size(72, 17);
			this->radioOctagono->TabIndex = 7;
			this->radioOctagono->TabStop = true;
			this->radioOctagono->Text = L"Octagono";
			this->radioOctagono->UseVisualStyleBackColor = true;
			// 
			// radioDecagono
			// 
			this->radioDecagono->AutoSize = true;
			this->radioDecagono->Location = System::Drawing::Point(302, 60);
			this->radioDecagono->Name = L"radioDecagono";
			this->radioDecagono->Size = System::Drawing::Size(75, 17);
			this->radioDecagono->TabIndex = 6;
			this->radioDecagono->TabStop = true;
			this->radioDecagono->Text = L"Decagono";
			this->radioDecagono->UseVisualStyleBackColor = true;
			// 
			// radioHexagono
			// 
			this->radioHexagono->AutoSize = true;
			this->radioHexagono->Location = System::Drawing::Point(302, 19);
			this->radioHexagono->Name = L"radioHexagono";
			this->radioHexagono->Size = System::Drawing::Size(74, 17);
			this->radioHexagono->TabIndex = 5;
			this->radioHexagono->TabStop = true;
			this->radioHexagono->Text = L"Hexagono";
			this->radioHexagono->UseVisualStyleBackColor = true;
			// 
			// radioPentagono
			// 
			this->radioPentagono->AutoSize = true;
			this->radioPentagono->Location = System::Drawing::Point(212, 19);
			this->radioPentagono->Name = L"radioPentagono";
			this->radioPentagono->Size = System::Drawing::Size(77, 17);
			this->radioPentagono->TabIndex = 4;
			this->radioPentagono->TabStop = true;
			this->radioPentagono->Text = L"Pentagono";
			this->radioPentagono->UseVisualStyleBackColor = true;
			// 
			// radioCuadrilatero
			// 
			this->radioCuadrilatero->AutoSize = true;
			this->radioCuadrilatero->Location = System::Drawing::Point(122, 19);
			this->radioCuadrilatero->Name = L"radioCuadrilatero";
			this->radioCuadrilatero->Size = System::Drawing::Size(81, 17);
			this->radioCuadrilatero->TabIndex = 3;
			this->radioCuadrilatero->TabStop = true;
			this->radioCuadrilatero->Text = L"Cuadrilatero";
			this->radioCuadrilatero->UseVisualStyleBackColor = true;
			// 
			// radioEneagono
			// 
			this->radioEneagono->AutoSize = true;
			this->radioEneagono->Location = System::Drawing::Point(212, 60);
			this->radioEneagono->Name = L"radioEneagono";
			this->radioEneagono->Size = System::Drawing::Size(74, 17);
			this->radioEneagono->TabIndex = 2;
			this->radioEneagono->TabStop = true;
			this->radioEneagono->Text = L"Eneagono";
			this->radioEneagono->UseVisualStyleBackColor = true;
			// 
			// radioHeptagono
			// 
			this->radioHeptagono->AutoSize = true;
			this->radioHeptagono->Location = System::Drawing::Point(34, 60);
			this->radioHeptagono->Name = L"radioHeptagono";
			this->radioHeptagono->Size = System::Drawing::Size(78, 17);
			this->radioHeptagono->TabIndex = 1;
			this->radioHeptagono->TabStop = true;
			this->radioHeptagono->Text = L"Heptagono";
			this->radioHeptagono->UseVisualStyleBackColor = true;
			// 
			// radioTriangulo
			// 
			this->radioTriangulo->AutoSize = true;
			this->radioTriangulo->Location = System::Drawing::Point(34, 19);
			this->radioTriangulo->Name = L"radioTriangulo";
			this->radioTriangulo->Size = System::Drawing::Size(69, 17);
			this->radioTriangulo->TabIndex = 0;
			this->radioTriangulo->TabStop = true;
			this->radioTriangulo->Text = L"Triangulo";
			this->radioTriangulo->UseVisualStyleBackColor = true;
			this->radioTriangulo->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioTriangulo_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Base";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Altura";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Lado 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 283);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Lado 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(48, 313);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Lado 3";
			// 
			// txtBase
			// 
			this->txtBase->Location = System::Drawing::Point(96, 183);
			this->txtBase->Name = L"txtBase";
			this->txtBase->Size = System::Drawing::Size(100, 20);
			this->txtBase->TabIndex = 7;
			// 
			// txtAltura
			// 
			this->txtAltura->Location = System::Drawing::Point(96, 220);
			this->txtAltura->Name = L"txtAltura";
			this->txtAltura->Size = System::Drawing::Size(100, 20);
			this->txtAltura->TabIndex = 8;
			// 
			// txtLado1
			// 
			this->txtLado1->Location = System::Drawing::Point(96, 250);
			this->txtLado1->Name = L"txtLado1";
			this->txtLado1->Size = System::Drawing::Size(100, 20);
			this->txtLado1->TabIndex = 9;
			// 
			// txtLado2
			// 
			this->txtLado2->Location = System::Drawing::Point(94, 280);
			this->txtLado2->Name = L"txtLado2";
			this->txtLado2->Size = System::Drawing::Size(100, 20);
			this->txtLado2->TabIndex = 10;
			// 
			// txtLado3
			// 
			this->txtLado3->Location = System::Drawing::Point(96, 310);
			this->txtLado3->Name = L"txtLado3";
			this->txtLado3->Size = System::Drawing::Size(100, 20);
			this->txtLado3->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(239, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 36);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txtLado
			// 
			this->txtLado->Location = System::Drawing::Point(284, 179);
			this->txtLado->Name = L"txtLado";
			this->txtLado->Size = System::Drawing::Size(100, 20);
			this->txtLado->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(236, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Lado";
			// 
			// txtApotema
			// 
			this->txtApotema->Location = System::Drawing::Point(284, 216);
			this->txtApotema->Name = L"txtApotema";
			this->txtApotema->Size = System::Drawing::Size(100, 20);
			this->txtApotema->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(236, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"apotema";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 353);
			this->Controls->Add(this->txtApotema);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtLado);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtLado3);
			this->Controls->Add(this->txtLado2);
			this->Controls->Add(this->txtLado1);
			this->Controls->Add(this->txtAltura);
			this->Controls->Add(this->txtBase);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioTriangulo_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioTriangulo->Checked == true)
		{
			txtLado->Enabled = false;
			txtApotema->Enabled = false;
			txtBase->Enabled = true;
			txtAltura->Enabled = true;
			txtLado1->Enabled = true;
			txtLado2->Enabled = true;
			txtLado3->Enabled = true;
		}
		else {
			txtBase->Enabled = false;
			txtAltura->Enabled = false;
			txtLado1->Enabled = false;
			txtLado2->Enabled = false;
			txtLado3->Enabled = false;
			txtLado->Enabled = true;
			txtApotema->Enabled = true;
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// Triangulo
	if (radioTriangulo->Checked == true)
	{
		triangulo trianguloNuevo(Convert::ToInt32(txtLado1->Text), Convert::ToInt32(txtLado2->Text), Convert::ToInt32(txtLado3->Text), Convert::ToInt32(txtBase->Text), Convert::ToInt32(txtAltura->Text));
		String^ perimetro = gcnew String(trianguloNuevo.perimetro().ToString());
		String^ area = gcnew String(trianguloNuevo.area().ToString());
		System::Windows::Forms::MessageBox::Show("El perimetro del triangulo es: " + perimetro + " y el area es: " + area);
	}
	// Cuadrilatero
	if (radioCuadrilatero->Checked == true)
	{
		cuadrilatero cuadrilateroNuevo(Convert::ToInt32(txtLado->Text));
		String^ perimetro = gcnew String(cuadrilateroNuevo.perimetro().ToString());
		String^ area = gcnew String(cuadrilateroNuevo.area().ToString());
		System::Windows::Forms::MessageBox::Show("El perimetro del cuadrilatero es: " + perimetro + " y el area es: " + area);
	}
	// Pentagono
	if (radioPentagono->Checked == true)
	{
		pentagono pentagonoNuevo(Convert::ToInt32(txtLado->Text), Convert::ToInt32(txtApotema->Text));
		String^ perimetro = gcnew String(pentagonoNuevo.perimetro().ToString());
		String^ area = gcnew String(pentagonoNuevo.area().ToString());
		System::Windows::Forms::MessageBox::Show("El perimetro del pentagono es: " + perimetro + " y el area es: " + area);
	}
	// Hexagono
	if (radioHexagono->Checked == true)
	{
		hexagono hexagonoNuevo(Convert::ToInt32(txtLado->Text), Convert::ToInt32(txtApotema->Text));
		String^ perimetro = gcnew String(hexagonoNuevo.perimetro().ToString());
		String^ area = gcnew String(hexagonoNuevo.area().ToString());
		System::Windows::Forms::MessageBox::Show("El perimetro del hexagono es: " + perimetro + " y el area es: " + area);
	}
	// Heptagono
	if (radioHeptagono->Checked == true)
	{
		pentagono pentagonoNuevo(Convert::ToInt32(txtLado->Text), Convert::ToInt32(txtApotema->Text));
		String^ perimetro = gcnew String(pentagonoNuevo.perimetro().ToString());
		String^ area = gcnew String(pentagonoNuevo.area().ToString());
		System::Windows::Forms::MessageBox::Show("El perimetro del heptagono es: " + perimetro + " y el area es: " + area);
	}
	// Octagono
	if (radioOctagono->Checked == true)
	{
		octagono octagonoNuevo(Convert::ToInt32(txtLado->Text), Convert::ToInt32(txtApotema->Text));
		String^ perimetro = gcnew String(octagonoNuevo.perimetro().ToString());
		String^ area = gcnew String(octagonoNuevo.area().ToString());
		System::Windows::Forms::MessageBox::Show("El perimetro del octagono es: " + perimetro + " y el area es: " + area);
	}
	// Eneagono
	if (radioEneagono->Checked == true)
	{
		eneagono eneagonoNuevo(Convert::ToInt32(txtLado->Text), Convert::ToInt32(txtApotema->Text));
		String^ perimetro = gcnew String(eneagonoNuevo.perimetro().ToString());
		String^ area = gcnew String(eneagonoNuevo.area().ToString());
		System::Windows::Forms::MessageBox::Show("El perimetro del eneagono es: " + perimetro + " y el area es: " + area);
	}
	// Decagono
	if (radioDecagono->Checked == true)
	{
		decagono decagonoNuevo(Convert::ToInt32(txtLado->Text), Convert::ToInt32(txtApotema->Text));
		String^ perimetro = gcnew String(decagonoNuevo.perimetro().ToString());
		String^ area = gcnew String(decagonoNuevo.area().ToString());
		System::Windows::Forms::MessageBox::Show("El perimetro del decagono es: " + perimetro + " y el area es: " + area);
	}
}
};
}
