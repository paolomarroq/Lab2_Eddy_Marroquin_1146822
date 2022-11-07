#pragma once
#include "Poligono.h"

namespace Lab2EddyMarroquin1146822 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ CBox_Poligonos;
	private: System::Windows::Forms::Label^ lbl_Base;
	private: System::Windows::Forms::Label^ lbl_Altura;
	private: System::Windows::Forms::Label^ lbl_Apotema;



	private: System::Windows::Forms::TextBox^ txt_Base;
	private: System::Windows::Forms::TextBox^ txt_Altura;
	private: System::Windows::Forms::TextBox^ txt_Apotema;
	private: System::Windows::Forms::Label^ lbl_Lado1;
	private: System::Windows::Forms::Label^ lbl_Lado2;
	private: System::Windows::Forms::Label^ lbl_Lado3;
	private: System::Windows::Forms::Label^ lbl_Lado6;
	private: System::Windows::Forms::Label^ lbl_Lado7;
	private: System::Windows::Forms::Label^ lbl_Lado8;






	private: System::Windows::Forms::Label^ lbl_Lado4;
	private: System::Windows::Forms::Label^ lbl_Lado9;


	private: System::Windows::Forms::Label^ lbl_Lado5;
	private: System::Windows::Forms::Label^ lbl_Lado10;


	private: System::Windows::Forms::TextBox^ txt_Lado1;
	private: System::Windows::Forms::TextBox^ txt_Lado2;
	private: System::Windows::Forms::TextBox^ txt_Lado3;
	private: System::Windows::Forms::TextBox^ txt_Lado4;
	private: System::Windows::Forms::TextBox^ txt_Lado5;
	private: System::Windows::Forms::TextBox^ txt_Lado6;
	private: System::Windows::Forms::TextBox^ txt_Lado7;
	private: System::Windows::Forms::TextBox^ txt_Lado8;
	private: System::Windows::Forms::TextBox^ txt_Lado9;
	private: System::Windows::Forms::TextBox^ txt_Lado10;









	private: System::Windows::Forms::Button^ btn_Calcular;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txt_Perimetro;
	private: System::Windows::Forms::TextBox^ txt_Area;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CBox_Poligonos = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Base = (gcnew System::Windows::Forms::Label());
			this->lbl_Altura = (gcnew System::Windows::Forms::Label());
			this->lbl_Apotema = (gcnew System::Windows::Forms::Label());
			this->txt_Base = (gcnew System::Windows::Forms::TextBox());
			this->txt_Altura = (gcnew System::Windows::Forms::TextBox());
			this->txt_Apotema = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Lado1 = (gcnew System::Windows::Forms::Label());
			this->lbl_Lado2 = (gcnew System::Windows::Forms::Label());
			this->lbl_Lado3 = (gcnew System::Windows::Forms::Label());
			this->lbl_Lado6 = (gcnew System::Windows::Forms::Label());
			this->lbl_Lado7 = (gcnew System::Windows::Forms::Label());
			this->lbl_Lado8 = (gcnew System::Windows::Forms::Label());
			this->lbl_Lado4 = (gcnew System::Windows::Forms::Label());
			this->lbl_Lado9 = (gcnew System::Windows::Forms::Label());
			this->lbl_Lado5 = (gcnew System::Windows::Forms::Label());
			this->lbl_Lado10 = (gcnew System::Windows::Forms::Label());
			this->txt_Lado1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Lado2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Lado3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Lado4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Lado5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Lado6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Lado7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Lado8 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Lado9 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Lado10 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Calcular = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txt_Perimetro = (gcnew System::Windows::Forms::TextBox());
			this->txt_Area = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(249, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(339, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"POLIGONOS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Seleccione la Figura:";
			// 
			// CBox_Poligonos
			// 
			this->CBox_Poligonos->FormattingEnabled = true;
			this->CBox_Poligonos->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Triangulo", L"Cuadrilatero", L"Pentagono",
					L"Haxagono", L"Heptagono", L"Octagono", L"Eneagono", L"Decagono"
			});
			this->CBox_Poligonos->Location = System::Drawing::Point(48, 166);
			this->CBox_Poligonos->Name = L"CBox_Poligonos";
			this->CBox_Poligonos->Size = System::Drawing::Size(130, 24);
			this->CBox_Poligonos->TabIndex = 2;
			this->CBox_Poligonos->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::CBox_Poligonos_SelectedIndexChanged_1);
			// 
			// lbl_Base
			// 
			this->lbl_Base->AutoSize = true;
			this->lbl_Base->Location = System::Drawing::Point(45, 233);
			this->lbl_Base->Name = L"lbl_Base";
			this->lbl_Base->Size = System::Drawing::Size(42, 16);
			this->lbl_Base->TabIndex = 3;
			this->lbl_Base->Text = L"Base:";
			this->lbl_Base->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// lbl_Altura
			// 
			this->lbl_Altura->AutoSize = true;
			this->lbl_Altura->Location = System::Drawing::Point(45, 287);
			this->lbl_Altura->Name = L"lbl_Altura";
			this->lbl_Altura->Size = System::Drawing::Size(44, 16);
			this->lbl_Altura->TabIndex = 4;
			this->lbl_Altura->Text = L"Altura:";
			// 
			// lbl_Apotema
			// 
			this->lbl_Apotema->AutoSize = true;
			this->lbl_Apotema->Location = System::Drawing::Point(45, 342);
			this->lbl_Apotema->Name = L"lbl_Apotema";
			this->lbl_Apotema->Size = System::Drawing::Size(65, 16);
			this->lbl_Apotema->TabIndex = 5;
			this->lbl_Apotema->Text = L"Apotema:";
			// 
			// txt_Base
			// 
			this->txt_Base->Location = System::Drawing::Point(145, 227);
			this->txt_Base->Name = L"txt_Base";
			this->txt_Base->Size = System::Drawing::Size(42, 22);
			this->txt_Base->TabIndex = 6;
			// 
			// txt_Altura
			// 
			this->txt_Altura->Location = System::Drawing::Point(145, 281);
			this->txt_Altura->Name = L"txt_Altura";
			this->txt_Altura->Size = System::Drawing::Size(42, 22);
			this->txt_Altura->TabIndex = 7;
			// 
			// txt_Apotema
			// 
			this->txt_Apotema->Location = System::Drawing::Point(145, 336);
			this->txt_Apotema->Name = L"txt_Apotema";
			this->txt_Apotema->Size = System::Drawing::Size(42, 22);
			this->txt_Apotema->TabIndex = 8;
			// 
			// lbl_Lado1
			// 
			this->lbl_Lado1->AutoSize = true;
			this->lbl_Lado1->Location = System::Drawing::Point(317, 227);
			this->lbl_Lado1->Name = L"lbl_Lado1";
			this->lbl_Lado1->Size = System::Drawing::Size(51, 16);
			this->lbl_Lado1->TabIndex = 9;
			this->lbl_Lado1->Text = L"Lado 1:";
			// 
			// lbl_Lado2
			// 
			this->lbl_Lado2->AutoSize = true;
			this->lbl_Lado2->Location = System::Drawing::Point(317, 281);
			this->lbl_Lado2->Name = L"lbl_Lado2";
			this->lbl_Lado2->Size = System::Drawing::Size(51, 16);
			this->lbl_Lado2->TabIndex = 10;
			this->lbl_Lado2->Text = L"Lado 2:";
			// 
			// lbl_Lado3
			// 
			this->lbl_Lado3->AutoSize = true;
			this->lbl_Lado3->Location = System::Drawing::Point(317, 336);
			this->lbl_Lado3->Name = L"lbl_Lado3";
			this->lbl_Lado3->Size = System::Drawing::Size(51, 16);
			this->lbl_Lado3->TabIndex = 11;
			this->lbl_Lado3->Text = L"Lado 3:";
			// 
			// lbl_Lado6
			// 
			this->lbl_Lado6->AutoSize = true;
			this->lbl_Lado6->Location = System::Drawing::Point(537, 227);
			this->lbl_Lado6->Name = L"lbl_Lado6";
			this->lbl_Lado6->Size = System::Drawing::Size(51, 16);
			this->lbl_Lado6->TabIndex = 12;
			this->lbl_Lado6->Text = L"Lado 6:";
			// 
			// lbl_Lado7
			// 
			this->lbl_Lado7->AutoSize = true;
			this->lbl_Lado7->Location = System::Drawing::Point(537, 281);
			this->lbl_Lado7->Name = L"lbl_Lado7";
			this->lbl_Lado7->Size = System::Drawing::Size(51, 16);
			this->lbl_Lado7->TabIndex = 13;
			this->lbl_Lado7->Text = L"Lado 7:";
			// 
			// lbl_Lado8
			// 
			this->lbl_Lado8->AutoSize = true;
			this->lbl_Lado8->Location = System::Drawing::Point(537, 339);
			this->lbl_Lado8->Name = L"lbl_Lado8";
			this->lbl_Lado8->Size = System::Drawing::Size(51, 16);
			this->lbl_Lado8->TabIndex = 14;
			this->lbl_Lado8->Text = L"Lado 8:";
			// 
			// lbl_Lado4
			// 
			this->lbl_Lado4->AutoSize = true;
			this->lbl_Lado4->Location = System::Drawing::Point(317, 389);
			this->lbl_Lado4->Name = L"lbl_Lado4";
			this->lbl_Lado4->Size = System::Drawing::Size(51, 16);
			this->lbl_Lado4->TabIndex = 15;
			this->lbl_Lado4->Text = L"Lado 4:";
			// 
			// lbl_Lado9
			// 
			this->lbl_Lado9->AutoSize = true;
			this->lbl_Lado9->Location = System::Drawing::Point(537, 389);
			this->lbl_Lado9->Name = L"lbl_Lado9";
			this->lbl_Lado9->Size = System::Drawing::Size(51, 16);
			this->lbl_Lado9->TabIndex = 16;
			this->lbl_Lado9->Text = L"Lado 9:";
			// 
			// lbl_Lado5
			// 
			this->lbl_Lado5->AutoSize = true;
			this->lbl_Lado5->Location = System::Drawing::Point(317, 448);
			this->lbl_Lado5->Name = L"lbl_Lado5";
			this->lbl_Lado5->Size = System::Drawing::Size(51, 16);
			this->lbl_Lado5->TabIndex = 17;
			this->lbl_Lado5->Text = L"Lado 5:";
			// 
			// lbl_Lado10
			// 
			this->lbl_Lado10->AutoSize = true;
			this->lbl_Lado10->Location = System::Drawing::Point(537, 448);
			this->lbl_Lado10->Name = L"lbl_Lado10";
			this->lbl_Lado10->Size = System::Drawing::Size(58, 16);
			this->lbl_Lado10->TabIndex = 18;
			this->lbl_Lado10->Text = L"Lado 10:";
			// 
			// txt_Lado1
			// 
			this->txt_Lado1->Location = System::Drawing::Point(394, 221);
			this->txt_Lado1->Name = L"txt_Lado1";
			this->txt_Lado1->Size = System::Drawing::Size(42, 22);
			this->txt_Lado1->TabIndex = 19;
			// 
			// txt_Lado2
			// 
			this->txt_Lado2->Location = System::Drawing::Point(394, 275);
			this->txt_Lado2->Name = L"txt_Lado2";
			this->txt_Lado2->Size = System::Drawing::Size(42, 22);
			this->txt_Lado2->TabIndex = 20;
			this->txt_Lado2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// txt_Lado3
			// 
			this->txt_Lado3->Location = System::Drawing::Point(394, 330);
			this->txt_Lado3->Name = L"txt_Lado3";
			this->txt_Lado3->Size = System::Drawing::Size(42, 22);
			this->txt_Lado3->TabIndex = 21;
			// 
			// txt_Lado4
			// 
			this->txt_Lado4->Location = System::Drawing::Point(394, 383);
			this->txt_Lado4->Name = L"txt_Lado4";
			this->txt_Lado4->Size = System::Drawing::Size(42, 22);
			this->txt_Lado4->TabIndex = 22;
			// 
			// txt_Lado5
			// 
			this->txt_Lado5->Location = System::Drawing::Point(394, 442);
			this->txt_Lado5->Name = L"txt_Lado5";
			this->txt_Lado5->Size = System::Drawing::Size(42, 22);
			this->txt_Lado5->TabIndex = 23;
			// 
			// txt_Lado6
			// 
			this->txt_Lado6->Location = System::Drawing::Point(636, 221);
			this->txt_Lado6->Name = L"txt_Lado6";
			this->txt_Lado6->Size = System::Drawing::Size(42, 22);
			this->txt_Lado6->TabIndex = 24;
			// 
			// txt_Lado7
			// 
			this->txt_Lado7->Location = System::Drawing::Point(636, 278);
			this->txt_Lado7->Name = L"txt_Lado7";
			this->txt_Lado7->Size = System::Drawing::Size(42, 22);
			this->txt_Lado7->TabIndex = 25;
			// 
			// txt_Lado8
			// 
			this->txt_Lado8->Location = System::Drawing::Point(636, 330);
			this->txt_Lado8->Name = L"txt_Lado8";
			this->txt_Lado8->Size = System::Drawing::Size(42, 22);
			this->txt_Lado8->TabIndex = 26;
			// 
			// txt_Lado9
			// 
			this->txt_Lado9->Location = System::Drawing::Point(636, 383);
			this->txt_Lado9->Name = L"txt_Lado9";
			this->txt_Lado9->Size = System::Drawing::Size(42, 22);
			this->txt_Lado9->TabIndex = 27;
			this->txt_Lado9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// txt_Lado10
			// 
			this->txt_Lado10->Location = System::Drawing::Point(636, 442);
			this->txt_Lado10->Name = L"txt_Lado10";
			this->txt_Lado10->Size = System::Drawing::Size(42, 22);
			this->txt_Lado10->TabIndex = 28;
			// 
			// btn_Calcular
			// 
			this->btn_Calcular->Location = System::Drawing::Point(78, 404);
			this->btn_Calcular->Name = L"btn_Calcular";
			this->btn_Calcular->Size = System::Drawing::Size(75, 23);
			this->btn_Calcular->TabIndex = 29;
			this->btn_Calcular->Text = L"Calcular";
			this->btn_Calcular->UseVisualStyleBackColor = true;
			this->btn_Calcular->Click += gcnew System::EventHandler(this, &MyForm::btn_Calcular_Click_1);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(280, 514);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 16);
			this->label16->TabIndex = 30;
			this->label16->Text = L"Perimetro";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(476, 514);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(36, 16);
			this->label17->TabIndex = 31;
			this->label17->Text = L"Area";
			// 
			// txt_Perimetro
			// 
			this->txt_Perimetro->Location = System::Drawing::Point(351, 511);
			this->txt_Perimetro->Name = L"txt_Perimetro";
			this->txt_Perimetro->Size = System::Drawing::Size(42, 22);
			this->txt_Perimetro->TabIndex = 32;
			// 
			// txt_Area
			// 
			this->txt_Area->Location = System::Drawing::Point(528, 514);
			this->txt_Area->Name = L"txt_Area";
			this->txt_Area->Size = System::Drawing::Size(42, 22);
			this->txt_Area->TabIndex = 33;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 587);
			this->Controls->Add(this->txt_Area);
			this->Controls->Add(this->txt_Perimetro);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->btn_Calcular);
			this->Controls->Add(this->txt_Lado10);
			this->Controls->Add(this->txt_Lado9);
			this->Controls->Add(this->txt_Lado8);
			this->Controls->Add(this->txt_Lado7);
			this->Controls->Add(this->txt_Lado6);
			this->Controls->Add(this->txt_Lado5);
			this->Controls->Add(this->txt_Lado4);
			this->Controls->Add(this->txt_Lado3);
			this->Controls->Add(this->txt_Lado2);
			this->Controls->Add(this->txt_Lado1);
			this->Controls->Add(this->lbl_Lado10);
			this->Controls->Add(this->lbl_Lado5);
			this->Controls->Add(this->lbl_Lado9);
			this->Controls->Add(this->lbl_Lado4);
			this->Controls->Add(this->lbl_Lado8);
			this->Controls->Add(this->lbl_Lado7);
			this->Controls->Add(this->lbl_Lado6);
			this->Controls->Add(this->lbl_Lado3);
			this->Controls->Add(this->lbl_Lado2);
			this->Controls->Add(this->lbl_Lado1);
			this->Controls->Add(this->txt_Apotema);
			this->Controls->Add(this->txt_Altura);
			this->Controls->Add(this->txt_Base);
			this->Controls->Add(this->lbl_Apotema);
			this->Controls->Add(this->lbl_Altura);
			this->Controls->Add(this->lbl_Base);
			this->Controls->Add(this->CBox_Poligonos);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   private: System::Void CBox_Poligonos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		   int selectedIndex = CBox_Poligonos->SelectedIndex;

		   switch (selectedIndex)
		   {
		   case 0:
			   this->ResolvTriangulo();
			   break;
		   case 1:
			   this->ResolvCuadriltero();
			   break;
		   case 2:
			   this->ResolvPentagono();
			   break;
		   case 3:
			   this->ResolvHexagono();
			   break;
		   case 4:
			   this->ResolvHeptagono();
			   break;
		   case 5:
			   this->ResolvOctagono();
			   break;
		   case 6:
			   this->ResolvEneagono();
			   break;
		   case 7:
			   this->ResolvDecagono();
			   break;
		   default:
			   MessageBox::Show("Seleccione alguna figura");
			   break;
		   }

	   }

	public: System::Void ResolvTriangulo()
	{
		this->lbl_Lado1->Visible = true;
		this->lbl_Lado2->Visible = true;
		this->lbl_Lado3->Visible = true;
		this->lbl_Lado4->Visible = false;
		this->lbl_Lado5->Visible = false;
		this->lbl_Lado6->Visible = false;
		this->lbl_Lado7->Visible = false;
		this->lbl_Lado8->Visible = false;
		this->lbl_Lado9->Visible = false;
		this->lbl_Lado10->Visible = false;
		this->lbl_Base->Visible = true;
		this->lbl_Altura->Visible = true;
		this->lbl_Apotema->Visible = false;
		this->txt_Lado1->Visible = true;
		this->txt_Lado2->Visible = true;
		this->txt_Lado3->Visible = true;
		this->txt_Lado4->Visible = false;
		this->txt_Lado5->Visible = false;
		this->txt_Lado6->Visible = false;
		this->txt_Lado7->Visible = false;
		this->txt_Lado8->Visible = false;
		this->txt_Lado9->Visible = false;
		this->txt_Lado10->Visible = false;
		this->txt_Base->Visible = true;
		this->txt_Altura->Visible = true;
		this->txt_Apotema->Visible = false;
		txt_Lado1->Text = "";
		txt_Lado2->Text = "";
		txt_Lado3->Text = "";
		txt_Area->Text = "";
		txt_Perimetro->Text = "";
		txt_Base->Text = "";
		txt_Altura->Text = "";
		txt_Apotema->Text = "";
	}
	public: System::Void ResolvCuadriltero()
	{
		this->lbl_Lado1->Visible = true;
		this->lbl_Lado2->Visible = true;
		this->lbl_Lado3->Visible = true;
		this->lbl_Lado4->Visible = true;
		this->lbl_Lado5->Visible = false;
		this->lbl_Lado6->Visible = false;
		this->lbl_Lado7->Visible = false;
		this->lbl_Lado8->Visible = false;
		this->lbl_Lado9->Visible = false;
		this->lbl_Lado10->Visible = false;
		this->txt_Lado1->Visible = true;
		this->txt_Lado2->Visible = true;
		this->txt_Lado3->Visible = true;
		this->txt_Lado4->Visible = true;
		this->txt_Lado5->Visible = false;
		this->txt_Lado6->Visible = false;
		this->txt_Lado7->Visible = false;
		this->txt_Lado8->Visible = false;
		this->txt_Lado9->Visible = false;
		this->txt_Lado10->Visible = false;
		this->lbl_Base->Visible = true;
		this->lbl_Altura->Visible = true;
		this->lbl_Apotema->Visible = false;
		this->txt_Base->Visible = true;
		this->txt_Altura->Visible = true;
		this->txt_Apotema->Visible = false;
		txt_Lado1->Text = "";
		txt_Lado2->Text = "";
		txt_Lado3->Text = "";
		txt_Lado4->Text = "";
		txt_Area->Text = "";
		txt_Perimetro->Text = "";
		txt_Base->Text = "";
		txt_Altura->Text = "";
		txt_Apotema->Text = "";
	}
	public: System::Void ResolvPentagono()
	{
		this->lbl_Lado1->Visible = true;
		this->lbl_Lado2->Visible = true;
		this->lbl_Lado3->Visible = true;
		this->lbl_Lado4->Visible = true;
		this->lbl_Lado5->Visible = true;
		this->lbl_Lado6->Visible = false;
		this->lbl_Lado7->Visible = false;
		this->lbl_Lado8->Visible = false;
		this->lbl_Lado9->Visible = false;
		this->lbl_Lado10->Visible = false;
		this->txt_Lado1->Visible = true;
		this->txt_Lado2->Visible = true;
		this->txt_Lado3->Visible = true;
		this->txt_Lado4->Visible = true;
		this->txt_Lado5->Visible = true;
		this->txt_Lado6->Visible = false;
		this->txt_Lado7->Visible = false;
		this->txt_Lado8->Visible = false;
		this->txt_Lado9->Visible = false;
		this->txt_Lado10->Visible = false;
		this->lbl_Base->Visible = false;
		this->lbl_Altura->Visible = false;
		this->lbl_Apotema->Visible = true;
		this->txt_Base->Visible = false;
		this->txt_Altura->Visible = false;
		this->txt_Apotema->Visible = true;
		txt_Lado1->Text = "";
		txt_Lado2->Text = "";
		txt_Lado3->Text = "";
		txt_Lado4->Text = "";
		txt_Lado5->Text = "";
		txt_Area->Text = "";
		txt_Perimetro->Text = "";
		txt_Base->Text = "";
		txt_Altura->Text = "";
		txt_Apotema->Text = "";
	}
	public: System::Void ResolvHexagono()
	{
		this->lbl_Lado1->Visible = true;
		this->lbl_Lado2->Visible = true;
		this->lbl_Lado3->Visible = true;
		this->lbl_Lado4->Visible = true;
		this->lbl_Lado5->Visible = true;
		this->lbl_Lado6->Visible = true;
		this->lbl_Lado7->Visible = false;
		this->lbl_Lado8->Visible = false;
		this->lbl_Lado9->Visible = false;
		this->lbl_Lado10->Visible = false;
		this->txt_Lado1->Visible = true;
		this->txt_Lado2->Visible = true;
		this->txt_Lado3->Visible = true;
		this->txt_Lado4->Visible = true;
		this->txt_Lado5->Visible = true;
		this->txt_Lado6->Visible = true;
		this->txt_Lado7->Visible = false;
		this->txt_Lado8->Visible = false;
		this->txt_Lado9->Visible = false;
		this->txt_Lado10->Visible = false;
		this->lbl_Base->Visible = false;
		this->lbl_Altura->Visible = false;
		this->lbl_Apotema->Visible = true;
		this->txt_Base->Visible = false;
		this->txt_Altura->Visible = false;
		this->txt_Apotema->Visible = true;
		txt_Lado1->Text = "";
		txt_Lado2->Text = "";
		txt_Lado3->Text = "";
		txt_Lado4->Text = "";
		txt_Lado5->Text = "";
		txt_Lado6->Text = "";
		txt_Area->Text = "";
		txt_Perimetro->Text = "";
		txt_Base->Text = "";
		txt_Altura->Text = "";
		txt_Apotema->Text = "";
	}
	public: System::Void ResolvHeptagono()
	{
		this->lbl_Lado1->Visible = true;
		this->lbl_Lado2->Visible = true;
		this->lbl_Lado3->Visible = true;
		this->lbl_Lado4->Visible = true;
		this->lbl_Lado5->Visible = true;
		this->lbl_Lado6->Visible = true;
		this->lbl_Lado7->Visible = true;
		this->lbl_Lado8->Visible = false;
		this->lbl_Lado9->Visible = false;
		this->lbl_Lado10->Visible = false;
		this->txt_Lado1->Visible = true;
		this->txt_Lado2->Visible = true;
		this->txt_Lado3->Visible = true;
		this->txt_Lado4->Visible = true;
		this->txt_Lado5->Visible = true;
		this->txt_Lado6->Visible = true;
		this->txt_Lado7->Visible = true;
		this->txt_Lado8->Visible = false;
		this->txt_Lado9->Visible = false;
		this->txt_Lado10->Visible = false;
		this->lbl_Base->Visible = false;
		this->lbl_Altura->Visible = false;
		this->lbl_Apotema->Visible = true;
		this->txt_Base->Visible = false;
		this->txt_Altura->Visible = false;
		this->txt_Apotema->Visible = true;
		txt_Lado1->Text = "";
		txt_Lado2->Text = "";
		txt_Lado3->Text = "";
		txt_Lado4->Text = "";
		txt_Lado5->Text = "";
		txt_Lado6->Text = "";
		txt_Lado7->Text = "";
		txt_Area->Text = "";
		txt_Perimetro->Text = "";
		txt_Base->Text = "";
		txt_Altura->Text = "";
		txt_Apotema->Text = "";
	}
	public: System::Void ResolvOctagono()
	{
		this->lbl_Lado1->Visible = true;
		this->lbl_Lado2->Visible = true;
		this->lbl_Lado3->Visible = true;
		this->lbl_Lado4->Visible = true;
		this->lbl_Lado5->Visible = true;
		this->lbl_Lado6->Visible = true;
		this->lbl_Lado7->Visible = true;
		this->lbl_Lado8->Visible = true;
		this->lbl_Lado9->Visible = false;
		this->lbl_Lado10->Visible = false;
		this->txt_Lado1->Visible = true;
		this->txt_Lado2->Visible = true;
		this->txt_Lado3->Visible = true;
		this->txt_Lado4->Visible = true;
		this->txt_Lado5->Visible = true;
		this->txt_Lado6->Visible = true;
		this->txt_Lado7->Visible = true;
		this->txt_Lado8->Visible = true;
		this->txt_Lado9->Visible = false;
		this->txt_Lado10->Visible = false;
		this->lbl_Base->Visible = false;
		this->lbl_Altura->Visible = false;
		this->lbl_Apotema->Visible = true;
		this->txt_Base->Visible = false;
		this->txt_Altura->Visible = false;
		this->txt_Apotema->Visible = true;
		txt_Lado1->Text = "";
		txt_Lado2->Text = "";
		txt_Lado3->Text = "";
		txt_Lado4->Text = "";
		txt_Lado5->Text = "";
		txt_Lado6->Text = "";
		txt_Lado7->Text = "";
		txt_Lado8->Text = "";
		txt_Area->Text = "";
		txt_Perimetro->Text = "";
		txt_Base->Text = "";
		txt_Altura->Text = "";
		txt_Apotema->Text = "";
	}
	public: System::Void ResolvEneagono()
	{
		this->lbl_Lado1->Visible = true;
		this->lbl_Lado2->Visible = true;
		this->lbl_Lado3->Visible = true;
		this->lbl_Lado4->Visible = true;
		this->lbl_Lado5->Visible = true;
		this->lbl_Lado6->Visible = true;
		this->lbl_Lado7->Visible = true;
		this->lbl_Lado8->Visible = true;
		this->lbl_Lado9->Visible = true;
		this->lbl_Lado10->Visible = false;
		this->txt_Lado1->Visible = true;
		this->txt_Lado2->Visible = true;
		this->txt_Lado3->Visible = true;
		this->txt_Lado4->Visible = true;
		this->txt_Lado5->Visible = true;
		this->txt_Lado6->Visible = true;
		this->txt_Lado7->Visible = true;
		this->txt_Lado8->Visible = true;
		this->txt_Lado9->Visible = true;
		this->txt_Lado10->Visible = false;
		this->lbl_Base->Visible = false;
		this->lbl_Altura->Visible = false;
		this->lbl_Apotema->Visible = true;
		this->txt_Base->Visible = false;
		this->txt_Altura->Visible = false;
		this->txt_Apotema->Visible = true;
		txt_Lado1->Text = "";
		txt_Lado2->Text = "";
		txt_Lado3->Text = "";
		txt_Lado4->Text = "";
		txt_Lado5->Text = "";
		txt_Lado6->Text = "";
		txt_Lado7->Text = "";
		txt_Lado8->Text = "";
		txt_Lado9->Text = "";
		txt_Area->Text = "";
		txt_Perimetro->Text = "";
		txt_Base->Text = "";
		txt_Altura->Text = "";
		txt_Apotema->Text = "";
	}
	public: System::Void ResolvDecagono()
	{
		this->lbl_Lado1->Visible = true;
		this->lbl_Lado2->Visible = true;
		this->lbl_Lado3->Visible = true;
		this->lbl_Lado4->Visible = true;
		this->lbl_Lado5->Visible = true;
		this->lbl_Lado6->Visible = true;
		this->lbl_Lado7->Visible = true;
		this->lbl_Lado8->Visible = true;
		this->lbl_Lado9->Visible = true;
		this->lbl_Lado10->Visible = true;
		this->txt_Lado1->Visible = true;
		this->txt_Lado2->Visible = true;
		this->txt_Lado3->Visible = true;
		this->txt_Lado4->Visible = true;
		this->txt_Lado5->Visible = true;
		this->txt_Lado6->Visible = true;
		this->txt_Lado7->Visible = true;
		this->txt_Lado8->Visible = true;
		this->txt_Lado9->Visible = true;
		this->txt_Lado10->Visible = true;
		this->lbl_Base->Visible = false;
		this->lbl_Altura->Visible = false;
		this->lbl_Apotema->Visible = true;
		this->txt_Base->Visible = false;
		this->txt_Altura->Visible = false;
		this->txt_Apotema->Visible = true;
		txt_Lado1->Text = "";
		txt_Lado2->Text = "";
		txt_Lado3->Text = "";
		txt_Lado4->Text = "";
		txt_Lado5->Text = "";
		txt_Lado6->Text = "";
		txt_Lado7->Text = "";
		txt_Lado8->Text = "";
		txt_Lado9->Text = "";
		txt_Lado10->Text = "";
		txt_Area->Text = "";
		txt_Perimetro->Text = "";
		txt_Base->Text = "";
		txt_Altura->Text = "";
		txt_Apotema->Text = "";
	}

	public: System::Void CalcularTriangulo() {
		Poligono triangulo = Poligono();
		try
		{
			triangulo.lado1 = Convert::ToDouble(this->txt_Lado1->Text);
			triangulo.lado2 = Convert::ToDouble(this->txt_Lado2->Text);
			triangulo.lado3 = Convert::ToDouble(this->txt_Lado3->Text);
			triangulo.Base = Convert::ToDouble(this->txt_Base->Text);
			triangulo.Altura = Convert::ToDouble(this->txt_Altura->Text);

			txt_Area->Text = triangulo.AreaTriangulo().ToString();
			txt_Perimetro->Text = triangulo.PerimetroTriangulo().ToString();
		}
		catch (...)
		{
			MessageBox::Show("Debes incresar los valores requeridos");
		}

	}

	public: System::Void CalcularCuadrado() {
		Poligono cuadrado = Poligono();
		try
		{
			cuadrado.lado1 = Convert::ToDouble(this->txt_Lado1->Text);
			cuadrado.lado2 = Convert::ToDouble(this->txt_Lado2->Text);
			cuadrado.lado3 = Convert::ToDouble(this->txt_Lado3->Text);
			cuadrado.lado4 = Convert::ToDouble(this->txt_Lado4->Text);
			cuadrado.Base = Convert::ToDouble(this->txt_Base->Text);
			cuadrado.Altura = Convert::ToDouble(this->txt_Altura->Text);

			txt_Area->Text = cuadrado.AreaTriangulo().ToString();
			txt_Perimetro->Text = cuadrado.PerimetroCuadrilatero().ToString();
		}
		catch (...)
		{
			MessageBox::Show("Debes incresar los valores adecuados");
		}

	}

	public: System::Void CalcularPentagono() {
		Poligono pentagono = Poligono();
		try
		{
			pentagono.lado1 = Convert::ToDouble(this->txt_Lado1->Text);
			pentagono.lado2 = Convert::ToDouble(this->txt_Lado2->Text);
			pentagono.lado3 = Convert::ToDouble(this->txt_Lado3->Text);
			pentagono.lado4 = Convert::ToDouble(this->txt_Lado4->Text);
			pentagono.lado5 = Convert::ToDouble(this->txt_Lado5->Text);
			pentagono.Apotema = Convert::ToDouble(this->txt_Apotema->Text);

			txt_Area->Text = pentagono.AreaPentagono().ToString();
			txt_Perimetro->Text = pentagono.PerimetroPentagono().ToString();
		}
		catch (...)
		{
			MessageBox::Show("Debes incresar los valores adecuados");
		}
	}

	public: System::Void CalcularHexagono() {
		Poligono Hexagono = Poligono();
		try
		{
			Hexagono.lado1 = Convert::ToDouble(this->txt_Lado1->Text);
			Hexagono.lado2 = Convert::ToDouble(this->txt_Lado2->Text);
			Hexagono.lado3 = Convert::ToDouble(this->txt_Lado3->Text);
			Hexagono.lado4 = Convert::ToDouble(this->txt_Lado4->Text);
			Hexagono.lado5 = Convert::ToDouble(this->txt_Lado5->Text);
			Hexagono.lado6 = Convert::ToDouble(this->txt_Lado6->Text);
			Hexagono.Apotema = Convert::ToDouble(this->txt_Apotema->Text);

			txt_Area->Text = Hexagono.AreaHexagono().ToString();
			txt_Perimetro->Text = Hexagono.PerimetroHexagono().ToString();
		}
		catch (...)
		{
			MessageBox::Show("Debes incresar los valores adecuados");
		}
	}

	public: System::Void CalcularHeptagono() {
		Poligono Heptagono = Poligono();
		try
		{
			Heptagono.lado1 = Convert::ToDouble(this->txt_Lado1->Text);
			Heptagono.lado2 = Convert::ToDouble(this->txt_Lado2->Text);
			Heptagono.lado3 = Convert::ToDouble(this->txt_Lado3->Text);
			Heptagono.lado4 = Convert::ToDouble(this->txt_Lado4->Text);
			Heptagono.lado5 = Convert::ToDouble(this->txt_Lado5->Text);
			Heptagono.lado6 = Convert::ToDouble(this->txt_Lado6->Text);
			Heptagono.lado7 = Convert::ToDouble(this->txt_Lado7->Text);
			Heptagono.Apotema = Convert::ToDouble(this->txt_Apotema->Text);

			txt_Area->Text = Heptagono.AreaHeptagono().ToString();
			txt_Perimetro->Text = Heptagono.PerimetroHeptagono().ToString();
		}
		catch (...)
		{
			MessageBox::Show("Debes incresar los valores adecuados");
		}
	}

	public: System::Void CalcularOctagono() {
		Poligono Octagono = Poligono();
		try
		{
			Octagono.lado1 = Convert::ToDouble(this->txt_Lado1->Text);
			Octagono.lado2 = Convert::ToDouble(this->txt_Lado2->Text);
			Octagono.lado3 = Convert::ToDouble(this->txt_Lado3->Text);
			Octagono.lado4 = Convert::ToDouble(this->txt_Lado4->Text);
			Octagono.lado5 = Convert::ToDouble(this->txt_Lado5->Text);
			Octagono.lado6 = Convert::ToDouble(this->txt_Lado6->Text);
			Octagono.lado7 = Convert::ToDouble(this->txt_Lado7->Text);
			Octagono.lado8 = Convert::ToDouble(this->txt_Lado8->Text);
			Octagono.Apotema = Convert::ToDouble(this->txt_Apotema->Text);

			txt_Area->Text = Octagono.AreaOctagono().ToString();
			txt_Perimetro->Text = Octagono.PerimetroOctagono().ToString();
		}
		catch (...)
		{
			MessageBox::Show("Debes incresar los valores adecuados");
		}
	}

	public: System::Void CalcularEneagono() {
		Poligono Eneagono = Poligono();
		try
		{
			Eneagono.lado1 = Convert::ToDouble(this->txt_Lado1->Text);
			Eneagono.lado2 = Convert::ToDouble(this->txt_Lado2->Text);
			Eneagono.lado3 = Convert::ToDouble(this->txt_Lado3->Text);
			Eneagono.lado4 = Convert::ToDouble(this->txt_Lado4->Text);
			Eneagono.lado5 = Convert::ToDouble(this->txt_Lado5->Text);
			Eneagono.lado6 = Convert::ToDouble(this->txt_Lado6->Text);
			Eneagono.lado7 = Convert::ToDouble(this->txt_Lado7->Text);
			Eneagono.lado8 = Convert::ToDouble(this->txt_Lado8->Text);
			Eneagono.lado9 = Convert::ToDouble(this->txt_Lado9->Text);
			Eneagono.Apotema = Convert::ToDouble(this->txt_Apotema->Text);

			txt_Area->Text = Eneagono.AreaEneagono().ToString();
			txt_Perimetro->Text = Eneagono.PerimetroEneagono().ToString();
		}
		catch (...)
		{
			MessageBox::Show("Debes incresar los valores adecuados");
		}
	}

	public: System::Void CalcularDecagono() {
		Poligono Decagono = Poligono();
		try
		{
			Decagono.lado1 = Convert::ToDouble(this->txt_Lado1->Text);
			Decagono.lado2 = Convert::ToDouble(this->txt_Lado2->Text);
			Decagono.lado3 = Convert::ToDouble(this->txt_Lado3->Text);
			Decagono.lado4 = Convert::ToDouble(this->txt_Lado4->Text);
			Decagono.lado5 = Convert::ToDouble(this->txt_Lado5->Text);
			Decagono.lado6 = Convert::ToDouble(this->txt_Lado6->Text);
			Decagono.lado7 = Convert::ToDouble(this->txt_Lado7->Text);
			Decagono.lado8 = Convert::ToDouble(this->txt_Lado8->Text);
			Decagono.lado9 = Convert::ToDouble(this->txt_Lado9->Text);
			Decagono.lado10 = Convert::ToDouble(this->txt_Lado10->Text);
			Decagono.Apotema = Convert::ToDouble(this->txt_Apotema->Text);

			txt_Area->Text = Decagono.AreaDecagono().ToString();
			txt_Perimetro->Text = Decagono.PerimetroDecagono().ToString();
		}
		catch (...)
		{
			MessageBox::Show("Debes incresar los valores adecuados");
		}
	}

private: System::Void txt_Area_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CBox_Poligonos_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {

	int selectedIndex = CBox_Poligonos->SelectedIndex;

	switch (selectedIndex)
	{
	case 0:
		this->ResolvTriangulo();
		break;
	case 1:
		this->ResolvCuadriltero();
		break;
	case 2:
		this->ResolvPentagono();
		break;
	case 3:
		this->ResolvHexagono();
		break;
	case 4:
		this->ResolvHeptagono();
		break;
	case 5:
		this->ResolvOctagono();
		break;
	case 6:
		this->ResolvEneagono();
		break;
	case 7:
		this->ResolvDecagono();
		break;
	default:
		MessageBox::Show("Seleccione alguna figura");
		break;
	}
}
private: System::Void btn_Calcular_Click_1(System::Object^ sender, System::EventArgs^ e) {

	int selectedIndex = CBox_Poligonos->SelectedIndex;
	txt_Perimetro->Text = "0";
	switch (selectedIndex)
	{
	case 0:
		this->CalcularTriangulo();
		break;
	case 1:
		this->CalcularCuadrado();
		break;
	case 2:
		this->CalcularPentagono();
		break;
	case 3:
		this->CalcularHexagono();
		break;
	case 4:
		this->CalcularHeptagono();
		break;
	case 5:
		this->CalcularOctagono();
		break;
	case 6:
		this->CalcularEneagono();
		break;
	case 7:
		this->CalcularDecagono();
		break;
	}
}
}
; };
