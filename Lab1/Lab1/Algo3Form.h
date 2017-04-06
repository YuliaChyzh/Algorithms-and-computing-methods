#include "calc.h"
#include "Windows.h"
#pragma once

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� Algo3Form
	/// </summary>
	public ref class Algo3Form : public System::Windows::Forms::Form
	{
	public:
		Algo3Form(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Algo3Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Algo3Form::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(384, 225);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Algo3Form::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(112, 96);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(254, 107);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(306, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 58);
			this->button1->TabIndex = 12;
			this->button1->Text = L"������� ��� � �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Algo3Form::button1_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(19, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 31);
			this->label4->TabIndex = 7;
			this->label4->Text = L"f =";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::Green;
			this->textBox4->Location = System::Drawing::Point(62, 34);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 0;
			this->textBox4->Enter += gcnew System::EventHandler(this, &Algo3Form::textBox4_Enter);
			this->textBox4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Algo3Form::textBox4_KeyUp);
			this->textBox4->Validated += gcnew System::EventHandler(this, &Algo3Form::textBox1_Validated);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 31);
			this->label3->TabIndex = 16;
			this->label3->Text = L"n =";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 29);
			this->label1->TabIndex = 17;
			this->label1->Text = L"            ";
			// 
			// Algo3Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(495, 277);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Name = L"Algo3Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������� �3 (�������� ��������)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			 // �------� ��������� ������� ������� �������� ��������� �-----------
private: System::Void ClearText(String ^s) {
			 textBox4->Text = ""; // �������� textBox4
			 label1->Text = "�� ���������";
			 MessageBox::Show(s, "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 bool readFile = false;	// ������ �������� ������� � �����
			 String ^str1;			// ����� ������� � �����
			 StreamReader ^sreamRead;	// ����
			 char PathName[250];
			 GetCurrentDirectory(250, PathName);	// �������� ������ ���� �� �������
			 strcat_s(PathName, "\\Task\\Task3.txt"); // �������� �� ����� \Res\Task3.txt (���� �� ����������� ��������)
			 if (CreateFile(PathName, NULL, NULL, NULL, OPEN_EXISTING, 0, NULL) != INVALID_HANDLE_VALUE) {	// ���� ���� Task3.txt � � ����� Task 
				 sreamRead = gcnew StreamReader(gcnew String(PathName)); // ������� ���� ������� � ����� \Task\Task3.txt
				 readFile = true;	// ������ ������ �������
			 }
			 else {		// ������ ������� � ������� ���� ����� ����� OpenFileDialog
				 OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
				 openFileDialog->Title = "³������ ���� �� ���������� ��������� �������� �3"; // ���������� ��������� ����
				 openFileDialog->InitialDirectory = Path::Combine(Application::StartupPath, "\Task"); // ���������� ��������� ����� ��� ������� (����� Task ������� ���� � ����� �� exe-������)
				 openFileDialog->Filter = "����� �� ���������|*.txt|�� ����� (*.*)|*.*"; // ���������� ��� �������
				 openFileDialog->FilterIndex = 1; // ���������� ������ ������ �������� (��������)
				 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // ���� � ����� ������� ������� ���� � ��������� ��
					 sreamRead = gcnew StreamReader(openFileDialog->FileName); // ������� ���� ������� � ��������� �����
					 readFile = true;	// ������ ������ �������
				 }
			 }
			 if (readFile) {	// ���� ���� ������ �������
				 str1 = gcnew String(sreamRead->ReadLine()); // ��������� ������ ����� (��� �������� ����t��� ����� n)
				 sreamRead->Close(); // ������� ���� �������
				 int n;
				 if ((!Int32::TryParse(Convert::ToString(str1), n))) // ���� ��� ������ � ����� ������� �������
					 MessageBox::Show("��������� ����� ���", "������� ������� �����", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 else {
					 textBox4->Text = str1;			// �������� ����� ����� � textBox4 
					 textBox1_Validated(sender, e);	// ��������� ��������� ������� ��������� � ���������� ����������
				 }
			 }
}
private: System::Void textBox1_Validated(System::Object^  sender, System::EventArgs^  e) {
			 int n;
			 if (!textBox4->Text->Length) return;
			 if (!Int32::TryParse(Convert::ToString(textBox4->Text), n)) { // ������������ n � int � ��������� �����������
				 ClearText("������� �������� �����!");
				 textBox4->Focus(); // ���������� ����� �������� �� textBox1
				 return;
			 }
			 if (n<1) { // ���� n<1
				 ClearText("����� n ������� ���� ������, �� 1!");
				 textBox4->Focus(); // ���������� ����� �������� �� textBox1
				 return;
			 }
			 label1->Text = Convert::ToString(DoAlgo3(n));
	};
private: System::Void textBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if ((!textBox4->Text->Length))		// ���� � ���i ���� ��������
				 label1->Text = "�� ���������";
}
private: System::Void textBox4_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
				 textBox1_Validated(sender, e);	// ��������� ��������� ������� ��������� � ���������� ����������
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}

};
}
