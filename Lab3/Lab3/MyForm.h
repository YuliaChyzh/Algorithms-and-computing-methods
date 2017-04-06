#include "interpol.h"
#include "Windows.h"
#include "Grafics.h"
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
	/// Сводка для MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button_Save;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  buttonGrafic;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  завданняToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вихідToolStripMenuItem;


	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  PolinomRTB;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::DataGridView^  matrix_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  buttonPoh;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panelItog;








	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_Save = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->buttonGrafic = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelItog = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->PolinomRTB = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->matrix_table = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonPoh = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->завданняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->panelItog->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(468, 143);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 160);
			this->textBox1->TabIndex = 5;
			// 
			// button_Save
			// 
			this->button_Save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Save->Location = System::Drawing::Point(239, 388);
			this->button_Save->Name = L"button_Save";
			this->button_Save->Size = System::Drawing::Size(233, 41);
			this->button_Save->TabIndex = 6;
			this->button_Save->Text = L"Записати результат до файлу";
			this->button_Save->UseVisualStyleBackColor = true;
			this->button_Save->Click += gcnew System::EventHandler(this, &MyForm::Save_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(25, 388);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 41);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Виконати інтерполяцію";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Click_Interpol);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(142, 143);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 160);
			this->textBox2->TabIndex = 8;
			// 
			// buttonGrafic
			// 
			this->buttonGrafic->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGrafic->Location = System::Drawing::Point(494, 381);
			this->buttonGrafic->Name = L"buttonGrafic";
			this->buttonGrafic->Size = System::Drawing::Size(169, 54);
			this->buttonGrafic->TabIndex = 10;
			this->buttonGrafic->Text = L"Побудувати графік інтерполяції";
			this->buttonGrafic->UseVisualStyleBackColor = true;
			this->buttonGrafic->Click += gcnew System::EventHandler(this, &MyForm::ToGrafics_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panelItog);
			this->panel1->Controls->Add(this->matrix_table);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button_Save);
			this->panel1->Controls->Add(this->buttonPoh);
			this->panel1->Controls->Add(this->buttonGrafic);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(995, 450);
			this->panel1->TabIndex = 11;
			// 
			// panelItog
			// 
			this->panelItog->Controls->Add(this->label2);
			this->panelItog->Controls->Add(this->label7);
			this->panelItog->Controls->Add(this->PolinomRTB);
			this->panelItog->Controls->Add(this->label6);
			this->panelItog->Controls->Add(this->textBox2);
			this->panelItog->Controls->Add(this->textBox1);
			this->panelItog->Location = System::Drawing::Point(215, 52);
			this->panelItog->Name = L"panelItog";
			this->panelItog->Size = System::Drawing::Size(777, 314);
			this->panelItog->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(322, 29);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Інтерполяційний поліном:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(434, 116);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(164, 24);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Похибка у вузлах";
			// 
			// PolinomRTB
			// 
			this->PolinomRTB->BackColor = System::Drawing::Color::White;
			this->PolinomRTB->CausesValidation = false;
			this->PolinomRTB->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->PolinomRTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PolinomRTB->Location = System::Drawing::Point(3, 41);
			this->PolinomRTB->Name = L"PolinomRTB";
			this->PolinomRTB->Size = System::Drawing::Size(765, 61);
			this->PolinomRTB->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(138, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 24);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Y полінома у вузлах";
			// 
			// matrix_table
			// 
			this->matrix_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrix_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->matrix_table->Location = System::Drawing::Point(17, 52);
			this->matrix_table->Name = L"matrix_table";
			this->matrix_table->RowHeadersVisible = false;
			this->matrix_table->Size = System::Drawing::Size(167, 303);
			this->matrix_table->TabIndex = 24;
			// 
			// Column1
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"  X";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column2->HeaderText = L"       Y";
			this->Column2->Name = L"Column2";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(269, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 31);
			this->label5->TabIndex = 23;
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(269, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 31);
			this->label4->TabIndex = 23;
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(420, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 29);
			this->label3->TabIndex = 23;
			this->label3->Text = L"К-ть вузлів";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(591, 14);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(45, 22);
			this->numericUpDown1->TabIndex = 22;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_Validated);
			this->numericUpDown1->Validated += gcnew System::EventHandler(this, &MyForm::numericUpDown1_Validated);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(248, 16);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Click += gcnew System::EventHandler(this, &MyForm::FillGrid);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Таблиця значень";
			// 
			// buttonPoh
			// 
			this->buttonPoh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPoh->Location = System::Drawing::Point(694, 381);
			this->buttonPoh->Name = L"buttonPoh";
			this->buttonPoh->Size = System::Drawing::Size(169, 54);
			this->buttonPoh->TabIndex = 10;
			this->buttonPoh->Text = L"Побудувати графік похибки";
			this->buttonPoh->UseVisualStyleBackColor = true;
			this->buttonPoh->Click += gcnew System::EventHandler(this, &MyForm::buttonPoh_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->завданняToolStripMenuItem,
					this->довідкаToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1002, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// завданняToolStripMenuItem
			// 
			this->завданняToolStripMenuItem->Name = L"завданняToolStripMenuItem";
			this->завданняToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->завданняToolStripMenuItem->Text = L"Умова завдання";
			this->завданняToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::завданняToolStripMenuItem_Click);
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->довідкаToolStripMenuItem->Text = L"Про автора";
			this->довідкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::довідкаToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вихідToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1002, 473);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторна робота №3";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelItog->ResumeLayout(false);
			this->panelItog->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			coord *matrix;
			float* PolinomRes;
			analiz *poh_point;
			int N;

float Func(float x) {	// обчислення значення вибраної функції в заданих вузлах
		if (checkBox1->Checked) return (sin(x));
		else return (cos(x)*cos(x));
}

private: System::Void FillGrid(System::Object^  sender, System::EventArgs^  e) {
			 float step = 0;
			 radio_CheckedChanged(sender, e);
			 for (int i = 0; i < N; i++) {	// цикл по всіх вузлах
				 matrix_table->Rows[i]->Cells[0]->Value = step;			// записати в Grid координату по Х 
				 matrix_table->Rows[i]->Cells[1]->Value = Func(step);	// записати в Grid координату по Y (значення функції в точці)
				 step += (1/(float)(N-1));
				 step = trunc(step*100)/100;
			 }
}
private: System::Void довідкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("\tВиконала студентка групи ІП-54\n\t          факультету - ФІОТ\n\t\tНТУУ\"КПІ\"\n\t         Чиж Юлія Михайлівна\n\n\te-mail: yulia_yulia01@ukr.net\n      телефон: +3(098) 322 00 48, +3(095) 043 75 77", "Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void завданняToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("\t     Лабораторна робота №3\n   \t\"Інтерполяція функцій\"\n\t               Варіант №17\n     \tІнтерполяцях функції cos²(х)\n\t      методом Ейткена", "Завдання", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 panelItog->Visible = false;
			 N = Convert::ToInt32(numericUpDown1->Value);
			 matrix_table->RowCount = N;		// ----//---- рядків в Grid-і ----//----
			 FillGrid(sender, e);				// заповнити матрицю і Grіd значеннями
			 matrix_table->AutoResizeColumns();	// вирівняти клітини Grid-a
			 radio_CheckedChanged(sender, e);
}
private: System::Void radio_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 panelItog->Visible = false;
			 textBox1->Clear();
			 textBox2->Clear();
			 PolinomRTB->Text = "";
			 buttonGrafic->Enabled = false;
			 button_Save->Enabled = false;
			 buttonPoh->Enabled = false;
			 label4->Visible = !(checkBox1->Checked);
			 label5->Visible = checkBox1->Checked;
}
private: System::Void numericUpDown1_Validated(System::Object^  sender, System::EventArgs^  e) {
			 MyForm_Load(sender, e);
}
private: System::Void Click_Interpol(System::Object^  sender, System::EventArgs^  e) {
			 radio_CheckedChanged(sender, e);
			 delete[] matrix;				// очистити пам'ять від попередньо. матриці
			 matrix = new coord[N];			// створити матрицю з N елементів
			 delete[] poh_point;			// очистити пам'ять від попередньої матриці похибок
			 poh_point = new analiz[N];		// створити матрицю похибок з N елементів

			 for (int i = 0; i < N; i++) {	// цикл по всіх вузлах
				 matrix[i].x = Convert::ToDouble(matrix_table->Rows[i]->Cells[0]->Value); 	// записати в матрицю координату по Х
				 matrix[i].y = Convert::ToDouble(matrix_table->Rows[i]->Cells[1]->Value); 	// записати в матрицю координату по Y (значення функції в точці)
			 }

			 PolinomRes = eitken(N, matrix);	// визначення коефіцієнтів інтерполяційого полінома методом Ейткена
			
			 for (int i = 0; i < N; i++) {	// запис в матрицю координату по Y iнтерполяціоного полінома в точці
				 matrix[i].y_Inter = makePolinomGraphic(matrix[i].x, PolinomRes, N);
			 }
			 for (int i = 0; i < N; i++) {	// запис в матрицю координату по Y iнтерполяціоного полінома в точці
				 poh_point[i].x = matrix[i].x;
				 poh_point[i].y_move = fabs(matrix[i].y - matrix[i].y_Inter);
				 textBox1->AppendText(Convert::ToString(poh_point[i].y_move) + Environment::NewLine);
				 textBox2->AppendText(Convert::ToString(matrix[i].y_Inter) + Environment::NewLine);
			 }

			 PolinomRTB->Text = "Y = ";		
			 bool flag = false;
			 for (int i = 0; i < N; i++) {	// формування запису інтерполяційного полінома у визляді многочлена
				 if (PolinomRes[i] > 0.0001 || PolinomRes[i] < -0.0001)	 {
					 if (flag) PolinomRTB->Text += "+ ";
					 PolinomRTB->Text += ("(" + Convert::ToString(PolinomRes[i]) + ")*X^" + Convert::ToString(N - i) + " ");
					 flag = true;
				 }
			 }
			 panelItog->Visible = true;
			 buttonGrafic->Enabled = true;
			 button_Save->Enabled = true;
			 buttonPoh->Enabled = true;
}
private: System::Void Save_Click(System::Object^  sender, System::EventArgs^  e) {
			 char PathName[250];
			 GetCurrentDirectory(250, PathName);	// отримати повний шлях до проекту
			 strcat_s(PathName, (checkBox1->Checked) ? "\\Rezult\\Rez_sin.txt" : "\\Rezult\\Rez_cos.txt"); // дописати до нього \Rezult\Rez_???.txt (файл із результатами інтерполяції функцій)
			 System::String ^st_file = gcnew System::String(PathName);
			 System::String ^st1 = gcnew System::String("");		// рядок для запису чилел 
			 System::IO::StreamWriter ^streamWrite = gcnew System::IO::StreamWriter(st_file, false);	// відкрити потік (файл) для запису (якщо файл вже існує - перезаписати його)
			 for (int i = 0; i < N; i++) {	// цикл по PolinomRes
				 st1 = "";		// очистити рядок
				 st1 = st1->Concat(st1, Convert::ToString(matrix[i].x));	// добавити до рядка наступний елемент матриці коефіцієнтів полінома
				 st1 += " ";	// добавити проміжок після кожного значеннями
				 st1 = st1->Concat(st1, Convert::ToString(PolinomRes[i]));	// добавити до рядка наступний елемент матриці коефіцієнтів полінома
				 streamWrite->WriteLine(st1->Replace(",", "."));			// записати сформований рядок у файл (потік)
			 }
			 streamWrite->Close();	// закрити потік (файл)
			 MessageBox::Show("Запис коефіцієтнів полінома інтерполяції до файлу виконано вдало.", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void ToGrafics_Click(System::Object^  sender, System::EventArgs^  e) {
			 Grafics ^grafForm = gcnew(Grafics);		// створити форму для виводу оберненої матриці
			 grafForm->graphchart->ChartAreas["ChartArea1"]->AxisX->ScaleView->Zoom(0, 1); // задаем область масштабирования
			 grafForm->graphchart->ChartAreas["ChartArea1"]->AxisY->ScaleView->Zoom(0, 1.1);
			 grafForm->graphchart->Series["ControlPoint"]->Points->Clear();		// очистити перший графік від контрольних точок
			 grafForm->graphchart->Series["Interpolyation"]->Points->Clear();	// очистити інтерполяційний графік від попердніх значень
			 grafForm->graphchart->Series["Original"]->Points->Clear();			// очистити оригінальний графік від попердніх значень
			 for (int i = 0; i < N; i++) {
				 grafForm->graphchart->Series["ControlPoint"]->Points->AddXY(trunc(matrix[i].x * 100) / 100, matrix[i].y);		// записати координати контрольних точок у перший графік 
				 grafForm->graphchart->Series["Interpolyation"]->Points->AddXY(trunc(matrix[i].x * 100) / 100, matrix[i].y_Inter);	// записати координати точок з полінома у другий графік
			 }
			for (float i = 0; i <= 1.05; i+=0.05) {
				grafForm->graphchart->Series["Original"]->Points->AddXY(trunc(i * 100) / 100, Func(i));	// записати координати точок з полінома у другий графік
			 }
			grafForm->graphchart->Titles["Title1"]->Text = "Графік полінома інтерполяції";

			grafForm->checkBox1->Visible = true;
			grafForm->graphchart->Series["Original"]->Enabled = false;
			grafForm->ShowDialog();	// вивести вікно графіка як модальну форму 
}
private: System::Void buttonPoh_Click(System::Object^  sender, System::EventArgs^  e) {
			 Grafics ^grafForm = gcnew(Grafics);		// створити форму для виводу оберненої матриці
			 float maxY = 0;
			 for (int i = 0; i < N; i++) {	// запис в матрицю координату по Y iнтерполяціоного полінома в точці
				 maxY = (maxY < poh_point[i].y_move) ? poh_point[i].y_move : maxY;
			 }
			 maxY += 0.1e-06;
			 grafForm->graphchart->ChartAreas["ChartArea1"]->AxisX->ScaleView->Zoom(-0.1, 1.1); // задаем область масштабирования
			 grafForm->graphchart->ChartAreas["ChartArea1"]->AxisY->ScaleView->Zoom(-0.1e-07, maxY);

			 grafForm->graphchart->Series["ControlPoint"]->Points->Clear();		// очистити перший графік від контрольних точок
			 grafForm->graphchart->Series["Interpolyation"]->Points->Clear();	// очистити інтерполяційний графік від попердніх значень
			 grafForm->graphchart->Series["Original"]->Points->Clear();			// очистити оригінальний графік від попердніх значень
			 for (int i = 0; i < N; i++) {
				 grafForm->graphchart->Series["Interpolyation"]->Points->AddXY(trunc(poh_point[i].x * 100) / 100, poh_point[i].y_move);	// записати координати точок з полінома у другий графік
			 }
			 grafForm->graphchart->Titles["Title1"]->Text = "Графік похибок інтерполяції в узлових точках";
			 grafForm->graphchart->Series["Interpolyation"]->LegendText = "Похибка інтерполяції";
			 grafForm->checkBox1->Visible = false;
			 grafForm->graphchart->Series["ControlPoint"]->Enabled = false;
			 grafForm->graphchart->Series["Original"]->Enabled = false;
			 grafForm->ShowDialog();	// вивести вікно графіка як модальну форму
}
 private: System::Void вихідToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  Close();
}


};
}
