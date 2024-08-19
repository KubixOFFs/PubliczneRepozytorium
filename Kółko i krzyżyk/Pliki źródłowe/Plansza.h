#pragma once

#include "Pomoc.h"

namespace KolkoIKrzyzyk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Plansza
	/// </summary>
	public ref class Plansza : public System::Windows::Forms::Form
	{
	public:
		Plansza(void)
		{
			InitializeComponent();
			
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Plansza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ C3;
	protected:
		// zmienne obs³uguj¹ce grê
	private: bool wcisniety=true;
	private: bool wygral=false;
		//liczniki wygranych
	private: int licznikX=0;
	private: int licznikO=0;
	private: String^ mistrz=" ";
	private: System::Windows::Forms::PictureBox^ B3;
	private: System::Windows::Forms::PictureBox^ A3;
	private: System::Windows::Forms::PictureBox^ C2;
	private: System::Windows::Forms::PictureBox^ B2;
	private: System::Windows::Forms::PictureBox^ A2;
	private: System::Windows::Forms::PictureBox^ C1;
	private: System::Windows::Forms::PictureBox^ B1;
	private: System::Windows::Forms::PictureBox^ A1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblLicznikO;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblLicznikX;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Plansza::typeid));
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblLicznikO = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblLicznikX = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// C3
			// 
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(218, 244);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(48, 60);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C3->TabIndex = 29;
			this->C3->TabStop = false;
			this->C3->Tag = L"\?";
			this->C3->Click += gcnew System::EventHandler(this, &Plansza::graj);
			// 
			// B3
			// 
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(113, 252);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(48, 60);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B3->TabIndex = 28;
			this->B3->TabStop = false;
			this->B3->Tag = L"\?";
			this->B3->Click += gcnew System::EventHandler(this, &Plansza::graj);
			// 
			// A3
			// 
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(13, 260);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(48, 60);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A3->TabIndex = 27;
			this->A3->TabStop = false;
			this->A3->Tag = L"\?";
			this->A3->Click += gcnew System::EventHandler(this, &Plansza::graj);
			// 
			// C2
			// 
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(218, 149);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(48, 60);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C2->TabIndex = 26;
			this->C2->TabStop = false;
			this->C2->Tag = L"\?";
			this->C2->Click += gcnew System::EventHandler(this, &Plansza::graj);
			// 
			// B2
			// 
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(110, 152);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(48, 60);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B2->TabIndex = 25;
			this->B2->TabStop = false;
			this->B2->Tag = L"\?";
			this->B2->Click += gcnew System::EventHandler(this, &Plansza::graj);
			// 
			// A2
			// 
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(16, 163);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(48, 60);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A2->TabIndex = 24;
			this->A2->TabStop = false;
			this->A2->Tag = L"\?";
			this->A2->Click += gcnew System::EventHandler(this, &Plansza::graj);
			// 
			// C1
			// 
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(208, 51);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(48, 60);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C1->TabIndex = 23;
			this->C1->TabStop = false;
			this->C1->Tag = L"\?";
			this->C1->Click += gcnew System::EventHandler(this, &Plansza::graj);
			// 
			// B1
			// 
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(110, 51);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(48, 60);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B1->TabIndex = 22;
			this->B1->TabStop = false;
			this->B1->Tag = L"\?";
			this->B1->Click += gcnew System::EventHandler(this, &Plansza::graj);
			// 
			// A1
			// 
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(16, 64);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(48, 60);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A1->TabIndex = 21;
			this->A1->TabStop = false;
			this->A1->Tag = L"\?";
			this->A1->Click += gcnew System::EventHandler(this, &Plansza::graj);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(12, 410);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 33);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Plansza::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(185, 410);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 33);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Nowa Gra";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Plansza::button1_Click);
			// 
			// lblLicznikO
			// 
			this->lblLicznikO->AutoSize = true;
			this->lblLicznikO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikO->Location = System::Drawing::Point(173, 377);
			this->lblLicznikO->Name = L"lblLicznikO";
			this->lblLicznikO->Size = System::Drawing::Size(15, 16);
			this->lblLicznikO->TabIndex = 18;
			this->lblLicznikO->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(148, 350);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Wygrane O:";
			// 
			// lblLicznikX
			// 
			this->lblLicznikX->AutoSize = true;
			this->lblLicznikX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikX->Location = System::Drawing::Point(93, 377);
			this->lblLicznikX->Name = L"lblLicznikX";
			this->lblLicznikX->Size = System::Drawing::Size(15, 16);
			this->lblLicznikX->TabIndex = 16;
			this->lblLicznikX->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 350);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Wygrane X:";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 30;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->zamknijToolStripMenuItem });
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			this->plikToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::plikToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::zamknijToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::pomocToolStripMenuItem_Click);
			// 
			// Plansza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 465);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblLicznikO);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblLicznikX);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Plansza";
			this->Text = L"Plansza";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: Void wygrana()
{
	//wygrana w poziomie
	if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && (A1->Tag != "?")) wygral = true;
	if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && (A2->Tag != "?")) wygral = true;
	if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && (A3->Tag != "?")) wygral = true;

	//wygrana w pionie
	if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && (A1->Tag != "?")) wygral = true;
	if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && (B1->Tag != "?")) wygral = true;
	if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && (C1->Tag != "?")) wygral = true;

	//wygrana przekatne
	if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && (A1->Tag != "?")) wygral = true;
	if ((C1->Tag == B2->Tag) && (B2->Tag == A3->Tag) && (C1->Tag != "?")) wygral = true;

	if (wygral) {
		for each (Control ^ element in this->Controls)
		{
			if (element->GetType() == PictureBox::typeid) element->Enabled = false;
		}
		//jeœli wygra³o kó³ko dodajemy do licznika
		if (wcisniety) {
			licznikO++;
			lblLicznikO->Text = Convert::ToString(licznikO);
			mistrz = "O";
		}
		else {
		//Jeœli wygra³ krzy¿yk dodajemy mu do licznika
			licznikX++;
			lblLicznikX->Text = Convert::ToString(licznikX);
			mistrz = "X";
		}
		MessageBox::Show("Wygrana: " + mistrz, "Kó³ko i Krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
}

private: System::Void graj(System::Object^ sender, System::EventArgs^ e) {

	// rzutowanie obiektu na typ PictureBox - je¿eli siê uda zostanie utworzony obiekt i zostan¹ wykonane na nim operacje
	PictureBox^ zdjecie = (PictureBox^)sender;
	// sprawdzenie kolejnoœci gracza i wybranie odpowiedniej grafiki, zmiana kolejki
	if (wcisniety) {
		zdjecie->Image = imageList1->Images[1];
		zdjecie->Tag = "X";
	}
	else {
		zdjecie->Image = imageList1->Images[0];
		zdjecie->Tag = "O";
	}

	wcisniety = !wcisniety;
	zdjecie->Enabled = false;
	wygrana();
}

private: Void startowa()
{
	for each (Control ^ element in this->Controls)
	{
		try {
			// sprawdzamy czy element jest obrazkiem
			PictureBox^ zdjecie = (PictureBox^)element;
			zdjecie->Enabled = true;
			zdjecie->Tag = "?";
			zdjecie->Image = imageList1->Images[2];
		}
		catch (...)
		{

		}
	}
}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		wygral = false;
		startowa();
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// czyszczenie i resetowanie planszy
	wygral = false;
	startowa();
	licznikO = 0;
	licznikX = 0;
	lblLicznikO->Text = "0";
	lblLicznikX->Text = Convert::ToString(licznikX);
}
private: System::Void pomocToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Pomoc^ okno = gcnew Pomoc();
	okno->Show();
}
private: System::Void plikToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
