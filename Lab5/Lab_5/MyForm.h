#include "calc.h"
#include "InvForm.h"

#pragma once

namespace Lab_5 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace msclr::interop;
	using namespace System::Diagnostics;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
			//TODO: �������� ��� ������������
		}

	protected:
		~MyForm() {	// ���������� ��� ������������ �������.
			if (components) {
				delete components;
			}
		}

	protected:
		// ������� ����
	private: System::Windows::Forms::MenuStrip^  menuStripGlav;
			 // ������ ��������� ���� (� ����������)
	private: System::Windows::Forms::ToolStripMenuItem^  mFile;
	private: System::Windows::Forms::ToolStripMenuItem^  mNewTask;
	private: System::Windows::Forms::ToolStripMenuItem^  mOpen;
	private: System::Windows::Forms::ToolStripMenuItem^  mRandom;
	private: System::Windows::Forms::ToolStripMenuItem^  mCalc;
	private: System::Windows::Forms::ToolStripMenuItem^  mHelp;
	private: System::Windows::Forms::ToolStripMenuItem^  mAutor;
	private: System::Windows::Forms::ToolStripMenuItem^  mRegulations;
	private: System::Windows::Forms::ToolStripMenuItem^  mExit;
			 // ������ ��
	private: System::Windows::Forms::Button^  bNewTask;
	private: System::Windows::Forms::Button^  bRandom;
	private: System::Windows::Forms::Button^  bOpen;
	private: System::Windows::Forms::Button^  bCalc;
			 // ��� (����), �� ��'���� �� ������ ��
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelLeft;
			 // GroupBox � ���� RadioButton-���� ������ ������ ���������� �������� �������
	private: System::Windows::Forms::GroupBox^  groupBoxMetod;
	private: System::Windows::Forms::RadioButton^  radioFreeSystem;

	private: System::Windows::Forms::RadioButton^  radioV17;

			 // ���, �� ��'���� ����� � NumericUpDown ��� �������� ��������� ������� 
	private: System::Windows::Forms::Label^  labelSize;
	private: System::Windows::Forms::NumericUpDown^  matrixSize;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelMatrixSize;
	private: System::Windows::Forms::DataGridView^  matrix_table;
			 // DataGridView ��� �������� ������� �������� ������ �������

			 // ��� (������), �� ��'���� ���� GroupBox, tableLayoutPanelMatrixSize �� DataGridView   
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelRigth;
			 // ���, �� ��'���� ���� � ������ ����
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutGlav;
	private: System::Windows::Forms::ToolStripMenuItem^  mSaveTask;
	private: System::Windows::Forms::Label^  labelEps;
	private: System::Windows::Forms::TextBox^  textBoxEps;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numeric_W;



	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
			 // ------------ ������������ ����� ��� ��������� ������������ (�� ��������� ���������� ������� ������ ��� ������ ��������� ����) ------------
			 void InitializeComponent(void) {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 this->menuStripGlav = (gcnew System::Windows::Forms::MenuStrip());
				 this->mFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->mNewTask = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->mOpen = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->mRandom = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->mCalc = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->mSaveTask = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->mHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->mAutor = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->mRegulations = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->mExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->bRandom = (gcnew System::Windows::Forms::Button());
				 this->bOpen = (gcnew System::Windows::Forms::Button());
				 this->bNewTask = (gcnew System::Windows::Forms::Button());
				 this->bCalc = (gcnew System::Windows::Forms::Button());
				 this->tableLayoutPanelLeft = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->groupBoxMetod = (gcnew System::Windows::Forms::GroupBox());
				 this->radioFreeSystem = (gcnew System::Windows::Forms::RadioButton());
				 this->radioV17 = (gcnew System::Windows::Forms::RadioButton());
				 this->tableLayoutPanelMatrixSize = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->labelSize = (gcnew System::Windows::Forms::Label());
				 this->matrixSize = (gcnew System::Windows::Forms::NumericUpDown());
				 this->textBoxEps = (gcnew System::Windows::Forms::TextBox());
				 this->labelEps = (gcnew System::Windows::Forms::Label());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->numeric_W = (gcnew System::Windows::Forms::NumericUpDown());
				 this->tableLayoutGlav = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->tableLayoutPanelRigth = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->matrix_table = (gcnew System::Windows::Forms::DataGridView());
				 this->menuStripGlav->SuspendLayout();
				 this->tableLayoutPanelLeft->SuspendLayout();
				 this->groupBoxMetod->SuspendLayout();
				 this->tableLayoutPanelMatrixSize->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixSize))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_W))->BeginInit();
				 this->tableLayoutGlav->SuspendLayout();
				 this->tableLayoutPanelRigth->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix_table))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // menuStripGlav
				 // 
				 this->menuStripGlav->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					 this->mFile, this->mHelp,
						 this->mExit
				 });
				 this->menuStripGlav->Location = System::Drawing::Point(0, 0);
				 this->menuStripGlav->Name = L"menuStripGlav";
				 this->menuStripGlav->Size = System::Drawing::Size(895, 27);
				 this->menuStripGlav->TabIndex = 3;
				 this->menuStripGlav->Text = L"menuStrip1";
				 // 
				 // mFile
				 // 
				 this->mFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
					 this->mNewTask, this->mOpen,
						 this->mRandom, this->mCalc, this->mSaveTask
				 });
				 this->mFile->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->mFile->Name = L"mFile";
				 this->mFile->Size = System::Drawing::Size(61, 23);
				 this->mFile->Text = L"&����";
				 // 
				 // mNewTask
				 // 
				 this->mNewTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mNewTask.Image")));
				 this->mNewTask->Name = L"mNewTask";
				 this->mNewTask->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
				 this->mNewTask->Size = System::Drawing::Size(379, 24);
				 this->mNewTask->Text = L"���� ��������";
				 this->mNewTask->Click += gcnew System::EventHandler(this, &MyForm::NewTask_Click);
				 // 
				 // mOpen
				 // 
				 this->mOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mOpen.Image")));
				 this->mOpen->Name = L"mOpen";
				 this->mOpen->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
				 this->mOpen->Size = System::Drawing::Size(379, 24);
				 this->mOpen->Text = L"³������ ���� � ������";
				 this->mOpen->Click += gcnew System::EventHandler(this, &MyForm::open_Click);
				 // 
				 // mRandom
				 // 
				 this->mRandom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mRandom.Image")));
				 this->mRandom->Name = L"mRandom";
				 this->mRandom->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
				 this->mRandom->Size = System::Drawing::Size(379, 24);
				 this->mRandom->Text = L"��������� ����������� �������";
				 this->mRandom->Click += gcnew System::EventHandler(this, &MyForm::random_Click);
				 // 
				 // mCalc
				 // 
				 this->mCalc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mCalc.Image")));
				 this->mCalc->Name = L"mCalc";
				 this->mCalc->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::M));
				 this->mCalc->Size = System::Drawing::Size(379, 24);
				 this->mCalc->Text = L"����\'����� ����";
				 this->mCalc->Click += gcnew System::EventHandler(this, &MyForm::Calc_Click);
				 // 
				 // mSaveTask
				 // 
				 this->mSaveTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mSaveTask.Image")));
				 this->mSaveTask->Name = L"mSaveTask";
				 this->mSaveTask->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
				 this->mSaveTask->Size = System::Drawing::Size(379, 24);
				 this->mSaveTask->Text = L"�������� ����� �� ...";
				 this->mSaveTask->Click += gcnew System::EventHandler(this, &MyForm::SaveTask_Click);
				 // 
				 // mHelp
				 // 
				 this->mHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->mAutor, this->mRegulations });
				 this->mHelp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->mHelp->Name = L"mHelp";
				 this->mHelp->Size = System::Drawing::Size(78, 23);
				 this->mHelp->Text = L"&������";
				 // 
				 // mAutor
				 // 
				 this->mAutor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mAutor.Image")));
				 this->mAutor->Name = L"mAutor";
				 this->mAutor->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::I));
				 this->mAutor->Size = System::Drawing::Size(272, 24);
				 this->mAutor->Text = L"��� &������";
				 this->mAutor->Click += gcnew System::EventHandler(this, &MyForm::Autor_Click);
				 // 
				 // mRegulations
				 // 
				 this->mRegulations->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mRegulations.Image")));
				 this->mRegulations->Name = L"mRegulations";
				 this->mRegulations->ShortcutKeys = System::Windows::Forms::Keys::F1;
				 this->mRegulations->Size = System::Drawing::Size(272, 24);
				 this->mRegulations->Text = L"������� &������������";
				 this->mRegulations->Click += gcnew System::EventHandler(this, &MyForm::Regulations_Click);
				 // 
				 // mExit
				 // 
				 this->mExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->mExit->Name = L"mExit";
				 this->mExit->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
				 this->mExit->Size = System::Drawing::Size(61, 23);
				 this->mExit->Text = L"��&���";
				 this->mExit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
				 // 
				 // bRandom
				 // 
				 this->bRandom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->bRandom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
				 this->bRandom->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->bRandom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bRandom.Image")));
				 this->bRandom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->bRandom->Location = System::Drawing::Point(3, 154);
				 this->bRandom->MinimumSize = System::Drawing::Size(80, 70);
				 this->bRandom->Name = L"bRandom";
				 this->bRandom->Size = System::Drawing::Size(154, 70);
				 this->bRandom->TabIndex = 1;
				 this->bRandom->Text = L"���������\r\n�����������\r\n&�������";
				 this->bRandom->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->bRandom->UseVisualStyleBackColor = true;
				 this->bRandom->Click += gcnew System::EventHandler(this, &MyForm::random_Click);
				 // 
				 // bOpen
				 // 
				 this->bOpen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->bOpen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->bOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bOpen.Image")));
				 this->bOpen->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->bOpen->Location = System::Drawing::Point(3, 239);
				 this->bOpen->MinimumSize = System::Drawing::Size(80, 70);
				 this->bOpen->Name = L"bOpen";
				 this->bOpen->Size = System::Drawing::Size(154, 70);
				 this->bOpen->TabIndex = 2;
				 this->bOpen->Text = L"&³������\r\n ���� \r\n� ������";
				 this->bOpen->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->bOpen->UseVisualStyleBackColor = true;
				 this->bOpen->Click += gcnew System::EventHandler(this, &MyForm::open_Click);
				 // 
				 // bNewTask
				 // 
				 this->bNewTask->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->bNewTask->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
				 this->bNewTask->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->bNewTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bNewTask.Image")));
				 this->bNewTask->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->bNewTask->Location = System::Drawing::Point(3, 68);
				 this->bNewTask->MinimumSize = System::Drawing::Size(80, 70);
				 this->bNewTask->Name = L"bNewTask";
				 this->bNewTask->RightToLeft = System::Windows::Forms::RightToLeft::No;
				 this->bNewTask->Size = System::Drawing::Size(154, 70);
				 this->bNewTask->TabIndex = 0;
				 this->bNewTask->Text = L"&����\r\n��������";
				 this->bNewTask->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->bNewTask->UseVisualStyleBackColor = true;
				 this->bNewTask->Click += gcnew System::EventHandler(this, &MyForm::NewTask_Click);
				 // 
				 // bCalc
				 // 
				 this->bCalc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->bCalc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->bCalc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bCalc.Image")));
				 this->bCalc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->bCalc->Location = System::Drawing::Point(3, 412);
				 this->bCalc->MinimumSize = System::Drawing::Size(80, 70);
				 this->bCalc->Name = L"bCalc";
				 this->bCalc->Size = System::Drawing::Size(154, 70);
				 this->bCalc->TabIndex = 3;
				 this->bCalc->Text = L"&����\'�����\r\n����";
				 this->bCalc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->bCalc->UseVisualStyleBackColor = true;
				 this->bCalc->Click += gcnew System::EventHandler(this, &MyForm::Calc_Click);
				 // 
				 // tableLayoutPanelLeft
				 // 
				 this->tableLayoutPanelLeft->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left));
				 this->tableLayoutPanelLeft->AutoScroll = true;
				 this->tableLayoutPanelLeft->AutoSize = true;
				 this->tableLayoutPanelLeft->ColumnCount = 1;
				 this->tableLayoutPanelLeft->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 100)));
				 this->tableLayoutPanelLeft->Controls->Add(this->bRandom, 0, 3);
				 this->tableLayoutPanelLeft->Controls->Add(this->bCalc, 0, 7);
				 this->tableLayoutPanelLeft->Controls->Add(this->bOpen, 0, 5);
				 this->tableLayoutPanelLeft->Controls->Add(this->bNewTask, 0, 1);
				 this->tableLayoutPanelLeft->Location = System::Drawing::Point(3, 3);
				 this->tableLayoutPanelLeft->MinimumSize = System::Drawing::Size(160, 380);
				 this->tableLayoutPanelLeft->Name = L"tableLayoutPanelLeft";
				 this->tableLayoutPanelLeft->RowCount = 8;
				 this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
					 65)));
				 this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
					 10)));
				 this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
					 9)));
				 this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
					 20)));
				 this->tableLayoutPanelLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanelLeft->Size = System::Drawing::Size(160, 485);
				 this->tableLayoutPanelLeft->TabIndex = 4;
				 // 
				 // groupBoxMetod
				 // 
				 this->groupBoxMetod->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->groupBoxMetod->Controls->Add(this->radioFreeSystem);
				 this->groupBoxMetod->Controls->Add(this->radioV17);
				 this->groupBoxMetod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->groupBoxMetod->Location = System::Drawing::Point(3, 3);
				 this->groupBoxMetod->MinimumSize = System::Drawing::Size(0, 50);
				 this->groupBoxMetod->Name = L"groupBoxMetod";
				 this->groupBoxMetod->Size = System::Drawing::Size(703, 61);
				 this->groupBoxMetod->TabIndex = 4;
				 this->groupBoxMetod->TabStop = false;
				 this->groupBoxMetod->Text = L"���� ������ ����\'�������� ����";
				 // 
				 // radioFreeSystem
				 // 
				 this->radioFreeSystem->AutoSize = true;
				 this->radioFreeSystem->Location = System::Drawing::Point(368, 25);
				 this->radioFreeSystem->Name = L"radioFreeSystem";
				 this->radioFreeSystem->Size = System::Drawing::Size(152, 23);
				 this->radioFreeSystem->TabIndex = 6;
				 this->radioFreeSystem->Text = L"&������� �������";
				 this->radioFreeSystem->UseVisualStyleBackColor = true;
				 this->radioFreeSystem->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioFreeSystem_CheckedChanged);
				 // 
				 // radioV17
				 // 
				 this->radioV17->AutoSize = true;
				 this->radioV17->Checked = true;
				 this->radioV17->Location = System::Drawing::Point(66, 25);
				 this->radioV17->Name = L"radioV17";
				 this->radioV17->Size = System::Drawing::Size(185, 23);
				 this->radioV17->TabIndex = 5;
				 this->radioV17->TabStop = true;
				 this->radioV17->Text = L"&����������� �������";
				 this->radioV17->UseVisualStyleBackColor = true;
				 this->radioV17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioV17_CheckedChanged);
				 // 
				 // tableLayoutPanelMatrixSize
				 // 
				 this->tableLayoutPanelMatrixSize->ColumnCount = 6;
				 this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
				 this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
				 this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					 132)));
				 this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
				 this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					 134)));
				 this->tableLayoutPanelMatrixSize->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					 61)));
				 this->tableLayoutPanelMatrixSize->Controls->Add(this->labelSize, 0, 0);
				 this->tableLayoutPanelMatrixSize->Controls->Add(this->matrixSize, 1, 0);
				 this->tableLayoutPanelMatrixSize->Controls->Add(this->textBoxEps, 3, 0);
				 this->tableLayoutPanelMatrixSize->Controls->Add(this->labelEps, 2, 0);
				 this->tableLayoutPanelMatrixSize->Controls->Add(this->label1, 4, 0);
				 this->tableLayoutPanelMatrixSize->Controls->Add(this->numeric_W, 5, 0);
				 this->tableLayoutPanelMatrixSize->Location = System::Drawing::Point(3, 70);
				 this->tableLayoutPanelMatrixSize->Name = L"tableLayoutPanelMatrixSize";
				 this->tableLayoutPanelMatrixSize->RowCount = 1;
				 this->tableLayoutPanelMatrixSize->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
					 100)));
				 this->tableLayoutPanelMatrixSize->Size = System::Drawing::Size(613, 52);
				 this->tableLayoutPanelMatrixSize->TabIndex = 7;
				 // 
				 // labelSize
				 // 
				 this->labelSize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
				 this->labelSize->AutoSize = true;
				 this->labelSize->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->labelSize->Location = System::Drawing::Point(3, 16);
				 this->labelSize->Name = L"labelSize";
				 this->labelSize->Size = System::Drawing::Size(138, 19);
				 this->labelSize->TabIndex = 1;
				 this->labelSize->Text = L"��������� ����";
				 // 
				 // matrixSize
				 // 
				 this->matrixSize->Anchor = System::Windows::Forms::AnchorStyles::None;
				 this->matrixSize->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->matrixSize->Location = System::Drawing::Point(147, 13);
				 this->matrixSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32000, 0, 0, 0 });
				 this->matrixSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
				 this->matrixSize->Name = L"matrixSize";
				 this->matrixSize->Size = System::Drawing::Size(75, 26);
				 this->matrixSize->TabIndex = 7;
				 this->matrixSize->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->matrixSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
				 this->matrixSize->ValueChanged += gcnew System::EventHandler(this, &MyForm::matrixSizeValueChanged);
				 this->matrixSize->Leave += gcnew System::EventHandler(this, &MyForm::matrixSizeValueChanged);
				 // 
				 // textBoxEps
				 // 
				 this->textBoxEps->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
				 this->textBoxEps->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->textBoxEps->Location = System::Drawing::Point(360, 13);
				 this->textBoxEps->Name = L"textBoxEps";
				 this->textBoxEps->Size = System::Drawing::Size(55, 26);
				 this->textBoxEps->TabIndex = 8;
				 this->textBoxEps->Text = L"1e-5";
				 this->textBoxEps->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->textBoxEps->Leave += gcnew System::EventHandler(this, &MyForm::textBoxEps_Leave);
				 // 
				 // labelEps
				 // 
				 this->labelEps->Anchor = System::Windows::Forms::AnchorStyles::Right;
				 this->labelEps->AutoSize = true;
				 this->labelEps->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->labelEps->Location = System::Drawing::Point(261, 7);
				 this->labelEps->Name = L"labelEps";
				 this->labelEps->Size = System::Drawing::Size(93, 38);
				 this->labelEps->TabIndex = 8;
				 this->labelEps->Text = L"�������\r\n����������";
				 this->labelEps->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // label1
				 // 
				 this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
				 this->label1->AutoSize = true;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Symbol", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(2)));
				 this->label1->Location = System::Drawing::Point(516, 14);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(33, 23);
				 this->label1->TabIndex = 9;
				 this->label1->Text = L"w:";
				 this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // numeric_W
				 // 
				 this->numeric_W->Anchor = System::Windows::Forms::AnchorStyles::None;
				 this->numeric_W->DecimalPlaces = 1;
				 this->numeric_W->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->numeric_W->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
				 this->numeric_W->Location = System::Drawing::Point(555, 13);
				 this->numeric_W->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 19, 0, 0, 65536 });
				 this->numeric_W->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11, 0, 0, 65536 });
				 this->numeric_W->Name = L"numeric_W";
				 this->numeric_W->Size = System::Drawing::Size(55, 26);
				 this->numeric_W->TabIndex = 9;
				 this->numeric_W->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 this->numeric_W->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 65536 });
				 this->numeric_W->Leave += gcnew System::EventHandler(this, &MyForm::numericW_Leave);
				 // 
				 // tableLayoutGlav
				 // 
				 this->tableLayoutGlav->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->tableLayoutGlav->AutoSize = true;
				 this->tableLayoutGlav->ColumnCount = 3;
				 this->tableLayoutGlav->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
				 this->tableLayoutGlav->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 100)));
				 this->tableLayoutGlav->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					 20)));
				 this->tableLayoutGlav->Controls->Add(this->tableLayoutPanelLeft, 0, 0);
				 this->tableLayoutGlav->Controls->Add(this->tableLayoutPanelRigth, 1, 0);
				 this->tableLayoutGlav->Location = System::Drawing::Point(0, 27);
				 this->tableLayoutGlav->MinimumSize = System::Drawing::Size(700, 480);
				 this->tableLayoutGlav->Name = L"tableLayoutGlav";
				 this->tableLayoutGlav->RowCount = 2;
				 this->tableLayoutGlav->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
				 this->tableLayoutGlav->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
				 this->tableLayoutGlav->Size = System::Drawing::Size(901, 511);
				 this->tableLayoutGlav->TabIndex = 6;
				 // 
				 // tableLayoutPanelRigth
				 // 
				 this->tableLayoutPanelRigth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->tableLayoutPanelRigth->AutoSize = true;
				 this->tableLayoutPanelRigth->ColumnCount = 1;
				 this->tableLayoutPanelRigth->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
				 this->tableLayoutPanelRigth->Controls->Add(this->tableLayoutPanelMatrixSize, 0, 1);
				 this->tableLayoutPanelRigth->Controls->Add(this->groupBoxMetod, 0, 0);
				 this->tableLayoutPanelRigth->Controls->Add(this->matrix_table, 0, 2);
				 this->tableLayoutPanelRigth->Location = System::Drawing::Point(169, 3);
				 this->tableLayoutPanelRigth->Name = L"tableLayoutPanelRigth";
				 this->tableLayoutPanelRigth->RowCount = 3;
				 this->tableLayoutPanelRigth->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanelRigth->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanelRigth->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanelRigth->Size = System::Drawing::Size(709, 485);
				 this->tableLayoutPanelRigth->TabIndex = 0;
				 // 
				 // matrix_table
				 // 
				 this->matrix_table->AllowUserToAddRows = false;
				 this->matrix_table->AllowUserToDeleteRows = false;
				 this->matrix_table->AllowUserToResizeColumns = false;
				 this->matrix_table->AllowUserToResizeRows = false;
				 this->matrix_table->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->matrix_table->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->matrix_table->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
				 this->matrix_table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
				 dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
				 dataGridViewCellStyle1->BackColor = System::Drawing::Color::Gold;
				 dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
				 dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
				 dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
				 dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
				 this->matrix_table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
				 this->matrix_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->matrix_table->ColumnHeadersVisible = false;
				 dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
				 dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
				 dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
				 dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
				 dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
				 dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
				 this->matrix_table->DefaultCellStyle = dataGridViewCellStyle2;
				 this->matrix_table->Location = System::Drawing::Point(3, 128);
				 this->matrix_table->Name = L"matrix_table";
				 this->matrix_table->RowHeadersVisible = false;
				 this->matrix_table->RowHeadersWidth = 10;
				 this->matrix_table->Size = System::Drawing::Size(703, 369);
				 this->matrix_table->TabIndex = 10;
				 this->matrix_table->CellStateChanged += gcnew System::Windows::Forms::DataGridViewCellStateChangedEventHandler(this, &MyForm::matrix_table_CellStateChanged);
				 this->matrix_table->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::matrix_table_CellValueChanged);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(895, 532);
				 this->Controls->Add(this->tableLayoutGlav);
				 this->Controls->Add(this->menuStripGlav);
				 this->KeyPreview = true;
				 this->MainMenuStrip = this->menuStripGlav;
				 this->MinimumSize = System::Drawing::Size(820, 570);
				 this->Name = L"MyForm";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"����\'�������� ���� (����� ������� ����������)";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
				 this->menuStripGlav->ResumeLayout(false);
				 this->menuStripGlav->PerformLayout();
				 this->tableLayoutPanelLeft->ResumeLayout(false);
				 this->groupBoxMetod->ResumeLayout(false);
				 this->groupBoxMetod->PerformLayout();
				 this->tableLayoutPanelMatrixSize->ResumeLayout(false);
				 this->tableLayoutPanelMatrixSize->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixSize))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_W))->EndInit();
				 this->tableLayoutGlav->ResumeLayout(false);
				 this->tableLayoutGlav->PerformLayout();
				 this->tableLayoutPanelRigth->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix_table))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
			 // ================== �������� ������ ������� ===============================
			 // ---------- ���������� �������� �� ���������� ����� Grid-a � ������ ���� �������� � ������� ----------------
	private: float** GridToMatrix(int N) { // ��������� �������
				 bool err = false;				// ��������� ������� (������� �������)
				 float **matrix = new float*[N];		// �������� ���� �������
				 for (int i = 0; i < N && !err; i++) {	// ���� �� ������ �������
					 matrix[i] = new float[N];			// ��������� ������ ����� ������� 
					 for (int j = 0; j < N+1 && !err; j++) {
						 err = !float::TryParse(Convert::ToString(matrix_table->Rows[i]->Cells[j]->Value), matrix[i][j]);	// ������������ ������� � float � ��������� �����������  
						 if (err) { // ���� ��� ����������� ������� �������, ��������� ��� �� � ��������� ����������� (����� �� �����)
							 System::String ^st1 = gcnew System::String("������� [");	// ���������� ����� ����������� ��� �������
							 st1 = st1->Concat(st1->Concat(st1->Concat(st1->Concat(st1, Convert::ToString(i)), "]["), Convert::ToString(j)), "] ������ ���������� ��������");
							 MessageBox::Show(st1, "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 }
					 }
				 }
				 return (err) ? NULL : matrix;	// ���������: NULL, ���� ������� �������, ������, ������ ������� � 
	}
			 // ---------- ���������� ������ ������� ��������� N �� Gr�d-a ----------------
	private: System::Void MatrixToGrid(float** matrix, int N) {	// ������ �������, �� ���������
				 matrixSize->Value = N;			// �������� ��������� � matrixSize 
				 for (int i = 0; i < N; i++)	// ���� �� ��� ��������� �������
				 for (int j = 0; j < N+1; j++)
					 matrix_table->Rows[i]->Cells[j]->Value = matrix[i][j];  // �������� � [i][j]-�� ������� Gr�d-a �������� � ������ �������
				 matrix_table->AutoResizeColumns();  // �������� ������ Grid-a
	}
			 // ---------- ���������� ������ ������� ��������� N �� ��������� ����� file ----------------
	private: System::Void SaveTo(float ** matrix, String ^file, int N) {	// ������ �������, �������� �� ����� �� � ������ ������ �� �����, ��������� �������
				 System::String ^st1 = gcnew System::String("");		// ����� ��� ������ ����� 
				 System::IO::StreamWriter ^streamWrite = gcnew System::IO::StreamWriter(file, false);	// ������� ���� (����) ��� ������ (���� ���� ��� ���� - ������������ ����)
				 streamWrite->WriteLine(Convert::ToString(N));	// �������� � ���� ��������� ������� �
				 for (int i = 0; i < N; i++) {		// ���� �� N-������ ������� �  
					 st1 = "";	// �������� �����
					 for (int j = 0; j < N+1; j++) {	// c��������� � �������� �� ����� �������
						 st1 = st1->Concat(st1, Convert::ToString(matrix[i][j])); // �������� �� ����� ��������� ������� �������
						 st1 += (j < N ) ? " " : "";	// �������� ������� ���� ������� ���������� (��� ����������)
					 }
					 streamWrite->WriteLine(st1->Replace(",", "."));		// �������� ����������� ����� � ���� (����)
				 }
				 streamWrite->Close();	// ������� ���� (����)
				 MessageBox::Show("����� ����������� ������ ���� �� ����� �������� �����.", "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
			 // ========================================================================================
			 // ---------- ���������� ��䳿 ����������� ������������ ������� ����� ----------------
			 // (���������� ���� ������� �����, ��������� ��'���� �� ������ ��������) 
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 NewTask(sender, e);
				 textBoxEps_Leave(sender, e);
				 numericW_Leave(sender, e);
				 radioV17_CheckedChanged(sender, e);
	}
			 // ---------- ���������� ��䳿 ���������/���������� ������ radioShulc  ----------------
	private: System::Void radioFreeSystem_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 NewTask(sender, e);			 
	}
			 // ---------- ���������� ��䳿 ���������/���������� ������ radioShulc  ----------------
	private: System::Void radioV17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//				 NewTask_Click(sender, e);
				 matrixSize->Value = 3;
				 // �������� � ������ Grid-a ����������� ������ ������� ������
				 matrix_table->Rows[0]->Cells[0]->Value = 11;
				 matrix_table->Rows[0]->Cells[1]->Value = 3;
				 matrix_table->Rows[0]->Cells[2]->Value = -1;
				 matrix_table->Rows[0]->Cells[3]->Value = 15;

				 matrix_table->Rows[1]->Cells[0]->Value = 2;
				 matrix_table->Rows[1]->Cells[1]->Value = 5;
				 matrix_table->Rows[1]->Cells[2]->Value = -5;
				 matrix_table->Rows[1]->Cells[3]->Value = -11;

				 matrix_table->Rows[2]->Cells[0]->Value = 1;
				 matrix_table->Rows[2]->Cells[1]->Value = 1;
				 matrix_table->Rows[2]->Cells[2]->Value = 1;
				 matrix_table->Rows[2]->Cells[3]->Value = 1;
				 matrix_table->AutoResizeColumns();  // �������� ������ Grid-a
				 
				 bRandom->Enabled = false;		// ������������� ������� ������ � ������ ����
				 mRandom->Enabled = false;
				 bOpen->Enabled = false;
				 mOpen->Enabled = false;
				 matrixSize->Enabled = false;
				 bCalc->Focus();					// ���������� ����� �� ������ ����������

	}
			 // ---------- ���������� ��䳿 ���� �������� � ��� ��������� matrixSize ----------------
	private: System::Void matrixSizeValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 matrix_table->ColumnCount = Convert::ToInt32(matrixSize->Value)+1;	// ���������� �-��� ������� � Grid-� ������� (������ ����) ����� �� ��������� � ��� matrixSize
				 matrix_table->RowCount = Convert::ToInt32(matrixSize->Value);		// ----//---- ����� � Grid-� ----//----
				 matrix_table->AutoResizeColumns();		// �������� ������ Grid-a
	}
			 // ---------- ���������� ��䳿 ������ ��������� ���� �������� ������� ���������� ----------------
	private: System::Void textBoxEps_Leave(System::Object^  sender, System::EventArgs^  e) {
				 bool err1 = false;				// ��������� ������� (������� �������)
				 bool err2 = false;				// ��������� ������� (������� �������)
				 err1 = !float::TryParse(Convert::ToString(textBoxEps->Text), EPS);	// ������������ ����� � ���� � float � ��������� �����������  
				 System::String ^str = Convert::ToString(textBoxEps->Text[textBoxEps->Text->Length - 2]) + Convert::ToString(textBoxEps->Text[textBoxEps->Text->Length - 1]);
				 err2 = !int::TryParse(Convert::ToString(str), Dec);	// ������������ �-��� ���������� ������� � ���� � Int � ��������� �����������  
				 if (Dec < 0) Dec *= -1;
				 if (err1 || err2) { // ���� ��� ����������� ������� �������, ���������� ������� 1�-5 � ��������� ��� ��
					 EPS = 1e-5;
					 textBoxEps->Text = "1e-5";
					 Dec = 5;
					 MessageBox::Show("������� ���������� ������� �� ���������\n. �� �������������, ������� ���������� ����������� �� 1�-5.", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
	}
			 // ---------- ���������� ��䳿 ������ ��������� ���� �������� ��������� ���������� ----------------
	private: System::Void numericW_Leave(System::Object^  sender, System::EventArgs^  e) {
				 bool err = false;				// ��������� ������� (������� �������)
				 err = !float::TryParse(Convert::ToString(numeric_W->Value), w);	// ������������ ����� � ���� � float � ��������� �����������  
				 if (err) { // ���� ��� ����������� ������� �������, ���������� w = 1,5 � ��������� ��� ��
					 numeric_W->Value = 1,5;
					 w=1.5;
					 MessageBox::Show("�������� ���������� ������� �� ���������\n. �� ������������� �������� ���������� ��������� 1,5", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
				 w -= 1;
	}
			 // ---------- ���������� ������������ ��������� ������ � ����� '.' �� ',' ----------------
	private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (e->KeyChar == '.')
					 e->KeyChar = ',';
	}
			 // ---------- ���������� ��䳿 ���� �������� � ����� Grid-a ----------------
	private: System::Void matrix_table_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 matrix_table->Tag = 1;		// ���� �������� � ����� ��������, ������� � Tag 1
	}
			 // ---------- ���������� ��䳿 �������� �� ���� ������ Grid-� ----------------
	private: System::Void matrix_table_CellStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellStateChangedEventArgs^  e) {
				 if (matrix_table->Tag) {	// ���� Tag !=0 (�������� � ����� ���� ������)
					 matrix_table->AutoResizeColumns();  // �������� ������ Grid-a
					 matrix_table->Tag = Convert::ToInt32(0);	// ������� � Tag 0 (��� �� ����)
				 }
	}
			 // ---------- ���������� ��䳿 ������ ������ ���� "��� ������" (��������� �����������) ----------------
	private: System::Void Autor_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("\t     ������� ������ �� ����\n\"��������� ������� (�������� �������-����� �� ������)\"\n\t�������� ��������� ����� ��-54\n\t\t���������� - Բ��\n\t\t    ����\"�ϲ\"\n\t         ��� ��� ���������\n\n\te-mail: yulia_yulia01@ukr.net\n      �������: +3(098) 322 00 48, +3(095) 043 75 77", "��� ������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
			 // ---------- ���������� ��䳿 ������ ������ ���� "������� ������������"----------------
	private: System::Void Regulations_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("\t��� ���������� �������� ������� ��������� ��������� ������� ������� �������. ����� ��������� ����� � ��������� ��� ���������� ������� ����������� ������� ������� ���������� ��������� ������ �������. ���������� ����������� ������� ���������� � �������[0�100]. ����� �������� �� ������� ������� ����� ������������� �� ��������� ����� Tab ��� Enter. ��� ���������� ������� �������, ����������� � ����, ������� ������� ����� �³������ ���� � ������� � ���� ����� ��� ��������� �������� ������ � ��� �����, ������ � ������� �������� ����.\n"
					 "\t��� ���������� ������� �������� ������ ������� � ���� ������� ������� ����� ��������� ����� � � ���� �����, ���� ����� �������� ���� ������ ������������ �����(�� ������������� � ���� � ����������� *.tsk). ���� �������� ���� ��� ���� � ������ �����, ���� ���� ������������.\n"
					 "\t��� ���������� �������� ������� ���������� ������� ������� ����� ���������� �� ������ ����� ���������� �������� �������� � ���� ����� ��� ��������� �������� ������ � ��� �����.���� �� �������� ������� �������� � � ���������� �������, �� �� ����� ���� �������� ��������� ���� �� ����������� ����������.��� ���������� ���������� ���������� ������� ��������� ������ ��������� �������� ������� � ���볻, ��� ����� �������� ���� ������ ������������ �����(�� ������������� � ���� � ����������� *.res). ���� �������� ���� ��� ���� � ������ �����, ���� ���� ������������.\n"
					 "\tϳ��� ������� ������ ������ � ��� � ����������� ���������� �������� ������� ���������� �������� ��������� ���������� ���� � �������� ��������� ��������� ���� ��������.\n"
					 "\t��� ���������� �������� ������� �� ����� ������ ������� ������ ����� ����� ��������� � ���� ����� ��� ��������� �������� ������ � ��� �����. � ���������, ��������� ������ ������� ���� ������ ��  2�2 �� ������� �� �� �����.\n\n"
					 "� ������� ����� ������� ������� �������:\n - Alt + �Ԕ � ���� �����;\n - Alt + �Ĕ � ���� �������;\n - Ctrl + N ��� Alt + �͔(��������) � ���� ��������;\n - Ctrl + O ��� Alt + �(��������) � ������� ���� � ������;\n - Ctrl + R ��� Alt + �ǔ � ��������� ����������� �������;\n - Ctrl + M ��� Alt + �Δ(��������) � ��������� �������� �������;\n - Ctrl + S � �������� ����� ��;\n - Alt + �ǔ � �������� �������� ������� � ����; \n - Ctrl + I � ��� ������;\n - F1 � ������� ������������;\n - Ctrl + � ��� Alt + �Ք(��������) � ������� ������� ����(�����)",
					 "������� ������������ ���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void NewTask(System::Object^  sender, System::EventArgs^  NewTask_Click) {
				 matrix_table->ColumnCount = 0;	// ���������� ��������� Grid-� ������� (������ �������)
				 matrix_table->RowCount = 0;		// �-��� ����� Grid-a	
				 matrix_table->AutoResizeColumns();  // �������� ������ Grid-a
				 if (Convert::ToInt32(matrixSize->Value) == 2)	// ���� � ��� �������� ��������� Grid-a �������� 2, ��
					 matrixSizeValueChanged(sender, NewTask_Click);		// ��������� ������� ���� Grid-a ��� ������ �������� ���������
				 else matrixSize->Value = 2;		// ������ ���������� ��������� Grid-a "2"
				 ActiveControl = matrixSize;
				 bRandom->Enabled = true;		// ����������� ������� ������ � ������ ����
				 mRandom->Enabled = true;
				 bOpen->Enabled = true;
				 mOpen->Enabled = true;
				 matrixSize->Enabled = true;
				 matrixSize->Focus();			// ��������� ����� �� ��������� �������
	}
			 // ---------- ���������� ��䳿 ������ ������ ���� ��� ������ "���� ��������" (��������� ��'���� �� ������ ��������) ------
	private: System::Void NewTask_Click(System::Object^  sender, System::EventArgs^  NewTask_Click) {
				 if (radioV17->Checked)
					 radioFreeSystem->Checked = true;
				 NewTask(sender, NewTask_Click);
	}
			 // ---------- ���������� ��䳿 ������ ������ ���� ��� ������ "��������� ����������� �������" --------------
	private: System::Void random_Click(System::Object^  sender, System::EventArgs^  e) {
				 int N = Convert::ToInt32(matrixSize->Value); // �������� ��������� Grid-a �� ��������� ��������� matrixSize
				 Random^ randObj = gcnew Random;	// ����������� ���������� ���������� �����
				 for (int i = 0; i < N; i++) {		// ���� �� ��� ��������� Grid-�
					 for (int j = 0; j < N+1; j++)
						 matrix_table->Rows[i]->Cells[j]->Value = randObj->Next(-10, 10);     // ��� ���� �������� �����: + randObj->Next(0, 100)/100.0
				 }
				 matrix_table->AutoResizeColumns();  // �������� ������ Grid-a
	}
			 // ---------- ����� ������ ����� �� ��������� � ���������� � ����� ���������� ----------------
	private: System::Void open_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog ^openFileDialog = gcnew System::Windows::Forms::OpenFileDialog();
				 openFileDialog->Title = "³������ ���� �� ���������� ����������� ������ ����";	// ���������� ��������� ����
				 openFileDialog->InitialDirectory = Path::Combine(Application::StartupPath, "\Task");	// ���������� ��������� ����� ��� ������� (����� Task ������� ���� � ����� �� exe-������)
				 openFileDialog->Filter = "����� �� ���������|*.tsk|�� ����� (*.*)|*.*";	// ���������� ��� �������
				 openFileDialog->FilterIndex = 1;	// ���������� ������ ������ �������� (��������)
				 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // ���� � ����� ������� ������� ���� � ��������� ��
					 System::IO::StreamReader ^ sreamRead = gcnew System::IO::StreamReader(openFileDialog->FileName); // ������� ���� ������� � �����
					 System::String ^str = gcnew System::String(sreamRead->ReadLine());	// ��������� ������ ����� (��� �������� ���� ����� - ���������� ������� (Grid-a))
					 int N = Convert::ToInt32(str); // ������������ ��� ����� � �����
					 if (N >= 2) {	// ���� ��������� ��������� >= 2
						 str = sreamRead->ReadToEnd();	// ��������� � ��������� ������ (�����) ����� �������� ���������� (�� ���� �����)
						 marshal_context ^context = gcnew marshal_context(); // ������, ����� ��� �������� ����������� ����� � char*
						 const char *strChar = context->marshal_as<const char*>(str); // ������������ ����� � ����� char, �������� �������� �� �����
						 float **A = inpMatrixInFile(N, strChar);	// �������� � ��������� �������� ������� ���������� � �har* (����� ������� � ������)
						 if (A) // ���� �������� ������ not NULL, ��
							 MatrixToGrid(A, N);	// ������� �������� �������� ������ � Grid
						 else N = 0;	// ������, �������� ��������� 
					 }
					 sreamRead->Close();		// ������� ���� �������
					 if (!N) // ���� ��� ������ � ����� ������� �������
						 MessageBox::Show("��������� ����� ���", "������� ������� �����", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
	}
			 // ---------- ����� ������ ����� ��� ������ � ����� ����� �������� ----------------
	private: System::Void SaveTask_Click(System::Object^  sender, System::EventArgs^  e) {
				 int N = Convert::ToInt32(matrixSize->Value); // ������������ ��������� Grid-a � �����
				 if (GridToMatrix(N)) { // ���� �� �������� Grid-a ������� float-�����, �� �������� �� � ����
					 SaveFileDialog ^saveFileDialogTo = gcnew System::Windows::Forms::SaveFileDialog();
					 saveFileDialogTo->Title = "���������� ����������� ������ ���� �� �����";
					 saveFileDialogTo->InitialDirectory = Path::Combine(Application::StartupPath, "\Task");	// ���������� ��������� ����� ��� ������� (����� Task ������� ���� � ����� �� exe-������)
					 saveFileDialogTo->Filter = "����� �� ���������|*.tsk|�� �����|*.*"; // ���������� ��� �������
					 saveFileDialogTo->FilterIndex = 1;	// ���������� �������� (��������) ������ ������ 
					 if (saveFileDialogTo->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialogTo->FileName->Length > 0) {// ������� ����� ������ �� �����
						 float **A = GridToMatrix(N);	// ������������ Gr�d � ������� float 
						 if (A) // ���� ����������� ��������� ������ (A!=NULL)
							 SaveTo(A, saveFileDialogTo->FileName, Convert::ToInt32(N));		// �������� ����� ���������� � ������� �� �����
					 }
					 else
						 MessageBox::Show("����������� ������ ���� �� ����� �� ���������!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
	}
			 // ---------- ���������� ���������� �������� ������� ----------------
	private: System::Void Calc_Click(System::Object^  sender, System::EventArgs^  e) {
				 int N = Convert::ToInt32(matrixSize->Value); // ������������ ��������� Grid-a � �����
				 float **A = GridToMatrix(N);	// ������������ Gr�d � ������� float
				 if (A) {	// ���� ����������� ��������� ������ (A!=NULL)
					 detSLAR rezDet = detMatrix(A, N);
					 if (!rezDet.det) {	// ���� ��������� ������� == 0
						 if (rezDet.kol)
							 MessageBox::Show("���� ���� �� ����� ����'����!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 else
							 MessageBox::Show("���� ���� ����'���� �� ��!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 return;
					 } 
					 if (check�onvergence(A, N)) // ���� �� ����� >=1, �� ����������� �����c �� ��������� (���� �� �� ����'����)
						 MessageBox::Show("����������� ������ ������� �����������.\n�������� ������ ����'���� ���� ���������!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 else { 		// ������, ��������� ������ ����'���� ������� ������� ���������
					
						 InvForm_Show(calc_SLAR(A, N), N, "��������� ���������� ������ ���� ������� ������� ����������.");	// �������� � ������� ���� � ����������� ����������					
						
						 /* for (float i = 0.2; i < 2; i += 0.2) {
							 w = i; 
							 InvForm_Show(calc_SLAR(A, N), N, "1    ��������� ���������� ������ ���� ������� ������� ����������.");	// �������� � ������� ���� � ����������� ����������					
						 }
						for (float i = 0.2; i < 2; i += 0.2) {
							 w = i;
							 InvForm_Show(calc_SLAR2(A, N), N, "2    ��������� ���������� ������ ���� ������� (SLAR2) ������� ����������.");	// �������� � ������� ���� � ����������� ����������					
						 }
						 for (float i = 0.2; i < 2; i += 0.2) {
							 w = i;
							 InvForm_Show(calc_SLAR3(A, N), N, "3    ��������� ���������� ������ ���� ������� (SLAR3) ������� ����������.");	// �������� � ������� ���� � ����������� ����������					
						 }*/
					 }
				 }
	}
			 // -------------- ���������� ����������� � ��������� �������� ���� �� ���������� �������� �������� ������� -----------------------------
	private: System::Void InvForm_Show(float *Rez, int N, String ^str) {
				 InvForm ^invForm = gcnew(InvForm);		// �������� ����� ��� ������ ����������
				 invForm->Text = str;
				 invForm->matrix_InvTable->Tag = N;		// �������� � Tag Gr�d-a ��������� �������
				 invForm->matrix_InvTable->ColumnCount = Convert::ToInt32(1);	// ���������� �-��� ������� � Grid-� (== 1)
				 invForm->matrix_InvTable->RowCount = Convert::ToInt32(N);		// ���������� �-��� ����� � Grid-� (== N)

	//			 Rez = RoundRez(Rez, N, Dec);		// ���������� ���������� �� n-������� (�������� ������� ����������)
				 for (int i = 0; i < N; i++)		 
					 invForm->matrix_InvTable->Rows[i]->Cells[0]->Value = Rez[i];  // �������� ������ ����'���� � Gr�d
				 invForm->ShowDialog();	// ����� ���� invForm, �� �������� ����� 
	}
			 // ---------- ���������� ��䳿 ������ ������ ���� "�����" (�������� ������� �����) ----------------
	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();	// ������� ������� ����� (��� ��������)
	}
			
};
}