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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
			//TODO: добавьте код конструктора
		}

	protected:
		~MyForm() {	// Освободить все используемые ресурсы.
			if (components) {
				delete components;
			}
		}

	protected:
		// головне меню
	private: System::Windows::Forms::MenuStrip^  menuStripGlav;
			 // пункти головного меню (з підпунктами)
	private: System::Windows::Forms::ToolStripMenuItem^  mFile;
	private: System::Windows::Forms::ToolStripMenuItem^  mNewTask;
	private: System::Windows::Forms::ToolStripMenuItem^  mOpen;
	private: System::Windows::Forms::ToolStripMenuItem^  mRandom;
	private: System::Windows::Forms::ToolStripMenuItem^  mCalc;
	private: System::Windows::Forms::ToolStripMenuItem^  mHelp;
	private: System::Windows::Forms::ToolStripMenuItem^  mAutor;
	private: System::Windows::Forms::ToolStripMenuItem^  mRegulations;
	private: System::Windows::Forms::ToolStripMenuItem^  mExit;
			 // кнопки дій
	private: System::Windows::Forms::Button^  bNewTask;
	private: System::Windows::Forms::Button^  bRandom;
	private: System::Windows::Forms::Button^  bOpen;
	private: System::Windows::Forms::Button^  bCalc;
			 // шар (лівий), що об'єднує всі кнопки дій
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelLeft;
			 // GroupBox з двом RadioButton-нами вибору методу обчислення оберненої матриці
	private: System::Windows::Forms::GroupBox^  groupBoxMetod;
	private: System::Windows::Forms::RadioButton^  radioFreeSystem;

	private: System::Windows::Forms::RadioButton^  radioV17;

			 // шар, що об'єднує напис і NumericUpDown для введення розмірності матриці 
	private: System::Windows::Forms::Label^  labelSize;
	private: System::Windows::Forms::NumericUpDown^  matrixSize;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelMatrixSize;
	private: System::Windows::Forms::DataGridView^  matrix_table;
			 // DataGridView для введення значень елементів вхідної матриці

			 // шар (правий), що об'єднує шари GroupBox, tableLayoutPanelMatrixSize та DataGridView   
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelRigth;
			 // шар, що об'єднує лівий і правий шари
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutGlav;
	private: System::Windows::Forms::ToolStripMenuItem^  mSaveTask;
	private: System::Windows::Forms::Label^  labelEps;
	private: System::Windows::Forms::TextBox^  textBoxEps;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numeric_W;



	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
			 // ------------ Обязательный метод для поддержки конструктора (не изменяйте содержимое данного метода при помощи редактора кода) ------------
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
				 this->mFile->Text = L"&Файл";
				 // 
				 // mNewTask
				 // 
				 this->mNewTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mNewTask.Image")));
				 this->mNewTask->Name = L"mNewTask";
				 this->mNewTask->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
				 this->mNewTask->Size = System::Drawing::Size(379, 24);
				 this->mNewTask->Text = L"Нове завдання";
				 this->mNewTask->Click += gcnew System::EventHandler(this, &MyForm::NewTask_Click);
				 // 
				 // mOpen
				 // 
				 this->mOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mOpen.Image")));
				 this->mOpen->Name = L"mOpen";
				 this->mOpen->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
				 this->mOpen->Size = System::Drawing::Size(379, 24);
				 this->mOpen->Text = L"Відкрити файл з умовою";
				 this->mOpen->Click += gcnew System::EventHandler(this, &MyForm::open_Click);
				 // 
				 // mRandom
				 // 
				 this->mRandom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mRandom.Image")));
				 this->mRandom->Name = L"mRandom";
				 this->mRandom->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
				 this->mRandom->Size = System::Drawing::Size(379, 24);
				 this->mRandom->Text = L"Заповнити випадковими числами";
				 this->mRandom->Click += gcnew System::EventHandler(this, &MyForm::random_Click);
				 // 
				 // mCalc
				 // 
				 this->mCalc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mCalc.Image")));
				 this->mCalc->Name = L"mCalc";
				 this->mCalc->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::M));
				 this->mCalc->Size = System::Drawing::Size(379, 24);
				 this->mCalc->Text = L"Розв\'язати СЛАР";
				 this->mCalc->Click += gcnew System::EventHandler(this, &MyForm::Calc_Click);
				 // 
				 // mSaveTask
				 // 
				 this->mSaveTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mSaveTask.Image")));
				 this->mSaveTask->Name = L"mSaveTask";
				 this->mSaveTask->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
				 this->mSaveTask->Size = System::Drawing::Size(379, 24);
				 this->mSaveTask->Text = L"Зберегти умову до ...";
				 this->mSaveTask->Click += gcnew System::EventHandler(this, &MyForm::SaveTask_Click);
				 // 
				 // mHelp
				 // 
				 this->mHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->mAutor, this->mRegulations });
				 this->mHelp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->mHelp->Name = L"mHelp";
				 this->mHelp->Size = System::Drawing::Size(78, 23);
				 this->mHelp->Text = L"&Довідка";
				 // 
				 // mAutor
				 // 
				 this->mAutor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mAutor.Image")));
				 this->mAutor->Name = L"mAutor";
				 this->mAutor->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::I));
				 this->mAutor->Size = System::Drawing::Size(272, 24);
				 this->mAutor->Text = L"Про &автора";
				 this->mAutor->Click += gcnew System::EventHandler(this, &MyForm::Autor_Click);
				 // 
				 // mRegulations
				 // 
				 this->mRegulations->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mRegulations.Image")));
				 this->mRegulations->Name = L"mRegulations";
				 this->mRegulations->ShortcutKeys = System::Windows::Forms::Keys::F1;
				 this->mRegulations->Size = System::Drawing::Size(272, 24);
				 this->mRegulations->Text = L"Правила &користування";
				 this->mRegulations->Click += gcnew System::EventHandler(this, &MyForm::Regulations_Click);
				 // 
				 // mExit
				 // 
				 this->mExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->mExit->Name = L"mExit";
				 this->mExit->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
				 this->mExit->Size = System::Drawing::Size(61, 23);
				 this->mExit->Text = L"Ви&хід";
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
				 this->bRandom->Text = L"Заповнити\r\nвипадковими\r\n&числами";
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
				 this->bOpen->Text = L"&Відкрити\r\n файл \r\nз умовою";
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
				 this->bNewTask->Text = L"&Нове\r\nзавдання";
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
				 this->bCalc->Text = L"&Розв\'язати\r\nСЛАР";
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
				 this->groupBoxMetod->Text = L"Вибір методу розв\'язування СЛАР";
				 // 
				 // radioFreeSystem
				 // 
				 this->radioFreeSystem->AutoSize = true;
				 this->radioFreeSystem->Location = System::Drawing::Point(368, 25);
				 this->radioFreeSystem->Name = L"radioFreeSystem";
				 this->radioFreeSystem->Size = System::Drawing::Size(152, 23);
				 this->radioFreeSystem->TabIndex = 6;
				 this->radioFreeSystem->Text = L"&довільна система";
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
				 this->radioV17->Text = L"&контрольний приклад";
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
				 this->labelSize->Text = L"Розмірність СЛАР";
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
				 this->labelEps->Text = L"Точність\r\nобчислення";
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
				 this->Text = L"Розв\'язування СЛАР (метод верхньої релаксації)";
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
			 // ================== додаткові сервісні функції ===============================
			 // ---------- підпрограма перевірки на коректність вмісту Grid-a і запису його елементів в матрицю ----------------
	private: float** GridToMatrix(int N) { // розмірність матриці
				 bool err = false;				// прапорець помилки (помилка відсутня)
				 float **matrix = new float*[N];		// створити нову матрицю
				 for (int i = 0; i < N && !err; i++) {	// цикл по рядках матриці
					 matrix[i] = new float[N];			// створення нового рядка матриці 
					 for (int j = 0; j < N+1 && !err; j++) {
						 err = !float::TryParse(Convert::ToString(matrix_table->Rows[i]->Cells[j]->Value), matrix[i][j]);	// конвертувати елемент в float і перевірити правильність  
						 if (err) { // якщо при конвертації виникла помилка, повідомити про це і припинити конвертацію (вийти із циклу)
							 System::String ^st1 = gcnew System::String("Елемент [");	// сформувати текст повідомлення про помилку
							 st1 = st1->Concat(st1->Concat(st1->Concat(st1->Concat(st1, Convert::ToString(i)), "]["), Convert::ToString(j)), "] містить некоректне значення");
							 MessageBox::Show(st1, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 }
					 }
				 }
				 return (err) ? NULL : matrix;	// повернути: NULL, якщо виникла помилка, інакше, адресу матриці А 
	}
			 // ---------- підпрограма запису матриці розмірності N до Grіd-a ----------------
	private: System::Void MatrixToGrid(float** matrix, int N) {	// адреса матриці, її розмірність
				 matrixSize->Value = N;			// записати розмірність в matrixSize 
				 for (int i = 0; i < N; i++)	// цикл по всіх елементах матриці
				 for (int j = 0; j < N+1; j++)
					 matrix_table->Rows[i]->Cells[j]->Value = matrix[i][j];  // записати в [i][j]-ий елемент Grіd-a значення з вхідної матриці
				 matrix_table->AutoResizeColumns();  // вирівняти клітини Grid-a
	}
			 // ---------- підпрограма запису матриці розмірності N до вказаного файлу file ----------------
	private: System::Void SaveTo(float ** matrix, String ^file, int N) {	// адреса матриці, покажчик на рядок що е повним флязом до файлу, розмірність матриці
				 System::String ^st1 = gcnew System::String("");		// рядок для запису чилел 
				 System::IO::StreamWriter ^streamWrite = gcnew System::IO::StreamWriter(file, false);	// відкрити потік (файл) для запису (якщо файл вже існує - перезаписати його)
				 streamWrite->WriteLine(Convert::ToString(N));	// записати у файл розмірність матриці А
				 for (int i = 0; i < N; i++) {		// цикл по N-рядках матриці А  
					 st1 = "";	// очистити рядок
					 for (int j = 0; j < N+1; j++) {	// cформувати і записати всі рядки матриці
						 st1 = st1->Concat(st1, Convert::ToString(matrix[i][j])); // добавити до рядка наступний елемент матриці
						 st1 += (j < N ) ? " " : "";	// добавити проміжок після кожного значеннями (крім останнього)
					 }
					 streamWrite->WriteLine(st1->Replace(",", "."));		// записати сформований рядок у файл (потік)
				 }
				 streamWrite->Close();	// закрити потік (файл)
				 MessageBox::Show("Запис коефіцієнтів вхідної СЛАР до файлу виконано вдало.", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
			 // ========================================================================================
			 // ---------- підпрограма події початкового завантаження головної форми ----------------
			 // (початковий стан головної форми, підготовка об'єктів до нового завдання) 
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 NewTask(sender, e);
				 textBoxEps_Leave(sender, e);
				 numericW_Leave(sender, e);
				 radioV17_CheckedChanged(sender, e);
	}
			 // ---------- підпрограма події включення/виключення чеката radioShulc  ----------------
	private: System::Void radioFreeSystem_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 NewTask(sender, e);			 
	}
			 // ---------- підпрограма події включення/виключення чеката radioShulc  ----------------
	private: System::Void radioV17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//				 NewTask_Click(sender, e);
				 matrixSize->Value = 3;
				 // записати в клітини Grid-a коефіцієнти вхідної системи рівнянь
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
				 matrix_table->AutoResizeColumns();  // вирівняти клітини Grid-a
				 
				 bRandom->Enabled = false;		// деактивізувати відповідні кнопки і пункти меню
				 mRandom->Enabled = false;
				 bOpen->Enabled = false;
				 mOpen->Enabled = false;
				 matrixSize->Enabled = false;
				 bCalc->Focus();					// встановити фокус на кнопку розрахунку

	}
			 // ---------- підпрограма події зміни значення в полі лічильника matrixSize ----------------
	private: System::Void matrixSizeValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 matrix_table->ColumnCount = Convert::ToInt32(matrixSize->Value)+1;	// встановити к-сть колонок в Grid-і таблиці (вхідної СЛАР) згідно із значенням в полі matrixSize
				 matrix_table->RowCount = Convert::ToInt32(matrixSize->Value);		// ----//---- рядків в Grid-і ----//----
				 matrix_table->AutoResizeColumns();		// вирівняти клітини Grid-a
	}
			 // ---------- підпрограма події втрати активності поля введення точності обчислення ----------------
	private: System::Void textBoxEps_Leave(System::Object^  sender, System::EventArgs^  e) {
				 bool err1 = false;				// прапорець помилки (помилка відсутня)
				 bool err2 = false;				// прапорець помилки (помилка відсутня)
				 err1 = !float::TryParse(Convert::ToString(textBoxEps->Text), EPS);	// конвертувати текст з поля в float і перевірити правильність  
				 System::String ^str = Convert::ToString(textBoxEps->Text[textBoxEps->Text->Length - 2]) + Convert::ToString(textBoxEps->Text[textBoxEps->Text->Length - 1]);
				 err2 = !int::TryParse(Convert::ToString(str), Dec);	// конвертувати к-сть десяткових розрядів з поля в Int і перевірити правильність  
				 if (Dec < 0) Dec *= -1;
				 if (err1 || err2) { // якщо при конвертації виникла помилка, встановити точність 1е-5 і повідомити про це
					 EPS = 1e-5;
					 textBoxEps->Text = "1e-5";
					 Dec = 5;
					 MessageBox::Show("Точність обчислення уведена не правильно\n. За замовчуванням, точність обчислення встановлена як 1е-5.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
	}
			 // ---------- підпрограма події втрати активності поля введення параметра релаксації ----------------
	private: System::Void numericW_Leave(System::Object^  sender, System::EventArgs^  e) {
				 bool err = false;				// прапорець помилки (помилка відсутня)
				 err = !float::TryParse(Convert::ToString(numeric_W->Value), w);	// конвертувати текст з поля в float і перевірити правильність  
				 if (err) { // якщо при конвертації виникла помилка, встановити w = 1,5 і повідомити про це
					 numeric_W->Value = 1,5;
					 w=1.5;
					 MessageBox::Show("Параметр релаксації уведено не правильно\n. За замовчуванням параметр релаксації становить 1,5", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
				 w -= 1;
	}
			 // ---------- підпрограма перехоплення натиснутої клаівші і заміни '.' на ',' ----------------
	private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (e->KeyChar == '.')
					 e->KeyChar = ',';
	}
			 // ---------- підпрограма події зміни значення в клітині Grid-a ----------------
	private: System::Void matrix_table_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 matrix_table->Tag = 1;		// якщо значення в клітині змінилось, загнати в Tag 1
	}
			 // ---------- підпрограма події переходу до іншої клітини Grid-у ----------------
	private: System::Void matrix_table_CellStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellStateChangedEventArgs^  e) {
				 if (matrix_table->Tag) {	// якщо Tag !=0 (значення в клітині було змінено)
					 matrix_table->AutoResizeColumns();  // вирівняти клітини Grid-a
					 matrix_table->Tag = Convert::ToInt32(0);	// загнати в Tag 0 (змін не було)
				 }
	}
			 // ---------- підпрограма події вибору пункту меню "Про автора" (виведення повідомлення) ----------------
	private: System::Void Autor_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("\t     Курсова робота на тему\n\"Обернення матриці (методами Жордана-Гауса та Шульца)\"\n\tВиконала студентка групи ІП-54\n\t\tфакультету - ФІОТ\n\t\t    НТУУ\"КПІ\"\n\t         Чиж Юлія Михайлівна\n\n\te-mail: yulia_yulia01@ukr.net\n      телефон: +3(098) 322 00 48, +3(095) 043 75 77", "Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
			 // ---------- підпрограма події вибору пункту меню "Правила користування"----------------
	private: System::Void Regulations_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("\tДля обчислення оберненої матриці необхідно заповнити числами таблицю матриці. Перед уведенням числа з клавіатури або заповнення матриці випадковими числами потрібно встановити розмірність вхідної матриці. Заповнення випадковими числами виконується з проміжку[0…100]. Задля зручності по коміркам таблиці можна переміщуватись за допомогою клавіш Tab або Enter. Для заповнення матриці числами, збереженими у файлі, потрібно вибрати пункт «Відкрити файл з умовою» з меню «Файл» або натиснути відповідну кнопку в лівій панелі, знайти і вибрати потрібний файл.\n"
					 "\tДля збереження значень елементів вхідної матриці у файлі потрібно вибрати пункт «Зберегти умову до…» з меню «Файл», який відкриє діалогове вікно вибору користувачем файлу(за замовчуванням – файл з розширенням *.tsk). Якщо вказаний файл вже існує в обраній папці, його буде перезаписано.\n"
					 "\tДля обчислення оберненої матриці виконавець повинен вибрати метод обчислення та обрати пункт «Обчислити обернену матрицю» з меню «Файл» або натиснути відповідну кнопку в лівій панелі.Якщо всі елементи матриці заповнені і є коректними числами, то на екран буде виведено додаткове вікно із результатом обчислення.Для збереження результатів обчислення потрібно натиснути кнопку «Зберегти обернену матрицю у файлі», яка відкриє діалогове вікно вибору користувачем файлу(за замовчуванням – файл з розширенням *.res). Якщо вказаний файл вже існує в обраній папці, його буде перезаписано.\n"
					 "\tПісля натиску кнопки «Вихід» у вікні з результатом обчислення оберненої матриці виконається закриття поточного модального вікна і передача управління головному вінку програми.\n"
					 "\tДля обчислення оберненої матриці за іншою умовою доречно обрати пункт «Нове завдання» з меню «Файл» або натиснути відповідну кнопку в лівій панелі. В результаті, розмірність вхідної матриці буде змінено на  2х2 та очищено її від даних.\n\n"
					 "У програмі наявні наступні «гарячі клавіші»:\n - Alt + “Ф” – меню «Файл»;\n - Alt + “Д” – меню «Довідка»;\n - Ctrl + N або Alt + “Н”(кирилиця) – нове завдання;\n - Ctrl + O або Alt + “В”(кирилиця) – відкрити файл з умовою;\n - Ctrl + R або Alt + “З” – заповнити випадковими числами;\n - Ctrl + M або Alt + “О”(кирилиця) – обчислити обернену матрицю;\n - Ctrl + S – зберегти умову до…;\n - Alt + “З” – зберегти обернену матрицю у файлі; \n - Ctrl + I – про автора;\n - F1 – правила користування;\n - Ctrl + Х або Alt + “Х”(кирилиця) – закрити поточне вікно(вихід)",
					 "Правила користування програмою", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void NewTask(System::Object^  sender, System::EventArgs^  NewTask_Click) {
				 matrix_table->ColumnCount = 0;	// встановити розмірність Grid-а таблиці (вхідної матриці)
				 matrix_table->RowCount = 0;		// к-сть рядків Grid-a	
				 matrix_table->AutoResizeColumns();  // вирівняти клітини Grid-a
				 if (Convert::ToInt32(matrixSize->Value) == 2)	// якщо в полі лічильика розмірності Grid-a записано 2, то
					 matrixSizeValueChanged(sender, NewTask_Click);		// примусово оновити стан Grid-a для нового значення розмірності
				 else matrixSize->Value = 2;		// інакше встановити розмірність Grid-a "2"
				 ActiveControl = matrixSize;
				 bRandom->Enabled = true;		// активізувати відповідні кнопки і пункти меню
				 mRandom->Enabled = true;
				 bOpen->Enabled = true;
				 mOpen->Enabled = true;
				 matrixSize->Enabled = true;
				 matrixSize->Focus();			// становити фокус на розмірність системи
	}
			 // ---------- підпрограма події вибору пункту меню або кнопки "Нове завдання" (підготовка об'єктів до нового завдання) ------
	private: System::Void NewTask_Click(System::Object^  sender, System::EventArgs^  NewTask_Click) {
				 if (radioV17->Checked)
					 radioFreeSystem->Checked = true;
				 NewTask(sender, NewTask_Click);
	}
			 // ---------- підпрограма події вибору пункту меню або кнопки "Заповнити випадковими числами" --------------
	private: System::Void random_Click(System::Object^  sender, System::EventArgs^  e) {
				 int N = Convert::ToInt32(matrixSize->Value); // отримати розмірність Grid-a за значенням лічильника matrixSize
				 Random^ randObj = gcnew Random;	// ініциалізація генератора випадкових чисел
				 for (int i = 0; i < N; i++) {		// цикл по всіх елементах Grid-а
					 for (int j = 0; j < N+1; j++)
						 matrix_table->Rows[i]->Cells[j]->Value = randObj->Next(-10, 10);     // щоб були десяткові дроби: + randObj->Next(0, 100)/100.0
				 }
				 matrix_table->AutoResizeColumns();  // вирівняти клітини Grid-a
	}
			 // ---------- діалог вибору файлу із завданням і зчитування з нього інформації ----------------
	private: System::Void open_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog ^openFileDialog = gcnew System::Windows::Forms::OpenFileDialog();
				 openFileDialog->Title = "Відкрити файл із значеннями коефіцієнтів вхідної СЛАР";	// встановити заголовок вікна
				 openFileDialog->InitialDirectory = Path::Combine(Application::StartupPath, "\Task");	// встановити початкову папку для читання (папка Task повинна бути в папці із exe-файлом)
				 openFileDialog->Filter = "Файли із завданням|*.tsk|Всі файли (*.*)|*.*";	// встановити два фільтри
				 openFileDialog->FilterIndex = 1;	// встановити перший фільтр основним (поточним)
				 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // якщо в діалозі читання вибрано файл і натиснуто Ок
					 System::IO::StreamReader ^ sreamRead = gcnew System::IO::StreamReader(openFileDialog->FileName); // відкрити потік читання з файлу
					 System::String ^str = gcnew System::String(sreamRead->ReadLine());	// прочитати перший рядок (там записано одне число - розрядність матриці (Grid-a))
					 int N = Convert::ToInt32(str); // конвертувати цей рядок в число
					 if (N >= 2) {	// якщо прочитана розмірність >= 2
						 str = sreamRead->ReadToEnd();	// прочитати з відкритого потоку (файлу) решту записаної інформації (до кінця файлу)
						 marshal_context ^context = gcnew marshal_context(); // змиінна, через яку виконаємо конвертацію рядка в char*
						 const char *strChar = context->marshal_as<const char*>(str); // конвертувати рядок в масив char, отримати покажчик на нього
						 float **A = inpMatrixInFile(N, strChar);	// створити і заповнити динамічну матрицю значеннями з сhar* (через читання з потоку)
						 if (A) // якщо отримана адреса not NULL, то
							 MatrixToGrid(A, N);	// занести значення елементів масиву в Grid
						 else N = 0;	// інакше, обнулити розмірність 
					 }
					 sreamRead->Close();		// закрити потік читання
					 if (!N) // якщо при читанні з файлу виникла помилка
						 MessageBox::Show("Некоректні вхідні дані", "Помилка читання файлу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
	}
			 // ---------- діалог вибору файла для запису в нього умови завдання ----------------
	private: System::Void SaveTask_Click(System::Object^  sender, System::EventArgs^  e) {
				 int N = Convert::ToInt32(matrixSize->Value); // конвертувати розмірність Grid-a в число
				 if (GridToMatrix(N)) { // якщо всі елементи Grid-a коректні float-числа, то записати їх у файл
					 SaveFileDialog ^saveFileDialogTo = gcnew System::Windows::Forms::SaveFileDialog();
					 saveFileDialogTo->Title = "Збереження коефіцієнтів вхідної СЛАР до файлу";
					 saveFileDialogTo->InitialDirectory = Path::Combine(Application::StartupPath, "\Task");	// встановити початкову папку для читання (папка Task повинна бути в папці із exe-файлом)
					 saveFileDialogTo->Filter = "Файли із завданням|*.tsk|Всі файли|*.*"; // встановити три фільтри
					 saveFileDialogTo->FilterIndex = 1;	// встановити основним (поточним) перший фільтр 
					 if (saveFileDialogTo->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialogTo->FileName->Length > 0) {// відкрити діалог запису до файлу
						 float **A = GridToMatrix(N);	// конвертувати Grіd в матрицю float 
						 if (A) // якщо конвертацію проведено успішно (A!=NULL)
							 SaveTo(A, saveFileDialogTo->FileName, Convert::ToInt32(N));		// виконати запис інформації з матриці до файлу
					 }
					 else
						 MessageBox::Show("Коефіцієнти вхідної СЛАР до файлу НЕ ЗБЕРЕЖЕНО!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
	}
			 // ---------- підпрограма обчислення оберненої матриці ----------------
	private: System::Void Calc_Click(System::Object^  sender, System::EventArgs^  e) {
				 int N = Convert::ToInt32(matrixSize->Value); // конвертувати розмірність Grid-a в число
				 float **A = GridToMatrix(N);	// конвертувати Grіd в матрицю float
				 if (A) {	// якщо конвертацію проведено успішно (A!=NULL)
					 detSLAR rezDet = detMatrix(A, N);
					 if (!rezDet.det) {	// якщо визначник матриці == 0
						 if (rezDet.kol)
							 MessageBox::Show("Дана СЛАР має безліч розв'язків!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 else
							 MessageBox::Show("Дана СЛАР розв'язку не має!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 return;
					 } 
					 if (checkСonvergence(A, N)) // якщо всі норми >=1, то ітераційний процеc не сходиться (СЛАР не має розв'язку)
						 MessageBox::Show("Ітераційний процес Зейделя розходиться.\nОтримати точний розв'язок СЛАР неможливо!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 else { 		// інакше, обчислити вектор розв'язку методом верхньої релаксаці
					
						 InvForm_Show(calc_SLAR(A, N), N, "Результат обчислення коренів СЛАР методом верхньої релаксації.");	// створити і вивести вікно з результатом обчислення					
						
						 /* for (float i = 0.2; i < 2; i += 0.2) {
							 w = i; 
							 InvForm_Show(calc_SLAR(A, N), N, "1    Результат обчислення коренів СЛАР методом верхньої релаксації.");	// створити і вивести вікно з результатом обчислення					
						 }
						for (float i = 0.2; i < 2; i += 0.2) {
							 w = i;
							 InvForm_Show(calc_SLAR2(A, N), N, "2    Результат обчислення коренів СЛАР методом (SLAR2) верхньої релаксації.");	// створити і вивести вікно з результатом обчислення					
						 }
						 for (float i = 0.2; i < 2; i += 0.2) {
							 w = i;
							 InvForm_Show(calc_SLAR3(A, N), N, "3    Результат обчислення коренів СЛАР методом (SLAR3) верхньої релаксації.");	// створити і вивести вікно з результатом обчислення					
						 }*/
					 }
				 }
	}
			 // -------------- підпрограма ініціалізації і виведення окремого вікна із значеннями елементів оберненої матриці -----------------------------
	private: System::Void InvForm_Show(float *Rez, int N, String ^str) {
				 InvForm ^invForm = gcnew(InvForm);		// створити форму для виводу результату
				 invForm->Text = str;
				 invForm->matrix_InvTable->Tag = N;		// записати в Tag Grіd-a розмірність матриці
				 invForm->matrix_InvTable->ColumnCount = Convert::ToInt32(1);	// встановити к-сть колонок в Grid-і (== 1)
				 invForm->matrix_InvTable->RowCount = Convert::ToInt32(N);		// встановити к-сть рязків в Grid-і (== N)

	//			 Rez = RoundRez(Rez, N, Dec);		// округлення результатів до n-розрядів (відповідно точності обчислення)
				 for (int i = 0; i < N; i++)		 
					 invForm->matrix_InvTable->Rows[i]->Cells[0]->Value = Rez[i];  // записати вектор розв'язків у Grіd
				 invForm->ShowDialog();	// вивод вікна invForm, як модальної форми 
	}
			 // ---------- підпрограма події вибору пункту меню "Вихід" (закриття головної форми) ----------------
	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();	// закрити головну форму (всю програму)
	}
			
};
}