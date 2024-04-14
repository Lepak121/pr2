#pragma once

#include "MyForm1.h"

namespace Project1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2;
        System::Windows::Forms::Button^ button3;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;

        System::ComponentModel::Container^ components;
        System::Windows::Forms::Timer^ timer;
        int initialSeconds;
        int initialHours;
        int initialMinutes;
        System::Windows::Forms::Button^ button4;
        System::IO::FileSystemWatcher^ fileSystemWatcher1;
        System::Windows::Forms::Label^ label4;

        int totalTimeInSeconds;

        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
            this->label4 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(21, 102);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(100, 40);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Старт";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(127, 102);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(99, 40);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Стоп";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(232, 102);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(108, 40);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Ресет";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(21, 56);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(100, 30);
            this->textBox1->TabIndex = 3;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(127, 56);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(100, 30);
            this->textBox2->TabIndex = 4;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox3->Location = System::Drawing::Point(232, 56);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(100, 30);
            this->textBox3->TabIndex = 5;
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
            // 
            // label1
            // 
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(24, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(97, 30);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Години";
            // 
            // label2
            // 
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(122, 9);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(105, 30);
            this->label2->TabIndex = 7;
            this->label2->Text = L"Хвилини";
            // 
            // label3
            // 
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(233, 9);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(105, 30);
            this->label3->TabIndex = 8;
            this->label3->Text = L"Секунди";
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(29, 160);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(198, 46);
            this->button4->TabIndex = 9;
            this->button4->Text = L"зміна системної дати";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // fileSystemWatcher1
            // 
            this->fileSystemWatcher1->EnableRaisingEvents = true;
            this->fileSystemWatcher1->SynchronizingObject = this;
            // 
            // label4
            // 
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(287, 177);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(203, 29);
            this->label4->TabIndex = 10;
            this->label4->Text = L"data/time";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(519, 289);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Name = L"MyForm";
            this->Text = L"Таймер";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private:
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            if (timer != nullptr) {
                timer->Stop();
            }

            int hours = Convert::ToInt32(textBox1->Text);
            int minutes = Convert::ToInt32(textBox2->Text);
            int seconds = Convert::ToInt32(textBox3->Text);

            initialHours = hours;
            initialMinutes = minutes;
            initialSeconds = seconds;

            totalTimeInSeconds = hours * 3600 + minutes * 60 + seconds;

            timer = gcnew Timer();
            timer->Interval = 1000;

            timer->Tick += gcnew EventHandler(this, &MyForm::timer_Tick);

            timer->Start();
        }

        System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
            textBox1->Text = initialHours.ToString();
            textBox2->Text = initialMinutes.ToString();
            textBox3->Text = initialSeconds.ToString();

            totalTimeInSeconds = initialHours * 3600 + initialMinutes * 60 + initialSeconds;

            if (timer != nullptr) {
                timer->Stop();
            }
        }

        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
            if (timer != nullptr) {
                timer->Stop();
            }
        }

        System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
            totalTimeInSeconds--;

            int hours = totalTimeInSeconds / 3600;
            int remainingSeconds = totalTimeInSeconds % 3600;
            int minutes = remainingSeconds / 60;
            int seconds = remainingSeconds % 60;

            textBox1->Text = hours.ToString();
            textBox2->Text = minutes.ToString();
            textBox3->Text = seconds.ToString();

            if (totalTimeInSeconds <= 0) {
                timer->Stop();
            }
        }

        System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
            label3->Text = "Секунди";
        }

        System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
            DateTime currentTime = DateTime::Now;
            label4->Text = currentTime.ToString("dd/MM/yyyy HH:mm:ss");
        }



        System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
            MyForm1^ myForm1 = gcnew MyForm1();
            myForm1->Show();
        }
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
