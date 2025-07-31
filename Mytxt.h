#pragma once

namespace Projectk {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Mytxt : public System::Windows::Forms::Form
    {
    public:
        Mytxt(void);

    protected:
        ~Mytxt();

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2;
        System::Windows::Forms::Button^ button3;
        System::Windows::Forms::Button^ button4;
        System::Windows::Forms::Label^ label2;
        String^ filePath = nullptr;
    private: System::Windows::Forms::Label^ label3;

        const int shift = 3;  // Caesar Cipher shift value

        // Event handlers
    private:
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);

        // Helper methods for encryption/decryption
    private:
        String^ CaesarCipherEncrypt(String^ inputText);
        String^ CaesarCipherDecrypt(String^ inputText);

        // Windows Form Designer generated code
    private:
        void InitializeComponent(void);

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void Mytxt_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
