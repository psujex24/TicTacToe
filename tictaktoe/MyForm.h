#pragma once

namespace tictaktoe {

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
	private: System::Windows::Forms::PictureBox^ pole1;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pole2;
	private: System::Windows::Forms::PictureBox^ pole3;
	private: System::Windows::Forms::PictureBox^ pole4;
	private: System::Windows::Forms::PictureBox^ pole5;
	private: System::Windows::Forms::PictureBox^ pole6;
	private: System::Windows::Forms::PictureBox^ pole7;
	private: System::Windows::Forms::PictureBox^ pole8;
	private: System::Windows::Forms::PictureBox^ pole9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ Tura;










	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pole1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pole2 = (gcnew System::Windows::Forms::PictureBox());
			this->pole3 = (gcnew System::Windows::Forms::PictureBox());
			this->pole4 = (gcnew System::Windows::Forms::PictureBox());
			this->pole5 = (gcnew System::Windows::Forms::PictureBox());
			this->pole6 = (gcnew System::Windows::Forms::PictureBox());
			this->pole7 = (gcnew System::Windows::Forms::PictureBox());
			this->pole8 = (gcnew System::Windows::Forms::PictureBox());
			this->pole9 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Tura = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tura))->BeginInit();
			this->SuspendLayout();
			// 
			// pole1
			// 
			this->pole1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole1->Location = System::Drawing::Point(12, 12);
			this->pole1->Name = L"pole1";
			this->pole1->Size = System::Drawing::Size(100, 100);
			this->pole1->TabIndex = 0;
			this->pole1->TabStop = false;
			this->pole1->Click += gcnew System::EventHandler(this, &MyForm::Pole1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(352, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 47);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Od nowa";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pole2
			// 
			this->pole2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole2->Location = System::Drawing::Point(118, 12);
			this->pole2->Name = L"pole2";
			this->pole2->Size = System::Drawing::Size(100, 100);
			this->pole2->TabIndex = 10;
			this->pole2->TabStop = false;
			this->pole2->Click += gcnew System::EventHandler(this, &MyForm::pole2_Click);
			// 
			// pole3
			// 
			this->pole3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole3->Location = System::Drawing::Point(224, 12);
			this->pole3->Name = L"pole3";
			this->pole3->Size = System::Drawing::Size(100, 100);
			this->pole3->TabIndex = 11;
			this->pole3->TabStop = false;
			// 
			// pole4
			// 
			this->pole4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole4->Location = System::Drawing::Point(12, 118);
			this->pole4->Name = L"pole4";
			this->pole4->Size = System::Drawing::Size(100, 100);
			this->pole4->TabIndex = 12;
			this->pole4->TabStop = false;
			// 
			// pole5
			// 
			this->pole5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole5->Location = System::Drawing::Point(118, 118);
			this->pole5->Name = L"pole5";
			this->pole5->Size = System::Drawing::Size(100, 100);
			this->pole5->TabIndex = 13;
			this->pole5->TabStop = false;
			// 
			// pole6
			// 
			this->pole6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole6->Location = System::Drawing::Point(224, 118);
			this->pole6->Name = L"pole6";
			this->pole6->Size = System::Drawing::Size(100, 100);
			this->pole6->TabIndex = 14;
			this->pole6->TabStop = false;
			// 
			// pole7
			// 
			this->pole7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole7->Location = System::Drawing::Point(12, 224);
			this->pole7->Name = L"pole7";
			this->pole7->Size = System::Drawing::Size(100, 100);
			this->pole7->TabIndex = 15;
			this->pole7->TabStop = false;
			// 
			// pole8
			// 
			this->pole8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole8->Location = System::Drawing::Point(118, 224);
			this->pole8->Name = L"pole8";
			this->pole8->Size = System::Drawing::Size(100, 100);
			this->pole8->TabIndex = 16;
			this->pole8->TabStop = false;
			// 
			// pole9
			// 
			this->pole9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole9->Location = System::Drawing::Point(224, 224);
			this->pole9->Name = L"pole9";
			this->pole9->Size = System::Drawing::Size(100, 100);
			this->pole9->TabIndex = 17;
			this->pole9->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(343, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 40);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Tura";
			// 
			// Tura
			// 
			this->Tura->Location = System::Drawing::Point(443, 33);
			this->Tura->Name = L"Tura";
			this->Tura->Size = System::Drawing::Size(30, 30);
			this->Tura->TabIndex = 19;
			this->Tura->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 381);
			this->Controls->Add(this->Tura);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pole9);
			this->Controls->Add(this->pole8);
			this->Controls->Add(this->pole7);
			this->Controls->Add(this->pole6);
			this->Controls->Add(this->pole5);
			this->Controls->Add(this->pole4);
			this->Controls->Add(this->pole3);
			this->Controls->Add(this->pole2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pole1);
			this->Name = L"MyForm";
			this->Text = L"TicTacToe";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tura))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Pole1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
private: System::Void pole2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Œcie¿ka do pliku obrazka
		String^ imagePath = "img/nic.bmp";
		String^ imagePath2 = "img/osmall.bmp";
		String^ imagePath3 = "img/xsmall.bmp";
		this->pole1->Image = Image::FromFile(imagePath);
		this->pole2->Image = Image::FromFile(imagePath);
		this->pole3->Image = Image::FromFile(imagePath);
		this->pole4->Image = Image::FromFile(imagePath);
		this->pole5->Image = Image::FromFile(imagePath);
		this->pole6->Image = Image::FromFile(imagePath);
		this->pole7->Image = Image::FromFile(imagePath);
		this->pole8->Image = Image::FromFile(imagePath);
		this->pole9->Image = Image::FromFile(imagePath);
		this->Tura->Image = Image::FromFile(imagePath2);
}
};
}
