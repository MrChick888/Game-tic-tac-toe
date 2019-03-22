#pragma once

namespace Game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^  Box3;
	private: System::Windows::Forms::PictureBox^  Box6;

	private: System::Windows::Forms::PictureBox^  Box5;


	private: System::Windows::Forms::PictureBox^  Box9;



	private: System::Windows::Forms::PictureBox^  Box7;
	private: System::Windows::Forms::PictureBox^  Box4;

	private: System::Windows::Forms::PictureBox^  Box2;
	private: System::Windows::Forms::PictureBox^  Box1;
	private: System::Windows::Forms::PictureBox^  Box8;
	private: System::Windows::Forms::PictureBox^  Start;
	private: System::Windows::Forms::PictureBox^  Tura;
	private: System::Windows::Forms::PictureBox^  Counter;
	private: System::Windows::Forms::PictureBox^  Button;














	protected:

	protected:
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Box3 = (gcnew System::Windows::Forms::PictureBox());
			this->Box6 = (gcnew System::Windows::Forms::PictureBox());
			this->Box5 = (gcnew System::Windows::Forms::PictureBox());
			this->Box9 = (gcnew System::Windows::Forms::PictureBox());
			this->Box7 = (gcnew System::Windows::Forms::PictureBox());
			this->Box4 = (gcnew System::Windows::Forms::PictureBox());
			this->Box2 = (gcnew System::Windows::Forms::PictureBox());
			this->Box1 = (gcnew System::Windows::Forms::PictureBox());
			this->Box8 = (gcnew System::Windows::Forms::PictureBox());
			this->Start = (gcnew System::Windows::Forms::PictureBox());
			this->Tura = (gcnew System::Windows::Forms::PictureBox());
			this->Counter = (gcnew System::Windows::Forms::PictureBox());
			this->Button = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tura))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Counter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Button))->BeginInit();
			this->SuspendLayout();
			// 
			// Box3
			// 
			this->Box3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box3.Image")));
			this->Box3->InitialImage = nullptr;
			this->Box3->Location = System::Drawing::Point(368, 232);
			this->Box3->Margin = System::Windows::Forms::Padding(0);
			this->Box3->Name = L"Box3";
			this->Box3->Size = System::Drawing::Size(160, 160);
			this->Box3->TabIndex = 2;
			this->Box3->TabStop = false;
			this->Box3->Click += gcnew System::EventHandler(this, &MyForm::Box3_Click);
			// 
			// Box6
			// 
			this->Box6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box6.Image")));
			this->Box6->InitialImage = nullptr;
			this->Box6->Location = System::Drawing::Point(368, 400);
			this->Box6->Margin = System::Windows::Forms::Padding(0);
			this->Box6->Name = L"Box6";
			this->Box6->Size = System::Drawing::Size(160, 160);
			this->Box6->TabIndex = 5;
			this->Box6->TabStop = false;
			this->Box6->Click += gcnew System::EventHandler(this, &MyForm::Box6_Click);
			// 
			// Box5
			// 
			this->Box5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box5.Image")));
			this->Box5->InitialImage = nullptr;
			this->Box5->Location = System::Drawing::Point(200, 400);
			this->Box5->Margin = System::Windows::Forms::Padding(0);
			this->Box5->Name = L"Box5";
			this->Box5->Size = System::Drawing::Size(160, 160);
			this->Box5->TabIndex = 4;
			this->Box5->TabStop = false;
			this->Box5->Click += gcnew System::EventHandler(this, &MyForm::Box5_Click);
			// 
			// Box9
			// 
			this->Box9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box9.Image")));
			this->Box9->InitialImage = nullptr;
			this->Box9->Location = System::Drawing::Point(368, 568);
			this->Box9->Margin = System::Windows::Forms::Padding(0);
			this->Box9->Name = L"Box9";
			this->Box9->Size = System::Drawing::Size(160, 160);
			this->Box9->TabIndex = 8;
			this->Box9->TabStop = false;
			this->Box9->Click += gcnew System::EventHandler(this, &MyForm::Box9_Click);
			// 
			// Box7
			// 
			this->Box7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box7.Image")));
			this->Box7->InitialImage = nullptr;
			this->Box7->Location = System::Drawing::Point(32, 568);
			this->Box7->Margin = System::Windows::Forms::Padding(0);
			this->Box7->Name = L"Box7";
			this->Box7->Size = System::Drawing::Size(160, 160);
			this->Box7->TabIndex = 6;
			this->Box7->TabStop = false;
			this->Box7->Click += gcnew System::EventHandler(this, &MyForm::Box7_Click);
			// 
			// Box4
			// 
			this->Box4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box4.Image")));
			this->Box4->InitialImage = nullptr;
			this->Box4->Location = System::Drawing::Point(32, 400);
			this->Box4->Margin = System::Windows::Forms::Padding(0);
			this->Box4->Name = L"Box4";
			this->Box4->Size = System::Drawing::Size(160, 160);
			this->Box4->TabIndex = 3;
			this->Box4->TabStop = false;
			this->Box4->Click += gcnew System::EventHandler(this, &MyForm::Box4_Click);
			// 
			// Box2
			// 
			this->Box2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box2.Image")));
			this->Box2->InitialImage = nullptr;
			this->Box2->Location = System::Drawing::Point(200, 232);
			this->Box2->Margin = System::Windows::Forms::Padding(0);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(160, 160);
			this->Box2->TabIndex = 9;
			this->Box2->TabStop = false;
			this->Box2->Click += gcnew System::EventHandler(this, &MyForm::Box2_Click);
			// 
			// Box1
			// 
			this->Box1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box1.Image")));
			this->Box1->InitialImage = nullptr;
			this->Box1->Location = System::Drawing::Point(32, 232);
			this->Box1->Margin = System::Windows::Forms::Padding(0);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(160, 160);
			this->Box1->TabIndex = 10;
			this->Box1->TabStop = false;
			this->Box1->Click += gcnew System::EventHandler(this, &MyForm::Box1_Click);
			// 
			// Box8
			// 
			this->Box8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Box8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box8.Image")));
			this->Box8->InitialImage = nullptr;
			this->Box8->Location = System::Drawing::Point(200, 568);
			this->Box8->Margin = System::Windows::Forms::Padding(0);
			this->Box8->Name = L"Box8";
			this->Box8->Size = System::Drawing::Size(160, 160);
			this->Box8->TabIndex = 11;
			this->Box8->TabStop = false;
			this->Box8->Click += gcnew System::EventHandler(this, &MyForm::Box8_Click);
			// 
			// Start
			// 
			this->Start->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Start->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Start.Image")));
			this->Start->ImageLocation = L"";
			this->Start->Location = System::Drawing::Point(114, 77);
			this->Start->Margin = System::Windows::Forms::Padding(0);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(29, 29);
			this->Start->TabIndex = 12;
			this->Start->TabStop = false;
			// 
			// Tura
			// 
			this->Tura->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Tura->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tura.Image")));
			this->Tura->ImageLocation = L"";
			this->Tura->Location = System::Drawing::Point(153, 112);
			this->Tura->Margin = System::Windows::Forms::Padding(0);
			this->Tura->Name = L"Tura";
			this->Tura->Size = System::Drawing::Size(29, 29);
			this->Tura->TabIndex = 13;
			this->Tura->TabStop = false;
			// 
			// Counter
			// 
			this->Counter->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Counter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Counter.Image")));
			this->Counter->ImageLocation = L"";
			this->Counter->Location = System::Drawing::Point(159, 149);
			this->Counter->Margin = System::Windows::Forms::Padding(0);
			this->Counter->Name = L"Counter";
			this->Counter->Size = System::Drawing::Size(29, 29);
			this->Counter->TabIndex = 14;
			this->Counter->TabStop = false;
			// 
			// Button
			// 
			this->Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button.Image")));
			this->Button->ImageLocation = L"";
			this->Button->Location = System::Drawing::Point(368, 62);
			this->Button->Margin = System::Windows::Forms::Padding(0);
			this->Button->Name = L"Button";
			this->Button->Size = System::Drawing::Size(160, 116);
			this->Button->TabIndex = 15;
			this->Button->TabStop = false;
			this->Button->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Button->MouseLeave += gcnew System::EventHandler(this, &MyForm::Button_MouseLeave);
			this->Button->MouseHover += gcnew System::EventHandler(this, &MyForm::Button_MouseHover);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(554, 763);
			this->Controls->Add(this->Button);
			this->Controls->Add(this->Counter);
			this->Controls->Add(this->Tura);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->Box8);
			this->Controls->Add(this->Box1);
			this->Controls->Add(this->Box2);
			this->Controls->Add(this->Box9);
			this->Controls->Add(this->Box7);
			this->Controls->Add(this->Box6);
			this->Controls->Add(this->Box5);
			this->Controls->Add(this->Box4);
			this->Controls->Add(this->Box3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kó³ko i krzy¿yk";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tura))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Counter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Button))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		char p1, p2, p3, p4, p5, p6, p7, p8, p9;
		char who;
		int licznik = 0;

		void check()
		{
			if ((p1 == p2 && p2 == p3 && p1 != 'n') ||
				(p4 == p5 && p5 == p6 && p4 != 'n') ||
				(p7 == p8 && p8 == p9 && p7 != 'n') ||
				(p1 == p4 && p4 == p7 && p1 != 'n') ||
				(p2 == p5 && p5 == p8 && p2 != 'n') ||
				(p3 == p6 && p6 == p9 && p3 != 'n') ||
				(p1 == p5 && p5 == p9 && p1 != 'n') ||
				(p3 == p5 && p5 == p7 && p3 != 'n'))
			{
				if (who == 'o')
				{
					MessageBox::Show("Wygrywa krzy¿yk! Koniec gry!", "Wynik", MessageBoxButtons::OK, MessageBoxIcon::Information);
					Box1->Enabled = false;
					Box2->Enabled = false;
					Box3->Enabled = false;
					Box4->Enabled = false;
					Box5->Enabled = false;
					Box6->Enabled = false;
					Box7->Enabled = false;
					Box8->Enabled = false;
					Box9->Enabled = false;
				}
				if (who == 'x')
				{
					MessageBox::Show("Wygrywa kó³ko! Koniec gry!", "Wynik", MessageBoxButtons::OK, MessageBoxIcon::Information);
					Box1->Enabled = false;
					Box2->Enabled = false;
					Box3->Enabled = false;
					Box4->Enabled = false;
					Box5->Enabled = false;
					Box6->Enabled = false;
					Box7->Enabled = false;
					Box8->Enabled = false;
					Box9->Enabled = false;
				}
			}
			else if (p1 != 'n'&&p2 != 'n'&&p3 != 'n'&&p4 != 'n'&&p5 != 'n'&&p6 != 'n'&&p7 != 'n'&&p8 != 'n'&&p9 != 'n')
			{
					MessageBox::Show("Remis! Koniec gry!", "Wynik", MessageBoxButtons::OK, MessageBoxIcon::Information);
					Box1->Enabled = false;
					Box2->Enabled = false;
					Box3->Enabled = false;
					Box4->Enabled = false;
					Box5->Enabled = false;
					Box6->Enabled = false;
					Box7->Enabled = false;
					Box8->Enabled = false;
					Box9->Enabled = false;	
			}
		}
		void licz(int licznik)
		{
			if (licznik == 1)
			{
				Counter->Image = Image::FromFile("img/1.jpg");
			}
			if (licznik == 2)
			{
				Counter->Image = Image::FromFile("img/2.jpg");
			}
			if (licznik == 3)
			{
				Counter->Image = Image::FromFile("img/3.jpg");
			}
			if (licznik == 4)
			{
				Counter->Image = Image::FromFile("img/4.jpg");
			}
			if (licznik == 5)
			{
				Counter->Image = Image::FromFile("img/5.jpg");
			}
			if (licznik == 6)
			{
				Counter->Image = Image::FromFile("img/6.jpg");
			}
			if (licznik == 7)
			{
				Counter->Image = Image::FromFile("img/7.jpg");
			}
			if (licznik == 8)
			{
				Counter->Image = Image::FromFile("img/8.jpg");
			}
			if (licznik == 9)
			{
				Counter->Image = Image::FromFile("img/9.jpg");
			}
		}


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Box1->Image = Image::FromFile("img/empty.jpg");
		Box2->Image = Image::FromFile("img/empty.jpg");
		Box3->Image = Image::FromFile("img/empty.jpg");
		Box4->Image = Image::FromFile("img/empty.jpg");
		Box5->Image = Image::FromFile("img/empty.jpg");
		Box6->Image = Image::FromFile("img/empty.jpg");
		Box7->Image = Image::FromFile("img/empty.jpg");
		Box8->Image = Image::FromFile("img/empty.jpg");
		Box9->Image = Image::FromFile("img/empty.jpg");

		p1 = 'n'; p2 = 'n'; p3 = 'n';
		p4 = 'n'; p5 = 'n'; p6 = 'n';
		p7 = 'n'; p8 = 'n'; p9 = 'n';
		who = 'o';
		Counter->Image = Image::FromFile("img/0.jpg");
		Tura->Image = Image::FromFile("img/circle_small.jpg");
		licznik = 0;
		Box1->Enabled = true;
		Box2->Enabled = true;
		Box3->Enabled = true;
		Box4->Enabled = true;
		Box5->Enabled = true;
		Box6->Enabled = true;
		Box7->Enabled = true;
		Box8->Enabled = true;
		Box9->Enabled = true;
	}
	private: System::Void Box1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (p1 == 'n')
		{
			if (who == 'o')
			{
				Box1->Image = Image::FromFile("img/circle.jpg");
				p1 = 'o';
				who = 'x';
				Tura->Image = Image::FromFile("img/x_small.jpg");
			}
			else
			{
				Box1->Image = Image::FromFile("img/x.jpg");
				p1 = 'x';
				who = 'o';
				Tura->Image = Image::FromFile("img/circle_small.jpg");
			}
			licznik++;
			Box1->Enabled = false;
			licz(licznik);
			check();
		}
	}
	private: System::Void Box2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (p2 == 'n')
		{
			if (who == 'o')
			{
				Box2->Image = Image::FromFile("img/circle.jpg");
				p2 = 'o';
				who = 'x';
				Tura->Image = Image::FromFile("img/x_small.jpg");
			}
			else
			{
				Box2->Image = Image::FromFile("img/x.jpg");
				p2 = 'x';
				who = 'o';
				Tura->Image = Image::FromFile("img/circle_small.jpg");
			}
			licznik++;
			Box2->Enabled = false;
			licz(licznik);
			check();
		}
	}
	private: System::Void Box3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (p3 == 'n')
		{
			if (who == 'o')
			{
				Box3->Image = Image::FromFile("img/circle.jpg");
				p3 = 'o';
				who = 'x';
				Tura->Image = Image::FromFile("img/x_small.jpg");
			}
			else
			{
				Box3->Image = Image::FromFile("img/x.jpg");
				p3 = 'x';
				who = 'o';
				Tura->Image = Image::FromFile("img/circle_small.jpg");
			}
			licznik++;
			Box3->Enabled = false;
			licz(licznik);
			check();
		}
	}
	private: System::Void Box4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (p4 == 'n')
		{
			if (who == 'o')
			{
				Box4->Image = Image::FromFile("img/circle.jpg");
				p4 = 'o';
				who = 'x';
				Tura->Image = Image::FromFile("img/x_small.jpg");
			}
			else
			{
				Box4->Image = Image::FromFile("img/x.jpg");
				p4 = 'x';
				who = 'o';
				Tura->Image = Image::FromFile("img/circle_small.jpg");
			}
			licznik++;
			Box4->Enabled = false;
			licz(licznik);
			check();
		}
	}
	private: System::Void Box5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (p5 == 'n')
		{
			if (who == 'o')
			{
				Box5->Image = Image::FromFile("img/circle.jpg");
				p5 = 'o';
				who = 'x';
				Tura->Image = Image::FromFile("img/x_small.jpg");
			}
			else
			{
				Box5->Image = Image::FromFile("img/x.jpg");
				p5 = 'x';
				who = 'o';
				Tura->Image = Image::FromFile("img/circle_small.jpg");
			}
			licznik++;
			Box5->Enabled = false;
			licz(licznik);
			check();
		}
	}
	private: System::Void Box6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (p6 == 'n')
		{
			if (who == 'o')
			{
				Box6->Image = Image::FromFile("img/circle.jpg");
				p6 = 'o';
				who = 'x';
				Tura->Image = Image::FromFile("img/x_small.jpg");
			}
			else
			{
				Box6->Image = Image::FromFile("img/x.jpg");
				p6 = 'x';
				who = 'o';
				Tura->Image = Image::FromFile("img/circle_small.jpg");
			}
			licznik++;
			Box6->Enabled = false;
			licz(licznik);
			check();
		}
	}
	private: System::Void Box7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (p7 == 'n')
		{
			if (who == 'o')
			{
				Box7->Image = Image::FromFile("img/circle.jpg");
				p7 = 'o';
				who = 'x';
				Tura->Image = Image::FromFile("img/x_small.jpg");
			}
			else
			{
				Box7->Image = Image::FromFile("img/x.jpg");
				p7 = 'x';
				who = 'o';
				Tura->Image = Image::FromFile("img/circle_small.jpg");
			}
			licznik++;
			Box7->Enabled = false;
			licz(licznik);
			check();
		}
	}
	private: System::Void Box8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (p8 == 'n')
		{
			if (who == 'o')
			{
				Box8->Image = Image::FromFile("img/circle.jpg");
				p8 = 'o';
				who = 'x';
				Tura->Image = Image::FromFile("img/x_small.jpg");
			}
			else
			{
				Box8->Image = Image::FromFile("img/x.jpg");
				p8 = 'x';
				who = 'o';
				Tura->Image = Image::FromFile("img/circle_small.jpg");
			}
			licznik++;
			Box8->Enabled = false;
			licz(licznik);
			check();
		}
	}
	private: System::Void Box9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (p9 == 'n')
		{
			if (who == 'o')
			{
				Box9->Image = Image::FromFile("img/circle.jpg");
				p9 = 'o';
				who = 'x';
				Tura->Image = Image::FromFile("img/x_small.jpg");
			}
			else
			{
				Box9->Image = Image::FromFile("img/x.jpg");
				p9 = 'x';
				who = 'o';
				Tura->Image = Image::FromFile("img/circle_small.jpg");
			}
			licznik++;
			Box9->Enabled = false;
			licz(licznik);
			check();
		}
	}
private: System::Void Button_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	Button->Image = Image::FromFile("img/new_game_h.jpg");
}
private: System::Void Button_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Button->Image = Image::FromFile("img/new_game.jpg");
}
};
}
