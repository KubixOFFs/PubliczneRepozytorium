#pragma once

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Gra
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
	public:
		Gra(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~Gra()
		{
			if (components)
			{
				delete components;
			}
		}
		//zmienne obs�uguj�ce gr�
	private: bool blokada = false;
	private: int x = 0, y = 0, zycia = 3, punkty = 0, cegly = 0;
	private: char kierunek;
	private: System::Windows::Forms::Timer^ zegar;
		   ////////////////////////////////////////////////////

	protected:
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ picKoniec;
	private: System::Windows::Forms::PictureBox^ deska;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::PictureBox^ pictureBox39;
	private: System::Windows::Forms::PictureBox^ pictureBox40;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ picPrzegrana;
	private: System::Windows::Forms::PictureBox^ picNowa;
	private: System::Windows::Forms::Label^ lblZycia;
	private: System::Windows::Forms::Label^ lblPunkty;
	private: System::Windows::Forms::PictureBox^ pilka;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
		/// jej zawarto�ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->zegar = (gcnew System::Windows::Forms::Timer(this->components));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->picKoniec = (gcnew System::Windows::Forms::PictureBox());
			this->deska = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->picPrzegrana = (gcnew System::Windows::Forms::PictureBox());
			this->picNowa = (gcnew System::Windows::Forms::PictureBox());
			this->lblZycia = (gcnew System::Windows::Forms::Label());
			this->lblPunkty = (gcnew System::Windows::Forms::Label());
			this->pilka = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picKoniec))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deska))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPrzegrana))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picNowa))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilka))->BeginInit();
			this->SuspendLayout();
			// 
			// zegar
			// 
			this->zegar->Enabled = true;
			this->zegar->Interval = 20;
			this->zegar->Tick += gcnew System::EventHandler(this, &Gra::zegar_Tick);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"blok_czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"blok_metal.png");
			this->imageList1->Images->SetKeyName(2, L"blok_metal_rozbity.png");
			this->imageList1->Images->SetKeyName(3, L"blok_niebieski.png");
			this->imageList1->Images->SetKeyName(4, L"blok_zielony.png");
			this->imageList1->Images->SetKeyName(5, L"blok_zolty.png");
			// 
			// picKoniec
			// 
			this->picKoniec->BackColor = System::Drawing::Color::Transparent;
			this->picKoniec->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picKoniec->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picKoniec.Image")));
			this->picKoniec->Location = System::Drawing::Point(231, 291);
			this->picKoniec->Name = L"picKoniec";
			this->picKoniec->Size = System::Drawing::Size(199, 85);
			this->picKoniec->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picKoniec->TabIndex = 51;
			this->picKoniec->TabStop = false;
			this->picKoniec->Visible = false;
			this->picKoniec->Click += gcnew System::EventHandler(this, &Gra::picKoniec_Click);
			// 
			// deska
			// 
			this->deska->BackColor = System::Drawing::Color::Transparent;
			this->deska->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deska.Image")));
			this->deska->Location = System::Drawing::Point(252, 466);
			this->deska->Name = L"deska";
			this->deska->Size = System::Drawing::Size(133, 28);
			this->deska->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->deska->TabIndex = 48;
			this->deska->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(600, 81);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(76, 36);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox36->TabIndex = 93;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Tag = L"t";
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(600, 123);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(76, 36);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox37->TabIndex = 92;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Tag = L"c";
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(600, 165);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(76, 36);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox38->TabIndex = 91;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Tag = L"c";
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(600, 207);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(76, 36);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox39->TabIndex = 90;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Tag = L"c";
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(600, 249);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(76, 36);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox40->TabIndex = 89;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Tag = L"c";
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(518, 81);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(76, 36);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 88;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"t";
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(518, 123);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(76, 36);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 87;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"c";
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(518, 165);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(76, 36);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 86;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Tag = L"c";
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(518, 207);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(76, 36);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 85;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Tag = L"c";
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(518, 249);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(76, 36);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox35->TabIndex = 84;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Tag = L"c";
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(436, 81);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(76, 36);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 83;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"t";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(436, 123);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(76, 36);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 82;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Tag = L"c";
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(436, 165);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(76, 36);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 81;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Tag = L"c";
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(436, 207);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(76, 36);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 80;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"c";
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(436, 249);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(76, 36);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 79;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Tag = L"c";
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(354, 81);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(76, 36);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 78;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"t";
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(354, 123);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(76, 36);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 77;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"c";
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(354, 165);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(76, 36);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 76;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"c";
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(354, 207);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(76, 36);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 75;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"c";
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(354, 249);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(76, 36);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 74;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"c";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(272, 81);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(76, 36);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 73;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"t";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(272, 123);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(76, 36);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 72;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"c";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(272, 165);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(76, 36);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 71;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"c";
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(272, 207);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(76, 36);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 70;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"c";
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(272, 249);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(76, 36);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 69;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"c";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(190, 81);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(76, 36);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 68;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"t";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(190, 123);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(76, 36);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 67;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"c";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(190, 165);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(76, 36);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 66;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"c";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(190, 207);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(76, 36);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 65;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"c";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(190, 249);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(76, 36);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 64;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"c";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(108, 81);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(76, 36);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 63;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"t";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(108, 123);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(76, 36);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 62;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"c";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(108, 165);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(76, 36);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 61;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"c";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(108, 207);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(76, 36);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 60;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"c";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(108, 249);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(76, 36);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 59;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"c";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(26, 81);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 58;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"t";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(26, 123);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 57;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"c";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(26, 165);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 56;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"c";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(26, 207);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(76, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 55;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"c";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 249);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"c";
			// 
			// picPrzegrana
			// 
			this->picPrzegrana->BackColor = System::Drawing::Color::Transparent;
			this->picPrzegrana->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picPrzegrana.Image")));
			this->picPrzegrana->Location = System::Drawing::Point(451, 300);
			this->picPrzegrana->Name = L"picPrzegrana";
			this->picPrzegrana->Size = System::Drawing::Size(251, 200);
			this->picPrzegrana->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picPrzegrana->TabIndex = 53;
			this->picPrzegrana->TabStop = false;
			this->picPrzegrana->Visible = false;
			// 
			// picNowa
			// 
			this->picNowa->BackColor = System::Drawing::Color::Transparent;
			this->picNowa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picNowa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picNowa.Image")));
			this->picNowa->Location = System::Drawing::Point(231, 374);
			this->picNowa->Name = L"picNowa";
			this->picNowa->Size = System::Drawing::Size(199, 86);
			this->picNowa->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picNowa->TabIndex = 52;
			this->picNowa->TabStop = false;
			this->picNowa->Visible = false;
			this->picNowa->Click += gcnew System::EventHandler(this, &Gra::picNowa_Click);
			// 
			// lblZycia
			// 
			this->lblZycia->AutoSize = true;
			this->lblZycia->BackColor = System::Drawing::Color::Transparent;
			this->lblZycia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblZycia->ForeColor = System::Drawing::Color::White;
			this->lblZycia->Location = System::Drawing::Point(654, 20);
			this->lblZycia->Name = L"lblZycia";
			this->lblZycia->Size = System::Drawing::Size(27, 29);
			this->lblZycia->TabIndex = 50;
			this->lblZycia->Text = L"3";
			// 
			// lblPunkty
			// 
			this->lblPunkty->AutoSize = true;
			this->lblPunkty->BackColor = System::Drawing::Color::Transparent;
			this->lblPunkty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblPunkty->ForeColor = System::Drawing::Color::White;
			this->lblPunkty->Location = System::Drawing::Point(466, 20);
			this->lblPunkty->Name = L"lblPunkty";
			this->lblPunkty->Size = System::Drawing::Size(55, 29);
			this->lblPunkty->TabIndex = 49;
			this->lblPunkty->Text = L"000";
			// 
			// pilka
			// 
			this->pilka->BackColor = System::Drawing::Color::Transparent;
			this->pilka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pilka.Image")));
			this->pilka->Location = System::Drawing::Point(283, 441);
			this->pilka->Name = L"pilka";
			this->pilka->Size = System::Drawing::Size(25, 25);
			this->pilka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pilka->TabIndex = 47;
			this->pilka->TabStop = false;
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(704, 501);
			this->Controls->Add(this->picKoniec);
			this->Controls->Add(this->deska);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->picPrzegrana);
			this->Controls->Add(this->picNowa);
			this->Controls->Add(this->lblZycia);
			this->Controls->Add(this->lblPunkty);
			this->Controls->Add(this->pilka);
			this->Name = L"Gra";
			this->Text = L"Gra";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::ruszajDeska);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::Gra_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picKoniec))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deska))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPrzegrana))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picNowa))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilka))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: Void zagraj(String^ dzwiek) {
	// zagranie d�wi�ku z podanej lokalizacji
	try {
		System::Media::SoundPlayer^ graj = gcnew System::Media::SoundPlayer();
		graj->SoundLocation = dzwiek;
		graj->Load();
		graj->Play();
	}
	catch (...)
	{
		//
	}

}

	private: Void zbij_cegle(System::Windows::Forms::Control^ cegla) {
		//sprawdzenie czy pi�ka uderza w ceg�e
		if ((pilka->Top + pilka->Height > cegla->Top) &&
			(pilka->Top < cegla->Top + cegla->Height) &&
			(pilka->Left + pilka->Width > cegla->Left) &&
			(pilka->Left < cegla->Left + cegla->Width) &&
			(cegla->Visible == true)) {
			//odbicie pi�ki od ceg�y - zmiana kirunku y
			y = -y;

			if (cegla->Tag != "t") {
				//usuni�cie ceg�y przy trafieniu
				cegla->Visible = false;
				punkty += 10;
				//zliczam rozbite ceg�y:
				cegly += 1;
				// d�wi�k:
				zagraj("../dzwieki/zbicie.wav");

			}
			else
			{
				if (x > 0) {
					x += 1;
				}
				else {
					x -= 1;
				}
				if (y > 0) {
					y += 1;
				}
				else {
					y -= 1;
				}
				PictureBox^ ceglaRozbita = (PictureBox^)cegla;
				ceglaRozbita->Image = imageList1->Images[2];
				//za�adowanie przyspieszonej pi�ki
				pilka->Image = Image::FromFile("../grafiki/pilka_power.png");
				//zmiana nagu na rozbit� ceg�e
				cegla->Tag = "ct";
				punkty += 20;
				// d�wi�k:
				zagraj("../dzwieki/kruszenie.wav");
			}

		}
		lblPunkty->Text = "" + punkty;
		//warunek wygranej
		if (cegly == 40) {
			// d�wi�k:
			zagraj("../dzwieki/wygrana.wav");
			zegar->Enabled = false;
			picKoniec->Visible = true;
			picNowa->Visible = true;
			cegly = 0;
			Gra::BackgroundImage = Image::FromFile("../grafiki/tlo_koniec.png");
		}
	}

	private: System::Void zegar_Tick(System::Object^ sender, System::EventArgs^ e) {
		for each (Control ^ element in this->Controls)
		{

			if (element->Tag == "c" || element->Tag == "t" || element->Tag == "ct")
			{
				zbij_cegle(element);
			}
		}
		// ruch pi�ki:
		pilka->Left += x;
		pilka->Top += y;

		// odbicie od �cianki prawej:
		if (pilka->Left >= Gra::Width - pilka->Width) x = -x;


		// odbicie od �cianki g�rnej
		if (pilka->Top <= 75) y = -y;

		// odbicie od �cianki lewej:
		if (pilka->Left <= 5) x = -x;

		// ruch deski w prawo:
		if ((kierunek == 'P') && (deska->Left < Gra::Width - deska->Width - 15)) {
			deska->Left += 20;
			if ((x == 0) && (y == 0)) pilka->Left += 20;
		}

		// ruch deski w lewo:
		if ((kierunek == 'L') && (deska->Left > 0)) {
			deska->Left -= 20;
			if ((x == 0) && (y == 0)) pilka->Left -= 20;
		}


		// odbicie od deski:
		if ((pilka->Left + (pilka->Width / 2) > deska->Left) && (pilka->Left < deska->Left + deska->Width) && (pilka->Top + pilka->Height > deska->Top)) {
			y = -y;
			// d�wi�k:
			zagraj("../dzwieki/paletka.wav");
		}
		// utrata pi�ki:
		else if (pilka->Top + pilka->Height > deska->Top) {

			zegar->Enabled = false;
			pilka->Visible = false;

			punkty -= 50;
			zycia -= 1;

			lblPunkty->Text = "" + punkty;

			if (zycia > 0) {

				MessageBox::Show("Zgubiona pi�ka!!!", "Strefanoid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				pilka->Top = deska->Top - pilka->Height - 3;
				pilka->Left = deska->Left + deska->Width / 2;
				x = 0;
				y = 0;
				zegar->Enabled = true;
				pilka->Visible = true;
				lblZycia->Text = "" + zycia;
				blokada = false;
				pilka->Image = Image::FromFile("../grafiki/pilka.png");

			}
			else {
				// d�wi�k:
				zagraj("../dzwieki/smiech.wav");
				lblZycia->Text = ":(";
				picPrzegrana->Visible = true;
				picKoniec->Visible = true;
				picNowa->Visible = true;

			}
		}
	}
	private: Void ruszajDeska(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Left) kierunek = 'L';
		if (e->KeyCode == Keys::Right)	kierunek = 'P';
		if ((e->KeyCode == Keys::Space) && (blokada == false))
		{
			x = -5;
			y = -5;
			blokada = true;
		}
	}
	
private: System::Void Gra_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	kierunek = 'S';
}
private: System::Void picKoniec_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void picNowa_Click(System::Object^ sender, System::EventArgs^ e) {
	// resetowanie ustawie� gry
	zycia = 3;
	punkty = 0;

	pilka->Image = Image::FromFile("../grafiki/pilka.png");


	lblPunkty->Text = "" + punkty;
	lblZycia->Text = "" + zycia;
	picPrzegrana->Visible = false;
	picKoniec->Visible = false;
	picNowa->Visible = false;

	pilka->Top = deska->Top - pilka->Height - 3;
	pilka->Left = deska->Left + deska->Width / 2;

	pilka->Visible = true;
	zegar->Enabled = true;

	x = 0;
	y = 0;

	blokada = false;

	Gra::BackgroundImage = Image::FromFile("../grafiki/tlo_gra_01.png");

	for each (Control ^ elementy in this->Controls) {
		if (elementy->Tag == "c" || elementy->Tag == "t" || elementy->Tag == "ct") elementy->Visible = true;
		if (elementy->Tag == "ct")
		{
			elementy->Tag = "t";
			PictureBox^ obraz = (PictureBox^)elementy;
			obraz->Image = imageList1->Images[1];
		}
	}
}
};
}
