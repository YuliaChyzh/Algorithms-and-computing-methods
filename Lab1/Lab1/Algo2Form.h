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
	/// ������ ��� Algo2Form
	/// </summary>
	public ref class Algo2Form : public System::Windows::Forms::Form
	{
	public:
		Algo2Form(void)
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
		~Algo2Form()
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
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label10;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Algo2Form::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(544, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 31);
			this->button2->TabIndex = 8;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Algo2Form::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(20, 248);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(261, 143);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(497, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 58);
			this->button1->TabIndex = 12;
			this->button1->Text = L"������� ��� � �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Algo2Form::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Green;
			this->textBox2->Location = System::Drawing::Point(64, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 1;
			this->textBox2->Enter += gcnew System::EventHandler(this, &Algo2Form::textBox1_Enter);
			this->textBox2->Validated += gcnew System::EventHandler(this, &Algo2Form::textBox1_Validated);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Green;
			this->textBox1->Location = System::Drawing::Point(64, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->Enter += gcnew System::EventHandler(this, &Algo2Form::textBox1_Enter);
			this->textBox1->Validated += gcnew System::EventHandler(this, &Algo2Form::textBox1_Validated);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(342, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 31);
			this->label4->TabIndex = 7;
			this->label4->Text = L"y =";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(14, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 31);
			this->label2->TabIndex = 8;
			this->label2->Text = L"q =";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 31);
			this->label1->TabIndex = 9;
			this->label1->Text = L"i =";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::Green;
			this->textBox4->Location = System::Drawing::Point(64, 188);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 3;
			this->textBox4->Enter += gcnew System::EventHandler(this, &Algo2Form::textBox1_Enter);
			this->textBox4->Validated += gcnew System::EventHandler(this, &Algo2Form::textBox1_Validated);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::Green;
			this->textBox5->Location = System::Drawing::Point(64, 129);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 2;
			this->textBox5->Enter += gcnew System::EventHandler(this, &Algo2Form::textBox1_Enter);
			this->textBox5->Validated += gcnew System::EventHandler(this, &Algo2Form::textBox1_Validated);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(14, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 31);
			this->label3->TabIndex = 16;
			this->label3->Text = L"x =";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(14, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 31);
			this->label5->TabIndex = 17;
			this->label5->Text = L"v =";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(226, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 31);
			this->label6->TabIndex = 9;
			this->label6->Text = L"p =";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(226, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 31);
			this->label7->TabIndex = 8;
			this->label7->Text = L"h =";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::Color::Green;
			this->textBox6->Location = System::Drawing::Point(276, 15);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 4;
			this->textBox6->Enter += gcnew System::EventHandler(this, &Algo2Form::textBox1_Enter);
			this->textBox6->Validated += gcnew System::EventHandler(this, &Algo2Form::textBox1_Validated);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->ForeColor = System::Drawing::Color::Green;
			this->textBox7->Location = System::Drawing::Point(276, 74);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 5;
			this->textBox7->Enter += gcnew System::EventHandler(this, &Algo2Form::textBox1_Enter);
			this->textBox7->Validated += gcnew System::EventHandler(this, &Algo2Form::textBox1_Validated);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(226, 129);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 31);
			this->label8->TabIndex = 17;
			this->label8->Text = L"c =";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(226, 188);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 31);
			this->label9->TabIndex = 16;
			this->label9->Text = L"d =";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->ForeColor = System::Drawing::Color::Green;
			this->textBox8->Location = System::Drawing::Point(276, 134);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 26);
			this->textBox8->TabIndex = 6;
			this->textBox8->Enter += gcnew System::EventHandler(this, &Algo2Form::textBox1_Enter);
			this->textBox8->Validated += gcnew System::EventHandler(this, &Algo2Form::textBox1_Validated);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->ForeColor = System::Drawing::Color::Green;
			this->textBox9->Location = System::Drawing::Point(276, 193);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 26);
			this->textBox9->TabIndex = 7;
			this->textBox9->Enter += gcnew System::EventHandler(this, &Algo2Form::textBox1_Enter);
			this->textBox9->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Algo2Form::textBox_KeyUp);
			this->textBox9->Validated += gcnew System::EventHandler(this, &Algo2Form::textBox1_Validated);
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(402, 269);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 29);
			this->label10->TabIndex = 18;
			this->label10->Text = L"            ";
			// 
			// Algo2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 417);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Name = L"Algo2Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������� �2 (�������� ������������)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// �------� ��������� ������� ������� �������� ��������� �-----------
private: System::Void ClearText(int n, String ^s) {
			 switch (n)
			 {
				case 1: textBox1->Text = ""; break;
				case 2: textBox2->Text = ""; break;
				case 4: textBox4->Text = ""; break;
				case 5: textBox5->Text = ""; break;
				case 6: textBox6->Text = ""; break;
				case 7: textBox7->Text = ""; break;
				case 8: textBox8->Text = ""; break;
				case 9: textBox9->Text = ""; break;
				default:break;
			 }
		 label10->Text = "�� ���������";
		 MessageBox::Show(s, "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 bool readFile = false;	// ������ �������� ������� � �����
		 String ^str1, ^str2, ^str4, ^str5, ^str6, ^str7, ^str8, ^str9;		// ����� ������� � �����
		 StreamReader ^sreamRead;	// ����
		 char PathName[250];
		 GetCurrentDirectory(250, PathName);	// �������� ������ ���� �� �������
		 strcat_s(PathName, "\\Task\\Task2.txt"); // �������� �� ����� \Task\Task2.txt (���� �� ����������� ��������)
		 if (CreateFile(PathName, NULL, NULL, NULL, OPEN_EXISTING, 0, NULL) != INVALID_HANDLE_VALUE) {	// ���� ���� Task2.txt � � ����� Task 
			 sreamRead = gcnew StreamReader(gcnew String(PathName)); // ������� ���� ������� � ����� \Task\Task2.txt
			 readFile = true;	// ������ ������ �������
		 }
		 else {		// ������ ������� � ������� ���� ����� ����� OpenFileDialog
			 OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
			 openFileDialog->Title = "³������ ���� �� ���������� ��������� �������� �2"; // ���������� ��������� ����
			 openFileDialog->InitialDirectory = Path::Combine(Application::StartupPath, "\Task"); // ���������� ��������� ����� ��� ������� (����� Task ������� ���� � ����� �� exe-������)
			 openFileDialog->Filter = "����� �� ���������|*.txt|�� ����� (*.*)|*.*"; // ���������� ��� �������
			 openFileDialog->FilterIndex = 1; // ���������� ������ ������ �������� (��������)
			 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // ���� � ����� ������� ������� ���� � ��������� ��
				 sreamRead = gcnew StreamReader(openFileDialog->FileName); // ������� ���� ������� � ��������� �����
				 readFile = true;	// ������ ������ �������
			 }
		 }
		 if (readFile) {	// ���� ���� ������ �������
			 str1 = gcnew String(sreamRead->ReadLine()); // ��������� 1-� ����� (��� �������� �������� ����� i)
			 str2 = gcnew String(sreamRead->ReadLine()); // ��������� 2-� ����� (��� �������� �������� ����� q)
			 str4 = gcnew String(sreamRead->ReadLine()); // ��������� 3-� ����� (��� �������� �������� ����� x)
			 str5 = gcnew String(sreamRead->ReadLine()); // ��������� 4-� ����� (��� �������� �������� ����� v)
			 str6 = gcnew String(sreamRead->ReadLine()); // ��������� 5-� ����� (��� �������� �������� ����� p)
			 str7 = gcnew String(sreamRead->ReadLine()); // ��������� 6-� ����� (��� �������� �������� ����� h)
			 str8 = gcnew String(sreamRead->ReadLine()); // ��������� 7-� ����� (��� �������� �������� ����� c)
			 str9 = gcnew String(sreamRead->ReadLine()); // ��������� 8-� ����� (��� �������� �������� ����� d)
			 sreamRead->Close(); // ������� ���� �������
			 int i;
			 double q, d, v, x, c, h, p;
			 if ((!Int32::TryParse(Convert::ToString(str1), i)) || (!Double::TryParse(Convert::ToString(str2), q)) || (!Double::TryParse(Convert::ToString(str5), v)) || (!Double::TryParse(Convert::ToString(str4), x)) || (!Double::TryParse(Convert::ToString(str6), p)) || (!Double::TryParse(Convert::ToString(str7), h)) || (!Double::TryParse(Convert::ToString(str8), c)) || (!Double::TryParse(Convert::ToString(str9), d))) // ���� ��� ������ � ����� ������� �������
				 MessageBox::Show("��������� ����� ���", "������� ������� �����", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 else {
				 textBox1->Text = str1;		// �������� �������� ����� � ��� textBox-�� 
				 textBox2->Text = str2;
				 textBox5->Text = str5;
				 textBox4->Text = str4;
				 textBox6->Text = str6;
				 textBox7->Text = str7;
				 textBox8->Text = str8;
				 textBox9->Text = str9;
				 textBox1_Validated(sender, e);	// ��������� ��������� ������� ��������� � ���������� ����������
			 }
		 }
}
private: System::Void textBox1_Validated(System::Object^  sender, System::EventArgs^  e) {
		 int i;
		 double q,d,v,x,p,c,h;
			 //----�������� �� ����������� �������� �����---
		 if (!textBox1->Text->Length) return;
		 if (!Int32::TryParse(Convert::ToString(textBox1->Text), i)) {
			 ClearText(1, "������� �������� �����!");
			 textBox1->Focus(); 
			 return;
		 }
		 
		 if (!textBox2->Text->Length) return; 
		 if (!Double::TryParse(Convert::ToString(textBox2->Text), q)) {  
			 ClearText(2, "������� �������� �����!");
			 textBox2->Focus(); 
			 return;
		 }

		 if (!textBox4->Text->Length) return;
		 if (!Double::TryParse(Convert::ToString(textBox4->Text), x)) {
			 ClearText(4, "������� �������� �����!");
			 textBox4->Focus();
			 return;
		 }

		 if (!textBox5->Text->Length) return;
		 if (!Double::TryParse(Convert::ToString(textBox5->Text), v)) {
			 ClearText(5, "������� �������� �����!");
			 textBox5->Focus();
			 return;
		 }

		 if (!textBox6->Text->Length) return;
		 if (!Double::TryParse(Convert::ToString(textBox6->Text), p)) {
			 ClearText(6, "������� �������� �����!");
			 textBox6->Focus();
			 return;
		 }

		 if (!textBox7->Text->Length) return;
		 if (!Double::TryParse(Convert::ToString(textBox7->Text), h)) {
			 ClearText(7, "������� �������� �����!");
			 textBox7->Focus();
			 return;
		 }

		 if (!textBox8->Text->Length) return;
		 if (!Double::TryParse(Convert::ToString(textBox8->Text), c)) {
			 ClearText(8, "������� �������� �����!");
			 textBox8->Focus();
			 return;
		 }

		 if (!textBox9->Text->Length) return;
		 if (!Double::TryParse(Convert::ToString(textBox9->Text), d)) {
			 ClearText(9, "������� �������� �����!");
			 textBox9->Focus(); 
			 return;
		 }
		 			 //----�������� �� ��������� ���---
		 if (i % 3 == 0) {
			 if ((v + x) <= 0) {
				 ClearText(5, "���� x �� v �� ������������� ��� (v + x >= 0)!");
				 textBox5->Focus(); // ���������� ����� �������� �� textBox5
				 return;
			 }
			 if ((c + h) <= 0) {
				 ClearText(7, "���� c �� h �� ������������� ��� (c + h >= 0)!");
				 textBox7->Focus(); // ���������� ����� �������� �� textBox7
				 return;
			 }
		 }
		 else {
			 if ((pow(q, i) + x) <= 0) {
				 ClearText(2, "���� i,q,x �� ������������� ��� (pow(q, i) + x >= 0)!");
				 textBox2->Focus(); // ���������� ����� �������� �� textBox2
				 return;
			 }
			 if ((pow(p, i) + x) <= 0) {
				 ClearText(6, "���� i,p,x �� ������������� ��� (pow(p, i) + x >= 0)!");
				 textBox6->Focus(); // ���������� ����� �������� �� textBox6
				 return;
			 }
		 }
		label10->Text = Convert::ToString(DoAlgo2(i,q,d,v,x,c,h,p));
}
private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 if ((!textBox1->Text->Length) || (!textBox2->Text->Length) || (!textBox9->Text->Length) || (!textBox5->Text->Length) || (!textBox4->Text->Length) || (!textBox8->Text->Length) || (!textBox7->Text->Length) || (!textBox6->Text->Length))
			 label10->Text = "�� ���������";
}
private: System::Void textBox_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		 if (e->KeyCode == Keys::Enter)
			 textBox1_Validated(sender, e);	// ��������� ��������� ������� ��������� � ���������� ����������
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		  Close();
}


};
}
