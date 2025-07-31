#pragma once
#include "Encryption.h"
#include "Mytxt.h"
namespace Projectk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(98, 658);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Message Encyption";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(94, 160);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(784, 310);
			this->label1->TabIndex = 1;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(100, 555);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 66);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Import .txt\r\n";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Cyan;
			this->panel1->Location = System::Drawing::Point(3, 118);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1836, 2);
			this->panel1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Goldenrod;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(90, 48);
			this->label2->MaximumSize = System::Drawing::Size(1364, 911);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(382, 46);
			this->label2->TabIndex = 9;
			this->label2->Text = L"ENIGM/\\ MACHINE";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1342, 855);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->MaximumSize = System::Drawing::Size(1364, 911);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1364, 911);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Projectk::Encryption^ encryptionForm = gcnew Projectk::Encryption();
	encryptionForm->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Projectk::Mytxt^ MytxtForm = gcnew Projectk::Mytxt();
	MytxtForm->Show();
}
	   private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		   // Get the primary screen's working area (excluding taskbar and other UI elements)
		   System::Drawing::Rectangle screenSize = Screen::PrimaryScreen->WorkingArea;

		   // Adjust the form's size to fit the screen dimensions
		   this->Size = System::Drawing::Size(screenSize.Width, screenSize.Height);

		   // Optionally, adjust the form's controls to fit the new size
		   AdjustControlsForResize();
	   }

private: System::Void AdjustControlsForResize() {
	// Example: Adjusting the positions and sizes of the controls proportionally
	float widthRatio = (float)this->Size.Width / 1364; // Base width
	float heightRatio = (float)this->Size.Height / 911; // Base height

	// Resize and reposition button1
	this->button1->Location = System::Drawing::Point(
		(int)(98 * widthRatio),
		(int)(658 * heightRatio)
	);
	this->button1->Size = System::Drawing::Size(
		(int)(235 * widthRatio),
		(int)(69 * heightRatio)
	);

	// Resize and reposition button2
	this->button2->Location = System::Drawing::Point(
		(int)(100 * widthRatio),
		(int)(555 * heightRatio)
	);
	this->button2->Size = System::Drawing::Size(
		(int)(235 * widthRatio),
		(int)(66 * heightRatio)
	);

	// Resize and reposition label1
	this->label1->Location = System::Drawing::Point(
		(int)(94 * widthRatio),
		(int)(160 * heightRatio)
	);
	this->label1->Size = System::Drawing::Size(
		(int)(784 * widthRatio),
		(int)(310 * heightRatio)
	);

	// Resize and reposition panel1
	this->panel1->Location = System::Drawing::Point(
		(int)(3 * widthRatio),
		(int)(118 * heightRatio)
	);
	this->panel1->Size = System::Drawing::Size(
		(int)(1836 * widthRatio),
		(int)(2 * heightRatio)
	);

	// Resize and reposition label2
	this->label2->Location = System::Drawing::Point(
		(int)(90 * widthRatio),
		(int)(48 * heightRatio)
	);
	this->label2->Size = System::Drawing::Size(
		(int)(382 * widthRatio),
		(int)(46 * heightRatio)
	);
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
