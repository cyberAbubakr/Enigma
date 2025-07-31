#pragma once

namespace Projectk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Encryption
	/// </summary>
	public ref class Encryption : public System::Windows::Forms::Form
	{
	public:
		Encryption(void);
		~Encryption();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		


	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);  // Only declare the function here (no definition)
#pragma endregion

		// Event handler method declarations, implemented in the .cpp file
		void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
		void button1_Click(System::Object^ sender, System::EventArgs^ e);
		void button2_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Encryption_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
