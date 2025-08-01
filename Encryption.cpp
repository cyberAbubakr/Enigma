#include "Encryption.h"
#include "MyForm1.h"  // Include your other forms if necessary
#include "MyForm.h"

using namespace Projectk;
using namespace System::Text;

Encryption::Encryption(void)
{
    InitializeComponent();
}

Encryption::~Encryption()
{
    if (components)
    {
        delete components;
    }
}

void Encryption::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ plainText = this->textBox1->Text;
    StringBuilder^ encryptedText = gcnew StringBuilder();

    // Simple Caesar Cipher for Encryption (shift by 3)
    for (int i = 0; i < plainText->Length; i++) {
        encryptedText->Append(static_cast<Char>(plainText[i] + 3));  // Shift characters by 3
    }

    this->textBox2->Text = encryptedText->ToString(); // Display encrypted text in textBox2
}

void Encryption::button2_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ encryptedText = this->textBox2->Text;  // Get the text entered in textBox2
    StringBuilder^ decryptedText = gcnew StringBuilder();  // Declare decryptedText here

    // Simple Caesar Cipher for Decryption (shift by 3 in the opposite direction)
    for (int i = 0; i < encryptedText->Length; i++) {
        decryptedText->Append(static_cast<Char>(encryptedText[i] - 3));  // Shift characters back by 3
    }

    this->textBox1->Text = decryptedText->ToString(); // Display decrypted text in textBox1
}

// Other functions and UI setup generated by the Windows Forms Designer
void Encryption::InitializeComponent(void)
{
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Encryption::typeid));
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->textBox2 = (gcnew System::Windows::Forms::TextBox());
    this->button2 = (gcnew System::Windows::Forms::Button());
    this->SuspendLayout();
    // 
    // textBox1
    // 
    this->textBox1->BackColor = System::Drawing::Color::White;
    this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
    this->textBox1->ForeColor = System::Drawing::SystemColors::ControlText;
    this->textBox1->Location = System::Drawing::Point(27, 79);
    this->textBox1->Multiline = true;
    this->textBox1->Name = L"textBox1";
    this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
    this->textBox1->Size = System::Drawing::Size(461, 114);
    this->textBox1->TabIndex = 0;
    this->textBox1->TextChanged += gcnew System::EventHandler(this, &Encryption::textBox1_TextChanged);
    // 
    // label1
    // 
    this->label1->AutoSize = true;
    this->label1->BackColor = System::Drawing::Color::Transparent;
    this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label1->ForeColor = System::Drawing::Color::Cyan;
    this->label1->Location = System::Drawing::Point(22, 39);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(210, 28);
    this->label1->TabIndex = 1;
    this->label1->Text = L"Decrypted Message :\r\n";
    // 
    // button1
    // 
    this->button1->BackColor = System::Drawing::Color::Cyan;
    this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
    this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
    this->button1->Location = System::Drawing::Point(326, 199);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(162, 43);
    this->button1->TabIndex = 2;
    this->button1->Text = L"Encrypt Message";
    this->button1->UseVisualStyleBackColor = false;
    this->button1->Click += gcnew System::EventHandler(this, &Encryption::button1_Click);
    // 
    // label2
    // 
    this->label2->AutoSize = true;
    this->label2->BackColor = System::Drawing::Color::Transparent;
    this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label2->ForeColor = System::Drawing::Color::Cyan;
    this->label2->Location = System::Drawing::Point(22, 279);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(206, 28);
    this->label2->TabIndex = 3;
    this->label2->Text = L"Encrypted message :\r\n";
    // 
    // textBox2
    // 
    this->textBox2->BackColor = System::Drawing::SystemColors::HighlightText;
    this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
    this->textBox2->ForeColor = System::Drawing::Color::Black;
    this->textBox2->Location = System::Drawing::Point(27, 323);
    this->textBox2->Multiline = true;
    this->textBox2->Name = L"textBox2";
    this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
    this->textBox2->Size = System::Drawing::Size(461, 114);
    this->textBox2->TabIndex = 4;
    // 
    // button2
    // 
    this->button2->BackColor = System::Drawing::Color::Cyan;
    this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
    this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
    this->button2->Location = System::Drawing::Point(326, 443);
    this->button2->Name = L"button2";
    this->button2->Size = System::Drawing::Size(162, 43);
    this->button2->TabIndex = 5;
    this->button2->Text = L"Decrypt Message";
    this->button2->UseVisualStyleBackColor = false;
    this->button2->Click += gcnew System::EventHandler(this, &Encryption::button2_Click);
    // 
    // Encryption
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackColor = System::Drawing::Color::White;
    this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
    this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
    this->ClientSize = System::Drawing::Size(953, 518);
    this->Controls->Add(this->button2);
    this->Controls->Add(this->textBox2);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->button1);
    this->Controls->Add(this->label1);
    this->Controls->Add(this->textBox1);
    this->Name = L"Encryption";
    this->Text = L"Encryption";
    this->Load += gcnew System::EventHandler(this, &Encryption::Encryption_Load);
    this->ResumeLayout(false);
    this->PerformLayout();

}

void Encryption::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    // Optional: Handle any text changes in textBox1 if needed.
}
