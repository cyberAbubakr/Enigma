#include "Mytxt.h"
#include "MyForm1.h"
#include <iostream>
#include <string>

using namespace Projectk;
using namespace System;
using namespace System::IO;

namespace Projectk
{
    // Constructor
    Mytxt::Mytxt(void)
    {
        InitializeComponent();
        filePath = nullptr;  // Initialize filePath to nullptr
    }

    // Destructor
    Mytxt::~Mytxt()
    {
        if (components)
        {
            delete components;
        }
    }

    // Initialize components (UI setup)
    void Mytxt::InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mytxt::typeid));
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->button4 = (gcnew System::Windows::Forms::Button());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->SuspendLayout();
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->BackColor = System::Drawing::Color::Transparent;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->ForeColor = System::Drawing::Color::Cyan;
        this->label1->Location = System::Drawing::Point(12, 226);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(257, 29);
        this->label1->TabIndex = 0;
        this->label1->Text = L"Enter text or load a file:";
        this->label1->Click += gcnew System::EventHandler(this, &Mytxt::label1_Click);
        // 
        // textBox1
        // 
        this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));
        this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
            static_cast<System::Int32>(static_cast<System::Byte>(51)));
        this->textBox1->Location = System::Drawing::Point(336, 230);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(420, 26);
        this->textBox1->TabIndex = 2;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &Mytxt::textBox1_TextChanged);
        // 
        // textBox2
        // 
        this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));
        this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
            static_cast<System::Int32>(static_cast<System::Byte>(51)));
        this->textBox2->Location = System::Drawing::Point(336, 334);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(420, 26);
        this->textBox2->TabIndex = 3;
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Cyan;
        this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->button1->Location = System::Drawing::Point(844, 230);
        this->button1->Name = L"button1";
        this->button1->Padding = System::Windows::Forms::Padding(3, 8, 3, 8);
        this->button1->Size = System::Drawing::Size(117, 48);
        this->button1->TabIndex = 4;
        this->button1->Text = L"Load File";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &Mytxt::button1_Click);
        // 
        // button2
        // 
        this->button2->BackColor = System::Drawing::Color::Cyan;
        this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->button2->Location = System::Drawing::Point(376, 433);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(117, 44);
        this->button2->TabIndex = 5;
        this->button2->Text = L"Encrypt";
        this->button2->UseVisualStyleBackColor = false;
        this->button2->Click += gcnew System::EventHandler(this, &Mytxt::button2_Click);
        // 
        // button3
        // 
        this->button3->BackColor = System::Drawing::Color::Cyan;
        this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->button3->Location = System::Drawing::Point(616, 435);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(117, 40);
        this->button3->TabIndex = 6;
        this->button3->Text = L"Decrypt";
        this->button3->UseVisualStyleBackColor = false;
        this->button3->Click += gcnew System::EventHandler(this, &Mytxt::button3_Click);
        // 
        // button4
        // 
        this->button4->BackColor = System::Drawing::Color::Cyan;
        this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->button4->Location = System::Drawing::Point(844, 334);
        this->button4->Name = L"button4";
        this->button4->Padding = System::Windows::Forms::Padding(3, 8, 3, 8);
        this->button4->Size = System::Drawing::Size(117, 54);
        this->button4->TabIndex = 7;
        this->button4->Text = L"Save File";
        this->button4->UseVisualStyleBackColor = false;
        this->button4->Click += gcnew System::EventHandler(this, &Mytxt::button4_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->BackColor = System::Drawing::Color::Transparent;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label2->ForeColor = System::Drawing::Color::Cyan;
        this->label2->Location = System::Drawing::Point(12, 330);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(281, 29);
        this->label2->TabIndex = 9;
        this->label2->Text = L"Content will appear here:";
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->BackColor = System::Drawing::Color::Transparent;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));
        this->label3->Location = System::Drawing::Point(683, 42);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(372, 46);
        this->label3->TabIndex = 10;
        this->label3->Text = L"ENIGMA MACHINE";
        this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        // 
        // Mytxt
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
        this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
        this->ClientSize = System::Drawing::Size(1896, 950);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->button4);
        this->Controls->Add(this->button3);
        this->Controls->Add(this->button2);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->label1);
        this->DoubleBuffered = true;
        this->MinimizeBox = false;
        this->MinimumSize = System::Drawing::Size(1918, 1006);
        this->Name = L"Mytxt";
        this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
        this->Text = L"Mytxt";
        this->Load += gcnew System::EventHandler(this, &Mytxt::Mytxt_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    // Open and load the file content
    void Mytxt::button1_Click(System::Object^ sender, System::EventArgs^ e)
    {
        OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
        openFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";

        if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            filePath = openFileDialog->FileName;

            // Use StreamReader for file reading (no need to marshal)
            StreamReader^ reader = gcnew StreamReader(filePath);
            String^ fileContent = reader->ReadToEnd();
            reader->Close();

            textBox1->Text = fileContent;  // Display content in textBox1
        }
    }

    // Save the file content
    void Mytxt::button4_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (filePath != nullptr && filePath->Length > 0)
        {
            // Use StreamWriter to write to the file
            StreamWriter^ writer = gcnew StreamWriter(filePath, false);  // 'false' to overwrite
            writer->Write(textBox2->Text);
            writer->Close();

            MessageBox::Show("File saved successfully at: " + filePath);
        }
        else
        {
            MessageBox::Show("No file loaded. Please load a file first.");
        }
    }

    // Encrypt with Caesar Cipher
    void Mytxt::button2_Click(System::Object^ sender, System::EventArgs^ e)
    {
        textBox2->Text = CaesarCipherEncrypt(textBox1->Text);
    }

    // Decrypt with Caesar Cipher
    void Mytxt::button3_Click(System::Object^ sender, System::EventArgs^ e)
    {
        textBox2->Text = CaesarCipherDecrypt(textBox1->Text);
    }

    // Caesar Cipher Encryption
    String^ Mytxt::CaesarCipherEncrypt(String^ inputText)
    {
        String^ result = "";
        for (int i = 0; i < inputText->Length; i++)
        {
            wchar_t ch = inputText[i];

            // Handle uppercase letters
            if (ch >= 'A' && ch <= 'Z')
            {
                result += (wchar_t)((((ch - 'A') + shift) % 26) + 'A');
            }
            // Handle lowercase letters
            else if (ch >= 'a' && ch <= 'z')
            {
                result += (wchar_t)((((ch - 'a') + shift) % 26) + 'a');
            }
            else
            {
                result += ch;  // Non-alphabet characters remain unchanged
            }
        }
        return result;
    }

    // Caesar Cipher Decryption
    String^ Mytxt::CaesarCipherDecrypt(String^ inputText)
    {
        String^ result = "";
        for (int i = 0; i < inputText->Length; i++)
        {
            wchar_t ch = inputText[i];

            // Handle uppercase letters
            if (ch >= 'A' && ch <= 'Z')
            {
                result += (wchar_t)((((ch - 'A') - shift + 26) % 26) + 'A');
            }
            // Handle lowercase letters
            else if (ch >= 'a' && ch <= 'z')
            {
                result += (wchar_t)((((ch - 'a') - shift + 26) % 26) + 'a');
            }
            else
            {
                result += ch;  // Non-alphabet characters remain unchanged
            }
        }
        return result;
    }
}
