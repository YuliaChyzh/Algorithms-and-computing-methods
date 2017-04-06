#include "calc.h"
#include "Windows.h"
#pragma once

namespace Lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(21, 58);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(223, 156);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(21, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 41);
			this->button1->TabIndex = 6;
			this->button1->Text = L"������� ��� � �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::OpenTask_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(225, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 41);
			this->button2->TabIndex = 7;
			this->button2->Text = L"³����������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Click_Sorting);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(295, 58);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(236, 156);
			this->textBox2->TabIndex = 8;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(401, 286);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 41);
			this->button4->TabIndex = 10;
			this->button4->Text = L"���� ��������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::NewTask_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(557, 344);
			this->panel1->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(282, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(263, 29);
			this->label2->TabIndex = 12;
			this->label2->Text = L"³����������� �����";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(178, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"                                         ";
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(16, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"��� ����������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"���������� �����";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(557, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->��������ToolStripMenuItem->Text = L"����� ��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->������ToolStripMenuItem->Text = L"��� ������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 369);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����������� ������ �2";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Click_Sorting(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Visible = false;
			 textBox2->Clear();
			 String ^str1;
			 int n = textBox1->Lines->Length;
			 if (!n) { // ���� � textBox1 ���� ������� �����
				 MessageBox::Show("� ����������� ����� ���� ������� ��������!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 textBox1->Focus(); // ���������� ����� �������� �� textBox1
				 return;
			 }
			 double *mas = new double[n];	// �������� ��������� ����� ������ �����
			 int i_mas = 0;		// �������� "����������" ������� (����� ������� �������� ������)
			 for (int i = 0; i < n; i++) {	// ��������� ��� ����� ������� �� ����� textBox1
				 str1 = gcnew String(Convert::ToString(textBox1->Lines[i]));	// �������� ����� �������
				 if (str1->Length && !Double::TryParse(Convert::ToString(textBox1->Lines[i]), mas[i_mas++])) {	// ���� ����� �������� � ������� ������� �����������
					 MessageBox::Show("������� �������� �����!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 textBox1->Focus(); // ���������� ����� �������� �� textBox1
					 return;
				 }
			 }
			 unsigned _int64 calc_time; // ����� ���������� ���� ��������� ��������� 
			 Stopwatch ^ timePerParse;	// ������� �������
			 timePerParse = Stopwatch::StartNew();  // ����� �������
			 SortMass(mas, i_mas);			// ���������� ����������
			 timePerParse->Stop();		// ���� �������	
			 calc_time = timePerParse->ElapsedMilliseconds;	// ���������� �-�� �������� ������ �������
			 label4->Text = Convert::ToString((double)calc_time / 1000) + " �";	
			 for (int i = 0; i < i_mas; i++) // �������� �� ����� �� textBox2
				 textBox2->AppendText(Convert::ToString(mas[i]) + Environment::NewLine);	// �������� ����� ����� � textBox2
			 label4->Visible = true;
			 textBox2->Visible = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Click_Sorting(sender, e);
}
private: System::Void OpenTask_Click(System::Object^  sender, System::EventArgs^  e) {
			 bool readFile = false;		// ������ �������� ������� � �����
			 String ^str1, ^str2;		// ����� ������� � �����
			 StreamReader ^sreamRead;	// ����
			 char PathName[250];
			 NewTask_Click(sender, e);	// ��������� ��'���� �� ������ ��������
			 textBox1->Visible = false;	
			 textBox2->Visible = false;
			 GetCurrentDirectory(250, PathName);	// �������� ������ ���� �� �������
			 strcat_s(PathName, "\\Task\\Task1.txt"); // �������� �� ����� \Res\Task1.txt (���� �� ����������� ��������)
			 if (CreateFile(PathName, NULL, NULL, NULL, OPEN_EXISTING, 0, NULL) != INVALID_HANDLE_VALUE) {	// ���� ���� Task1.txt � � ����� Task 
				 sreamRead = gcnew StreamReader(gcnew String(PathName)); // ������� ���� ������� � ����� \Task\Task1.txt
				 readFile = true;	// ������ ������ �������
			 }
			 else {		// ������ ������� � ������� ���� ����� ����� OpenFileDialog
				 OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
				 openFileDialog->Title = "³������ ���� �� ���������� ����������� ������"; // ���������� ��������� ����
				 openFileDialog->InitialDirectory = Path::Combine(Application::StartupPath, "\Task"); // ���������� ��������� ����� ��� ������� (����� Res ������� ���� � ����� �� exe-������)
				 openFileDialog->Filter = "����� �� ���������|*.txt|�� ����� (*.*)|*.*"; // ���������� ��� �������
				 openFileDialog->FilterIndex = 1; // ���������� ������ ������ �������� (��������)
				 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // ���� � ����� ������� ������� ���� � ��������� ��
					 sreamRead = gcnew StreamReader(openFileDialog->FileName); // ������� ���� ������� � ��������� �����
					 readFile = true;	// ������ ������ �������
				 }
			 }
			 if (readFile) {	// ���� ���� ������ �������
				 int n;			// ���� ��������� ������
				 str1 = gcnew String(sreamRead->ReadLine());
				 if ((!Int32::TryParse(Convert::ToString(str1), n))||(n<=0)) // ���� ��� ������ � ����� ������� �������
					 MessageBox::Show("��������� ������� ��������", "������� ������� �����", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 else {
					 double el;
					 bool flag = true;	// ������ ������� ����������� ����� � �����
					 for (int i = 0; i < n && flag; i++) {
						 str2 = gcnew String(sreamRead->ReadLine());
						 flag = Double::TryParse(Convert::ToString(str2), el) && flag;	// �������� ���������� �������� �����
						 textBox1->AppendText((i < n - 1) ? str2 + Environment::NewLine : str2);	// �������� ����� ����� � textBox1
					 }
					 sreamRead->Close();
					 textBox1->Visible = true;
					 if (flag) 	// ���� ����������� ��� ����� ������� ������
						 Click_Sorting(sender, e);
					 else {
						 textBox1->Clear();
						 MessageBox::Show("��������� ����� ���", "������� ������� �����", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 }
				 }
			 }
}
private: System::Void NewTask_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Clear();
			 textBox2->Clear();
			 textBox1->Visible = true;
			 label4->Visible = false;
			 textBox2->Visible = false;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("\t�������� ��������� ����� ��-54\n\t          ���������� - Բ��\n\t\t����\"�ϲ\"\n\t         ��� ��� ���������\n\n\te-mail: yulia_yulia01@ukr.net\n      �������: +3(098) 322 00 48, +3(095) 043 75 77", "��� ������", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("\t     ����������� ������ �2\n   \"������������� ��������� ��������� ����������\"\n\t               ������ �17\n     �������� 3.1. ���������� ������� � �������\n\t  ������������� ��������", "��������", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
