#pragma once

#include <windows.h>

namespace Project1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;

    public ref class MyForm1 : public System::Windows::Forms::Form
    {
    public:
        MyForm1()
        {
            InitializeComponent();

            // Заповнення ComboBox для місяців
            array<String^>^ months = { "Січень", "Лютий", "Березень", "Квітень", "Травень", "Червень",
                                       "Липень", "Серпень", "Вересень", "Жовтень", "Листопад", "Грудень" };
            comboBox1->Items->AddRange(months);

            // Заповнення ComboBox для днів
            for (int i = 1; i <= 31; i++) {
                comboBox2->Items->Add(i.ToString());
            }
        }

    protected:
        ~MyForm1()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::ComboBox^ comboBox2;


        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(12, 97);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(65, 28);
            this->textBox1->TabIndex = 0;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(93, 97);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(67, 28);
            this->textBox2->TabIndex = 1;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox3->Location = System::Drawing::Point(175, 97);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(75, 28);
            this->textBox3->TabIndex = 2;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(6, 64);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(71, 20);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Година";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(83, 64);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(81, 20);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Хвилина";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(171, 64);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(80, 20);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Секунда";
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(12, 176);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(238, 45);
            this->button1->TabIndex = 6;
            this->button1->Text = L"Змінити";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(287, 97);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(121, 28);
            this->comboBox1->TabIndex = 7;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
            // 
            // comboBox2
            // 
            this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Location = System::Drawing::Point(414, 97);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(121, 28);
            this->comboBox2->TabIndex = 8;
            this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox2_SelectedIndexChanged);
            // 
            // MyForm1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(562, 288);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Name = L"MyForm1";
            this->Text = L"зміна системного часу";
            this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        // Обробник події натискання кнопки
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        int hour = Convert::ToInt32(textBox1->Text);
        int minute = Convert::ToInt32(textBox2->Text);
        int second = Convert::ToInt32(textBox3->Text);
        int month = comboBox1->SelectedIndex + 1; // Індекс місяця починається з 0, тому додаємо 1
        int day = comboBox2->SelectedIndex + 1;   // Аналогічно, додаємо 1

        // Отримуємо поточний локальний час
        SYSTEMTIME st;
        GetLocalTime(&st);
        st.wHour = hour;
        st.wMinute = minute;
        st.wSecond = second;
        st.wMonth = month;
        st.wDay = day;

        // Встановлюємо новий локальний час
        if (!SetLocalTime(&st)) {
            DWORD dwError = GetLastError();
            if (dwError == ERROR_PRIVILEGE_NOT_HELD) {
                MessageBox::Show("Доступ до зміни системного часу відмовлено. Запустіть програму в режимі адміністратора.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                MessageBox::Show("Помилка при зміні системного часу. Код помилки: " + dwError.ToString(), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    }

    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
