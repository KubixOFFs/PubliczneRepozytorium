#pragma once
#include "Pomoc.h"
#include "Finansowy.h"
namespace ProjektKalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Kalkulator
	/// </summary>
	public ref class Kalkulator : public System::Windows::Forms::Form
	{
	public:
		Kalkulator(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			Kalkulator::Width = 300;
			Kalkulator::Height = 425;
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~Kalkulator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtOkno;
	protected:

	protected:

	protected:
	private: double pierwsza, druga, wynik, testuj;
	private: char operacja;
	private: bool status = false;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ okienkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ finansowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Kalkulator::typeid));
			this->txtOkno = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okienkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finansowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtOkno
			// 
			this->txtOkno->BackColor = System::Drawing::Color::Gray;
			this->txtOkno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtOkno->ForeColor = System::Drawing::Color::White;
			this->txtOkno->Location = System::Drawing::Point(6, 33);
			this->txtOkno->Name = L"txtOkno";
			this->txtOkno->Size = System::Drawing::Size(270, 62);
			this->txtOkno->TabIndex = 1;
			this->txtOkno->Text = L"0";
			this->txtOkno->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtOkno->SelectionStart = this->txtOkno->Text->Length;
			this->txtOkno->DeselectAll();
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::DarkOrange;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(222, 105);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 55);
			this->button18->TabIndex = 43;
			this->button18->Text = L"√";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Kalkulator::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::DarkOrange;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(222, 159);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 55);
			this->button19->TabIndex = 42;
			this->button19->Text = L"a²";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Kalkulator::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DarkOrange;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->Location = System::Drawing::Point(222, 213);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 55);
			this->button20->TabIndex = 41;
			this->button20->Text = L"%";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Kalkulator::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DarkOrange;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->Location = System::Drawing::Point(222, 267);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 109);
			this->button21->TabIndex = 40;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Kalkulator::button21_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Silver;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(168, 105);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 55);
			this->button17->TabIndex = 39;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Kalkulator::button17_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Silver;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(114, 105);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 55);
			this->button15->TabIndex = 38;
			this->button15->Text = L"CE";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Kalkulator::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Silver;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(6, 105);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(109, 55);
			this->button16->TabIndex = 37;
			this->button16->Text = L"C";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Kalkulator::button16_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightGray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(168, 159);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 55);
			this->button13->TabIndex = 36;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Kalkulator::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LightGray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(168, 213);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 55);
			this->button14->TabIndex = 35;
			this->button14->Text = L"x";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Kalkulator::button14_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LightGray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(168, 267);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 109);
			this->button12->TabIndex = 34;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Kalkulator::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LightGray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(114, 321);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 55);
			this->button11->TabIndex = 33;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Kalkulator::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightGray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(6, 321);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(109, 55);
			this->button10->TabIndex = 32;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Kalkulator::button10_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightGray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(114, 159);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 55);
			this->button7->TabIndex = 31;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Kalkulator::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightGray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(60, 159);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 55);
			this->button8->TabIndex = 30;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Kalkulator::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LightGray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(6, 159);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 55);
			this->button9->TabIndex = 29;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Kalkulator::button9_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(114, 213);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 55);
			this->button4->TabIndex = 28;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Kalkulator::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightGray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(60, 213);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 27;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Kalkulator::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightGray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(6, 213);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 55);
			this->button6->TabIndex = 26;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Kalkulator::button6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(114, 267);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 55);
			this->button3->TabIndex = 25;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Kalkulator::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(60, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 55);
			this->button2->TabIndex = 24;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Kalkulator::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(6, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 55);
			this->button1->TabIndex = 23;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Kalkulator::button1_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::LightGray;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->Location = System::Drawing::Point(302, 159);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(120, 55);
			this->button24->TabIndex = 47;
			this->button24->Text = L"netto→brutto";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Kalkulator::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::LightGray;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->Location = System::Drawing::Point(302, 213);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(120, 55);
			this->button25->TabIndex = 46;
			this->button25->Text = L"brutto→netto";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Kalkulator::button25_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::LightGray;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->Location = System::Drawing::Point(302, 267);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(120, 55);
			this->button23->TabIndex = 45;
			this->button23->Text = L"marża";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Kalkulator::button23_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::LightGray;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->Location = System::Drawing::Point(302, 321);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(120, 55);
			this->button22->TabIndex = 44;
			this->button22->Text = L"narzut";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Kalkulator::button22_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 451);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 130);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::DarkOrange;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button26->Location = System::Drawing::Point(156, 436);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(120, 55);
			this->button26->TabIndex = 50;
			this->button26->Text = L"dodawanie";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Kalkulator::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::DarkOrange;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->Location = System::Drawing::Point(156, 490);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(120, 55);
			this->button27->TabIndex = 49;
			this->button27->Text = L"odejmowanie";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Kalkulator::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::DarkOrange;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->Location = System::Drawing::Point(156, 544);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(120, 55);
			this->button28->TabIndex = 48;
			this->button28->Text = L"mnożenie";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Kalkulator::button28_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(434, 24);
			this->menuStrip1->TabIndex = 52;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okienkoToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->plikToolStripMenuItem->Text = L"Program";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::przypnijToolStripMenuItem_Click);
			// 
			// okienkoToolStripMenuItem
			// 
			this->okienkoToolStripMenuItem->Name = L"okienkoToolStripMenuItem";
			this->okienkoToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->okienkoToolStripMenuItem->Text = L"Okienko";
			this->okienkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::okienkoToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::zamknijToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standardToolStripMenuItem,
					this->finansowyToolStripMenuItem, this->graToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::standardToolStripMenuItem_Click);
			// 
			// finansowyToolStripMenuItem
			// 
			this->finansowyToolStripMenuItem->Name = L"finansowyToolStripMenuItem";
			this->finansowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->finansowyToolStripMenuItem->Text = L"Finansowy";
			this->finansowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::finansowyToolStripMenuItem_Click);
			// 
			// graToolStripMenuItem
			// 
			this->graToolStripMenuItem->Name = L"graToolStripMenuItem";
			this->graToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->graToolStripMenuItem->Text = L"Gra";
			this->graToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::graToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::pomocToolStripMenuItem_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"pytajnik.png");
			this->imageList1->Images->SetKeyName(1, L"zle.png");
			this->imageList1->Images->SetKeyName(2, L"dobrze.png");
			// 
			// Kalkulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(434, 611);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtOkno);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Kalkulator";
			this->Text = L"Kalkulator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void Losowanie(int Start, int Stop, String^ Znak) {
	Random^ losuj = gcnew Random;
	pierwsza = losuj->Next(Start, Stop);
	if (Znak != "-") {
		druga = losuj->Next(Start, Stop);
	}
	else {
		druga = losuj->Next(Start, pierwsza);
	}
	this->txtOkno->Text = pierwsza + Znak + druga + " = ?";
	pictureBox1->Image = imageList1->Images[0];
	status = true;
	operacja = 't';
}
private: Void Wypisz(String^ liczba) {
	// wypisuje cyfry na ekranie kalkulatora
	if (txtOkno->Text == "0" || status) {

		txtOkno->Text = liczba;
	}
	else
	{
		this->txtOkno->Text += liczba;
	}
	status = false;

}
private: void Klawisze(bool Widok) {
		// ukrywa lub odkrywa klawisze w zależności od intencji
		button12->Visible = Widok; //+
		button13->Visible = Widok; // -
		button14->Visible = Widok; // x
		button17->Visible = Widok; // /
		button18->Visible = Widok; // sqrt
		button19->Visible = Widok; // ^2
		button20->Visible = Widok; // %
	}

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	wynik = Math::Sqrt(pierwsza);
	this->txtOkno->Text = Convert::ToString(wynik);
	status = true;
	}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	// wynik = pierwsza * pierwsza;
	wynik = Math::Pow(pierwsza, 2);
	this->txtOkno->Text = Convert::ToString(wynik);
	status = true;
	}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	status = true;
	operacja = 'p';
}

private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	druga = Convert::ToDouble(txtOkno->Text);

	switch (operacja)
	{
	case '+':
		// dodawanie
		wynik = pierwsza + druga;
		break;
	case '-':
		// odejmowanie
		wynik = pierwsza - druga;
		break;
	case '*':
		// mnożenie
		wynik = pierwsza * druga;
		break;
	case '/':
		// dzielenie
		if (druga == 0) {
			MessageBox::Show("Dzielenie przez zero jest niewykonalne!");
		}
		else {
			wynik = pierwsza / druga;
		}
		break;
	case 'p':
		//oblliczanie procent (liczba -> procent)
		wynik = (pierwsza / 100) * druga;
		break;
	case 'b':
		// obliczanie kwoty brutto na podstawie netto i stawki VAT
		wynik = pierwsza * (1 + (druga / 100));
		break;
	case 'n':
		// obliczenie kwoty netto na podstawie brutto i stawki VAT
		wynik = pierwsza / (1 + (druga / 100));
		break;
	case 'm':
		// obliczenie marży
		//marża = cena sprzedaży - cena zakupu / cena sprzedaży
		wynik = ((druga - pierwsza) / druga) * 100;
		break;
	case 'x':
		// obliczenie narzutu
		//narzut = cena sprzedaży - cena zakupu / cena cena zakupu
		wynik = ((druga - pierwsza) / pierwsza) * 100;
		break;
	case 't':
		if (druga == testuj) {
			this->txtOkno->Text = "Dobrze!";
			this->pictureBox1->Image = imageList1->Images[2];
		}
		else {
			this->txtOkno->Text = "źle...";
			this->pictureBox1->Image = imageList1->Images[1];
		}
		break;
	default:
		// brak akcji
		break;
	}

	status = true;

	if (operacja != 't') {
		this->txtOkno->Text = Convert::ToString(wynik);
	}
	}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	this->txtOkno->Text = "0";
	operacja = '/';
	status = true;
	}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtOkno->Text = "0";
	}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtOkno->Text = "0";
	pierwsza = 0;
	druga = 0;
	status = false;
	}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	this->txtOkno->Text = "0";
	operacja = '-';
	status = true;
	}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	this->txtOkno->Text = "0";
	operacja = '*';
	status = true;
	}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	this->txtOkno->Text = "0";
	operacja = '+';
	status = true;
	}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz(",");
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("0");
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("9");
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("8");
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("7");
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("6");
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("5");
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("4");
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("3");
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("2");
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("1");
	}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtOkno->Text == "0")
		MessageBox::Show("Nie podano kwoty lub wynosi 0");
	else{
	pierwsza = Convert::ToDouble(txtOkno->Text);
	MessageBox::Show("Teraz wprowadź wysokość podatku w %");
	status = true;
	operacja = 'b';
	}
	}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtOkno->Text == "0")
		MessageBox::Show("Nie podano kwoty lub wynosi 0");
	else{
	pierwsza = Convert::ToDouble(txtOkno->Text);
	MessageBox::Show("Teraz wprowadź wysokość podatku w %");
	status = true;
	operacja = 'n';
	}
	}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtOkno->Text == "0")
		MessageBox::Show("Nie podano kwoty lub wynosi 0");
	else {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	MessageBox::Show("Teraz wprowadź marże");
	status = true;
	operacja = 'm';
	}
	}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtOkno->Text == "0")
		MessageBox::Show("Nie podano kwoty lub wynosi 0");
	else{
	pierwsza = Convert::ToDouble(txtOkno->Text);
	MessageBox::Show("Teraz wprowadź narzut");
	status = true;
	operacja = 'x';
	}
	}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	Losowanie(1, 20, "+");
	testuj = pierwsza + druga;
	}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	Losowanie(1, 20, "-");
	testuj = pierwsza - druga;
	}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	Losowanie(1, 10, "*");
	testuj = pierwsza * druga;
	}

private: System::Void pomocToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Pomoc^ okno = gcnew Pomoc();
	okno->Show();
}

private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Kalkulator::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	TopMost = true;
}
private: System::Void okienkoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Kalkulator::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	TopMost = false;
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Czy wyłączyć kalkulator?", "Kalkulator", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void standardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Kalkulator::Width = 300;
	Kalkulator::Height = 425;
	Klawisze(true);
	txtOkno->Text = "0";
}
private: System::Void finansowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Finansowy^ okno = gcnew Finansowy();
	okno->Show();
	Kalkulator::Width = 460;
	Kalkulator::Height = 425;
	Klawisze(true);
	txtOkno->Text = "0";
}
private: System::Void graToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Kalkulator::Width = 300;
	Kalkulator::Height = 650;
	this->txtOkno->Text = "Zagramy?";
	Klawisze(false);
}

};
}
