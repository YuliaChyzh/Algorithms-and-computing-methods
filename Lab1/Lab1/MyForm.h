#include "Algo1Form.h"
#include "Algo2Form.h"
#include "Algo3Form.h"

#pragma once

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:




	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem3;






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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(287, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ToolStripMenuItem1,
					this->ToolStripMenuItem2, this->ToolStripMenuItem3
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->��������ToolStripMenuItem->Text = L"�������� �";
			// 
			// ToolStripMenuItem1
			// 
			this->ToolStripMenuItem1->Name = L"ToolStripMenuItem1";
			this->ToolStripMenuItem1->Size = System::Drawing::Size(147, 22);
			this->ToolStripMenuItem1->Text = L"�������� �1";
			this->ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItem1_Click_1);
			// 
			// ToolStripMenuItem2
			// 
			this->ToolStripMenuItem2->Name = L"ToolStripMenuItem2";
			this->ToolStripMenuItem2->Size = System::Drawing::Size(147, 22);
			this->ToolStripMenuItem2->Text = L"�������� �2";
			this->ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItem2_Click_1);
			// 
			// ToolStripMenuItem3
			// 
			this->ToolStripMenuItem3->Name = L"ToolStripMenuItem3";
			this->ToolStripMenuItem3->Size = System::Drawing::Size(147, 22);
			this->ToolStripMenuItem3->Text = L"�������� �3";
			this->ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItem3_Click_1);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(233, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������� �1 (������ ��������)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItem1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(233, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�������� �2 (�������� ������������)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItem2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 181);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(233, 48);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�������� �3 (�������� ��������)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItem3_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(287, 262);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����������� ������ �1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void exitItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Close();	// ������� ������� ����� (��� ��������)
	}
private: System::Void ToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Algo1Form ^Form_1 = gcnew(Algo1Form);
			 Form_1->ShowDialog();
}

private: System::Void ToolStripMenuItem2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Algo2Form ^Form_2 = gcnew(Algo2Form);
			 Form_2->ShowDialog();
}
private: System::Void ToolStripMenuItem3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Algo3Form ^Form_3 = gcnew(Algo3Form);
			 Form_3->ShowDialog();
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("\t     ����������� ������ �1\n\t        \"������� ���������.\n   ��������� ��������� � ������ ����-����\"\n\t               ������ �17\n\n\t�������� ��������� ����� ��-54\n\t          ���������� - Բ��\n\t\t����\"�ϲ\"\n\t         ��� ��� ���������\n\n\te-mail: yulia_yulia01@ukr.net\n      �������: +3(098) 322 00 48, +3(095) 043 75 77", "��� ������", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}