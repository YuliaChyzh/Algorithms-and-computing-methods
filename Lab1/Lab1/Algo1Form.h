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
	/// Сводка для Algo1Form
	/// </summary>
	public ref class Algo1Form : public System::Windows::Forms::Form
	{
	public:
		Algo1Form(void)
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
		~Algo1Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	protected:

	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Algo1Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(24, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"a =";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(24, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"b =";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Green;
			this->textBox1->Location = System::Drawing::Point(74, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->Enter += gcnew System::EventHandler(this, &Algo1Form::textBox1_Enter);
			this->textBox1->Validated += gcnew System::EventHandler(this, &Algo1Form::textBox1_Validated);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Green;
			this->textBox2->Location = System::Drawing::Point(74, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 1;
			this->textBox2->Enter += gcnew System::EventHandler(this, &Algo1Form::textBox1_Enter);
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Algo1Form::textBox_KeyUp);
			this->textBox2->Validated += gcnew System::EventHandler(this, &Algo1Form::textBox1_Validated);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(345, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 58);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Зчитати дані з файлу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Algo1Form::button1_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(243, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 31);
			this->label4->TabIndex = 0;
			this->label4->Text = L"=";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 165);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(207, 86);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(420, 254);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Вихід";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Algo1Form::button2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::DarkRed;
			this->label3->Location = System::Drawing::Point(269, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"          ";
			// 
			// Algo1Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 301);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Algo1Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Завдання №1 (лінійний алгоритм)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// —------— підпограма обробки помилок уведення аргументів —-----------
private: System::Void ClearText(int n, String ^s) {
			 if (n == 1) textBox1->Text = ""; // очистити textBox1
			 else textBox2->Text = ""; // очистити textBox2
			 label3->Text = "не визначено";
			 MessageBox::Show(s, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  bool readFile = false;	// прапор успішного читання з файлу
			  String ^str1, ^str2;		// рядки читяння з файлу
			  StreamReader ^sreamRead;	// потік
			  char PathName[250];
			  GetCurrentDirectory(250, PathName);	// отримати повний шлях до проекту
			  strcat_s(PathName, "\\Task\\Task1.txt"); // дописати до нього \Res\Task1.txt (файл із аргументами завдання)
			  if (CreateFile(PathName, NULL, NULL, NULL, OPEN_EXISTING, 0, NULL) != INVALID_HANDLE_VALUE) {	// якщо файл Task1.txt є в папці Task 
				  sreamRead = gcnew StreamReader(gcnew String(PathName)); // відкрити потік читання з файлу \Task\Task1.txt
				  readFile = true;	// підняти прапор читання
			  }
			  else {		// інакше вибрати і відкрити файл через діалог OpenFileDialog
				  OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
				  openFileDialog->Title = "Відкрити файл із значеннями аргументів Завдання №1"; // встановити заголовок вікна
				  openFileDialog->InitialDirectory = Path::Combine(Application::StartupPath, "\Task"); // встановити початкову папку для читання (папка Res повинна бути в папці із exe-файлом)
				  openFileDialog->Filter = "Файли із завданням|*.txt|Всі файли (*.*)|*.*"; // встановити два фільтри
				  openFileDialog->FilterIndex = 1; // встановити перший фільтр основним (поточним)
				  if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // якщо в діалозі читання вибрано файл і натиснуто Ок
					  sreamRead = gcnew StreamReader(openFileDialog->FileName); // відкрити потік читання з вибраного файлу
					  readFile = true;	// підняти прапор читання
				  }
			  }
			  if (readFile) {	// якщо файл успішно відкрито
				  str1 = gcnew String(sreamRead->ReadLine()); // прочитати перший рядок (там записане значання змінної а)
				  str2 = gcnew String(sreamRead->ReadLine()); // прочитати перший рядок (там записане значання змінної b)
				  sreamRead->Close(); // закрити потік читання
				  double a, b;
				  if ((!Double::TryParse(Convert::ToString(str1), a)) || (!Double::TryParse(Convert::ToString(str2), b)) || !a || !b) // якщо при читанні з файлу виникла помилка
					  MessageBox::Show("Некоректні вхідні дані", "Помилка читання файлу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				  else {
					  textBox1->Text = str1;				// записати перше число в textBox1 
					  textBox2->Text = str2;				// записати друге число в textBox2 
					  textBox1_Validated(sender, e);	// викликати процедуру обробки аргументів і обчислення результатів
				  }
			  }
 }
private: System::Void textBox1_Validated(System::Object^  sender, System::EventArgs^  e) {
			 double a, b;
			 if (!textBox1->Text->Length) return; // якщо textBox1 пустий, то вийти із процедури
			 if (!Double::TryParse(Convert::ToString(textBox1->Text), a)) { // конвертувати a в double і перевірити правильність 
				 ClearText(1, "Помилка уведення даних!");
				 textBox1->Focus(); // встановити фокус уведення на textBox1
				 return;
			 }
			 if (!a) { // якщо а==0
				 ClearText(1, "Змінна а не повинна дорівнювати 0!");
				 textBox1->Focus(); // встановити фокус уведення на textBox1
				 return;
			 }
			 if (!textBox2->Text->Length) return; // якщо textBox1 пустий, то вийти із процедури
			 if (!Double::TryParse(Convert::ToString(textBox2->Text), b)) { // конвертувати b в double і перевірити правильність 
				 ClearText(2, "Помилка уведення даних!");
				 textBox2->Focus(); // встановити фокус уведення на textBox2
				 return;
			 }
			 if (!b) { // якщо b==0
				 ClearText(2, "Змінна b не повинна дорівнювати 0!");
				 textBox2->Focus(); // встановити фокус уведення на textBox2
				 return;
			 }
			 label3->Text = Convert::ToString(DoAlgo1(a,b)); // виведення результату
}
private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if ((!textBox1->Text->Length) || (!textBox2->Text->Length)) // якщо в полях щось записано
				 label3->Text = "не визначено";
}
private: System::Void textBox_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
				 textBox1_Validated(sender, e);	// викликати процедуру обробки аргументів і обчислення результатів
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}

};
}
