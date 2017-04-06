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
	protected:

	protected:


	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  завданняToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вихідToolStripMenuItem;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->завданняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->button1->Text = L"Зчитати дані з файлу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::OpenTask_Click);
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
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox1);
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
			this->label2->Location = System::Drawing::Point(321, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 29);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Час сортування";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Розмірність масива";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->завданняToolStripMenuItem,
					this->довідкаToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(557, 24);
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
			this->ClientSize = System::Drawing::Size(557, 369);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторна робота №2";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Click_Sorting(System::Object^  sender, System::EventArgs^  e) {
//			 textBox2->Visible = false;
			 textBox1->Visible = false;

			 textBox2->Clear();
/*			 String ^str1;
			 int n = textBox1->Lines->Length;
			 if (!n) { // якщо в textBox1 немає жодного числа
				 MessageBox::Show("В початковому масиві немає жодного елемента!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 textBox1->Focus(); // встановити фокус уведення на textBox1
				 return;
			 }
			 double *mas = new double[n];	// створити динамічний масив дійсних чисел
			 int i_mas = 0;		// лічильник "правильних" значень (дійсна кількість елементів масиву)
			 for (int i = 0; i < n; i++) {	// заповнити цей масив числами із рядків textBox1
				 str1 = gcnew String(Convert::ToString(textBox1->Lines[i]));	// отримати рядок символів
				 if (str1->Length && !Double::TryParse(Convert::ToString(textBox1->Lines[i]), mas[i_mas++])) {	// якщо рядок непустий і виникла помилка конвертації
					 MessageBox::Show("Помилка введених даних!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 textBox1->Focus(); // встановити фокус уведення на textBox1
					 return;
				 }
			 }
*/
			 int rand_value,n=35000;
			 srand(time(0));
			 rand_value=rand();
			 double *mas = new double[n];	// створити динамічний масив дійсних чисел
			 for (int i = 0; i < n; i++) {
				 rand_value = rand();
				 mas[i] = (double)rand_value + (double)(rand() % 1000) / 1000;
			 }





			 unsigned _int64 calc_time; // змінна визначення часу виконання алгоритма 
			 Stopwatch ^ timePerParse;	// елемент таймера
			 textBox1->Clear();
			 unsigned int times = 0;
			 for (int i = 250; i <= 35000; i += 250) {
				 timePerParse = Stopwatch::StartNew();  // старт таймера
				 SortMass(mas, i, times);			// підпрограма сортування
				 timePerParse->Stop();		// стоп таймера	
				 calc_time = timePerParse->ElapsedMilliseconds;	// визначення к-сті мілісекунд роботи таймера
//				 textBox1->AppendText(Convert::ToString(i) + Environment::NewLine);	// добавити в textBox1 розмірність масиву, що сортується
				 textBox1->AppendText(Convert::ToString(i*sizeof(double)) + Environment::NewLine);	// добавити в textBox1 розмірність масиву, що сортується
//				 textBox2->AppendText(Convert::ToString((double)calc_time / 1000) + Environment::NewLine);	// добавити в textBox2 час сортування
				 textBox2->AppendText(Convert::ToString((unsigned int)times) + Environment::NewLine);	// добавити в textBox2 час сортування
			 }

			 textBox1->Visible = true;
			 textBox2->Visible = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Click_Sorting(sender, e);
}
private: System::Void OpenTask_Click(System::Object^  sender, System::EventArgs^  e) {
			 Click_Sorting(sender, e);
			 return;
			 bool readFile = false;		// прапор успішного читання з файлу
			 String ^str1, ^str2;		// рядки читяння з файлу
			 StreamReader ^sreamRead;	// потік
			 char PathName[250];
			 NewTask_Click(sender, e);	// підготовка об'єктів до нового завдання
			 textBox1->Visible = false;	
			 textBox2->Visible = false;
			 GetCurrentDirectory(250, PathName);	// отримати повний шлях до проекту
			 strcat_s(PathName, "\\Task\\Task1.txt"); // дописати до нього \Res\Task1.txt (файл із аргументами завдання)
			 if (CreateFile(PathName, NULL, NULL, NULL, OPEN_EXISTING, 0, NULL) != INVALID_HANDLE_VALUE) {	// якщо файл Task1.txt є в папці Task 
				 sreamRead = gcnew StreamReader(gcnew String(PathName)); // відкрити потік читання з файлу \Task\Task1.txt
				 readFile = true;	// підняти прапор читання
			 }
			 else {		// інакше вибрати і відкрити файл через діалог OpenFileDialog
				 OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
				 openFileDialog->Title = "Відкрити файл із значеннями початкового масива"; // встановити заголовок вікна
				 openFileDialog->InitialDirectory = Path::Combine(Application::StartupPath, "\Task"); // встановити початкову папку для читання (папка Res повинна бути в папці із exe-файлом)
				 openFileDialog->Filter = "Файли із завданням|*.txt|Всі файли (*.*)|*.*"; // встановити два фільтри
				 openFileDialog->FilterIndex = 1; // встановити перший фільтр основним (поточним)
				 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // якщо в діалозі читання вибрано файл і натиснуто Ок
					 sreamRead = gcnew StreamReader(openFileDialog->FileName); // відкрити потік читання з вибраного файлу
					 readFile = true;	// підняти прапор читання
				 }
			 }
			 if (readFile) {	// якщо файл успішно відкрито
				 int n;			// змінні розмірності масива
				 str1 = gcnew String(sreamRead->ReadLine());
				 if ((!Int32::TryParse(Convert::ToString(str1), n))||(n<=0)) // якщо при читанні з файлу виникла помилка
					 MessageBox::Show("Неможлива кількість елементів", "Помилка читання файлу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 else {
					 double el;
					 bool flag = true;	// прапор помилки конвертації рядка в число
					 for (int i = 0; i < n && flag; i++) {
						 str2 = gcnew String(sreamRead->ReadLine());
						 flag = Double::TryParse(Convert::ToString(str2), el) && flag;	// перевірка коректності зчитаних чисел
						 textBox1->AppendText((i < n - 1) ? str2 + Environment::NewLine : str2);	// добавити новий рядок в textBox1
					 }
					 sreamRead->Close();
					 textBox1->Visible = true;
					 if (flag) 	// якщо конвертація всіх чисел пройшла успішно
						 Click_Sorting(sender, e);
					 else {
						 textBox1->Clear();
						 MessageBox::Show("Некоректні вхідні дані", "Помилка читання файлу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 }
				 }
			 }
}
private: System::Void NewTask_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Clear();
			 textBox2->Clear();
			 textBox1->Visible = true;
			 textBox2->Visible = false;
}
private: System::Void довідкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("\tВиконала студентка групи ІП-54\n\t          факультету - ФІОТ\n\t\tНТУУ\"КПІ\"\n\t         Чиж Юлія Михайлівна\n\n\te-mail: yulia_yulia01@ukr.net\n      телефон: +3(098) 322 00 48, +3(095) 043 75 77", "Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void завданняToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("\t     Лабораторна робота №2\n   \"Обчислювальна складність алгоритмів сортування\"\n\t               Варіант №17\n     Алгоритм 3.1. Сортування вибором з пошуком\n\t  максимального елемента", "Завдання", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void вихідToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
