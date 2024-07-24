#pragma once
#include <Windows.h>

  // Importuj przestrzeñ nazw dla grafik

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;  // Importuj przestrzeñ nazw System::Drawing dla Image

char p1, p2, p3, p4, p5, p6, p7, p8, p9; // Stan planszy
char kto; // Aktualny gracz: 'x' lub 'o'






namespace tictaktoe {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            resetGame();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::PictureBox^ pole1;
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
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
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
               this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
               this->pole3->Click += gcnew System::EventHandler(this, &MyForm::pole3_Click);
               // 
               // pole4
               // 
               this->pole4->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pole4->Location = System::Drawing::Point(12, 118);
               this->pole4->Name = L"pole4";
               this->pole4->Size = System::Drawing::Size(100, 100);
               this->pole4->TabIndex = 12;
               this->pole4->TabStop = false;
               this->pole4->Click += gcnew System::EventHandler(this, &MyForm::pole4_Click);
               // 
               // pole5
               // 
               this->pole5->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pole5->Location = System::Drawing::Point(118, 118);
               this->pole5->Name = L"pole5";
               this->pole5->Size = System::Drawing::Size(100, 100);
               this->pole5->TabIndex = 13;
               this->pole5->TabStop = false;
               this->pole5->Click += gcnew System::EventHandler(this, &MyForm::pole5_Click);
               // 
               // pole6
               // 
               this->pole6->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pole6->Location = System::Drawing::Point(224, 118);
               this->pole6->Name = L"pole6";
               this->pole6->Size = System::Drawing::Size(100, 100);
               this->pole6->TabIndex = 14;
               this->pole6->TabStop = false;
               this->pole6->Click += gcnew System::EventHandler(this, &MyForm::pole6_Click);
               // 
               // pole7
               // 
               this->pole7->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pole7->Location = System::Drawing::Point(12, 224);
               this->pole7->Name = L"pole7";
               this->pole7->Size = System::Drawing::Size(100, 100);
               this->pole7->TabIndex = 15;
               this->pole7->TabStop = false;
               this->pole7->Click += gcnew System::EventHandler(this, &MyForm::pole7_Click);
               // 
               // pole8
               // 
               this->pole8->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pole8->Location = System::Drawing::Point(118, 224);
               this->pole8->Name = L"pole8";
               this->pole8->Size = System::Drawing::Size(100, 100);
               this->pole8->TabIndex = 16;
               this->pole8->TabStop = false;
               this->pole8->Click += gcnew System::EventHandler(this, &MyForm::pole8_Click);
               // 
               // pole9
               // 
               this->pole9->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pole9->Location = System::Drawing::Point(224, 224);
               this->pole9->Name = L"pole9";
               this->pole9->Size = System::Drawing::Size(100, 100);
               this->pole9->TabIndex = 17;
               this->pole9->TabStop = false;
               this->pole9->Click += gcnew System::EventHandler(this, &MyForm::pole9_Click);
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(12, 353);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(145, 13);
               this->label1->TabIndex = 18;
               this->label1->Text = L"Gracz: X - Krzy¿yk, O - Kó³ko";
               // 
               // Tura
               // 
               this->Tura->Location = System::Drawing::Point(421, 12);
               this->Tura->Name = L"Tura";
               this->Tura->Size = System::Drawing::Size(50, 50);
               this->Tura->TabIndex = 19;
               this->Tura->TabStop = false;
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(484, 373);
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
               this->Text = L"Tic Tac Toe";
               this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
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
        // Wstaw obrazek i aktualizuj stan gry
        if (p1 == 'n') {
            pole1->Image = (kto == 'x') ? Image::FromFile("img/x.bmp") : Image::FromFile("img/o.bmp");
            p1 = kto;
            kto = (kto == 'x') ? 'o' : 'x'; // Zmiana gracza
            sprawdz(this);
            UpdateTuraImage();
        }
    }

    private: System::Void pole2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (p2 == 'n') {
            pole2->Image = (kto == 'x') ? Image::FromFile("img/x.bmp") : Image::FromFile("img/o.bmp");
            p2 = kto;
            kto = (kto == 'x') ? 'o' : 'x';
            sprawdz(this);
            UpdateTuraImage();

        }
    }

    private: System::Void pole3_Click(System::Object^ sender, System::EventArgs^ e) {
        if (p3 == 'n') {
            pole3->Image = (kto == 'x') ? Image::FromFile("img/x.bmp") : Image::FromFile("img/o.bmp");
            p3 = kto;
            kto = (kto == 'x') ? 'o' : 'x';
            sprawdz(this);
            UpdateTuraImage();
        }
    }

    private: System::Void pole4_Click(System::Object^ sender, System::EventArgs^ e) {
        if (p4 == 'n') {
            pole4->Image = (kto == 'x') ? Image::FromFile("img/x.bmp") : Image::FromFile("img/o.bmp");
            p4 = kto;
            kto = (kto == 'x') ? 'o' : 'x';
            sprawdz(this);
            UpdateTuraImage();
        }
    }

    private: System::Void pole5_Click(System::Object^ sender, System::EventArgs^ e) {
        if (p5 == 'n') {
            pole5->Image = (kto == 'x') ? Image::FromFile("img/x.bmp") : Image::FromFile("img/o.bmp");
            p5 = kto;
            kto = (kto == 'x') ? 'o' : 'x';
            sprawdz(this);
            UpdateTuraImage();
        }
    }

    private: System::Void pole6_Click(System::Object^ sender, System::EventArgs^ e) {
        if (p6 == 'n') {
            pole6->Image = (kto == 'x') ? Image::FromFile("img/x.bmp") : Image::FromFile("img/o.bmp");
            p6 = kto;
            kto = (kto == 'x') ? 'o' : 'x';
            sprawdz(this);
            UpdateTuraImage();
        }
    }

    private: System::Void pole7_Click(System::Object^ sender, System::EventArgs^ e) {
        if (p7 == 'n') {
            pole7->Image = (kto == 'x') ? Image::FromFile("img/x.bmp") : Image::FromFile("img/o.bmp");
            p7 = kto;
            kto = (kto == 'x') ? 'o' : 'x';
            sprawdz(this);
            UpdateTuraImage();
        }
    }

    private: System::Void pole8_Click(System::Object^ sender, System::EventArgs^ e) {
        if (p8 == 'n') {
            pole8->Image = (kto == 'x') ? Image::FromFile("img/x.bmp") : Image::FromFile("img/o.bmp");
            p8 = kto;
            kto = (kto == 'x') ? 'o' : 'x';
            sprawdz(this);
            UpdateTuraImage();
        }
    }

    private: System::Void pole9_Click(System::Object^ sender, System::EventArgs^ e) {
        if (p9 == 'n') {
            pole9->Image = (kto == 'x') ? Image::FromFile("img/x.bmp") : Image::FromFile("img/o.bmp");
            p9 = kto;
            kto = (kto == 'x') ? 'o' : 'x';
            sprawdz(this);
            UpdateTuraImage();
        }
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Resetowanie gry
        resetGame();
        pole1->Image = Image::FromFile("img/nic.bmp");
        pole2->Image = Image::FromFile("img/nic.bmp");
        pole3->Image = Image::FromFile("img/nic.bmp");
        pole4->Image = Image::FromFile("img/nic.bmp");
        pole5->Image = Image::FromFile("img/nic.bmp");
        pole6->Image = Image::FromFile("img/nic.bmp");
        pole7->Image = Image::FromFile("img/nic.bmp");
        pole8->Image = Image::FromFile("img/nic.bmp");
        pole9->Image = Image::FromFile("img/nic.bmp");
    }

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        resetGame();
        pole1->Image = Image::FromFile("img/nic.bmp");
        pole2->Image = Image::FromFile("img/nic.bmp");
        pole3->Image = Image::FromFile("img/nic.bmp");
        pole4->Image = Image::FromFile("img/nic.bmp");
        pole5->Image = Image::FromFile("img/nic.bmp");
        pole6->Image = Image::FromFile("img/nic.bmp");
        pole7->Image = Image::FromFile("img/nic.bmp");
        pole8->Image = Image::FromFile("img/nic.bmp");
        pole9->Image = Image::FromFile("img/nic.bmp");
    };
    private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
        this->Tura->Image = Image::FromFile("img/xsmall.bmp");
        this->pole1->Image = Image::FromFile("img/nic.bmp");
        this->pole2->Image = Image::FromFile("img/nic.bmp");
        this->pole3->Image = Image::FromFile("img/nic.bmp");
        this->pole4->Image = Image::FromFile("img/nic.bmp");
        this->pole5->Image = Image::FromFile("img/nic.bmp");
        this->pole6->Image = Image::FromFile("img/nic.bmp");
        this->pole7->Image = Image::FromFile("img/nic.bmp");
        this->pole8->Image = Image::FromFile("img/nic.bmp");
        this->pole9->Image = Image::FromFile("img/nic.bmp");
    }
           void UpdateTuraImage()
           {
               // SprawdŸ, która tura jest aktualnie aktywna
               if (kto == 'x')
               {
                   // Ustaw obrazek dla gracza 'x'
                   this->Tura->Image = Image::FromFile("img/xsmall.bmp");
               }
               else if (kto == 'o')
               {
                   // Ustaw obrazek dla gracza 'o'
                   this->Tura->Image = Image::FromFile("img/osmall.bmp");
               }
           }
           void UpdateTuraImageWhenRestart()
           {
               this->Tura->Image = Image::FromFile("img/xsmall.bmp");
           }
           void resetGame()
           {
               p1 = p2 = p3 = p4 = p5 = p6 = p7 = p8 = p9 = 'n'; // 'n' oznacza brak wyboru
               kto = 'x'; // Gracz 'x' zaczyna
               UpdateTuraImageWhenRestart();
           }

           void UpdateImage(PictureBox^ pictureBox, String^ imagePath)
           {
               pictureBox->Image = Image::FromFile(imagePath);  // Wczytaj obraz z pliku
           }

           void sprawdz(Form^ form)
           {
               // Sprawdzenie warunków wygranej
               if ((p1 == p2 && p2 == p3 && p1 != 'n') ||
                   (p4 == p5 && p5 == p6 && p4 != 'n') ||
                   (p7 == p8 && p8 == p9 && p7 != 'n') ||
                   (p1 == p4 && p4 == p7 && p1 != 'n') ||
                   (p2 == p5 && p5 == p8 && p2 != 'n') ||
                   (p3 == p6 && p6 == p9 && p3 != 'n') ||
                   (p1 == p5 && p5 == p9 && p1 != 'n') ||
                   (p3 == p5 && p5 == p7 && p3 != 'n'))
               {
                   // Ustalamy komunikat w zale¿noœci od wygranego gracza
                   String^ winnerMessage = (kto == 'x') ? "Wygrywa kó³ko!" : "Wygrywa krzy¿yk!";

                   if (MessageBox::Show(winnerMessage, "Koniec Gry", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
                   {
                       // Zresetowanie planszy
                       resetGame();
                       // Aktualizowanie obrazów na planszy
                       UpdateImage(pole1, "img/nic.bmp");
                       UpdateImage(pole2, "img/nic.bmp");
                       UpdateImage(pole3, "img/nic.bmp");
                       UpdateImage(pole4, "img/nic.bmp");
                       UpdateImage(pole5, "img/nic.bmp");
                       UpdateImage(pole6, "img/nic.bmp");
                       UpdateImage(pole7, "img/nic.bmp");
                       UpdateImage(pole8, "img/nic.bmp");
                       UpdateImage(pole9, "img/nic.bmp");
                   }
               }
               else if (p1 != 'n' && p2 != 'n' && p3 != 'n' &&
                   p4 != 'n' && p5 != 'n' && p6 != 'n' &&
                   p7 != 'n' && p8 != 'n' && p9 != 'n')
               {
                   // Remis
                   MessageBox::Show("Remis!", "Koniec Gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
                   resetGame();
                   // Aktualizowanie obrazów na planszy
                   UpdateImage(pole1, "img/nic.bmp");
                   UpdateImage(pole2, "img/nic.bmp");
                   UpdateImage(pole3, "img/nic.bmp");
                   UpdateImage(pole4, "img/nic.bmp");
                   UpdateImage(pole5, "img/nic.bmp");
                   UpdateImage(pole6, "img/nic.bmp");
                   UpdateImage(pole7, "img/nic.bmp");
                   UpdateImage(pole8, "img/nic.bmp");
                   UpdateImage(pole9, "img/nic.bmp");
               }
           }

};
}