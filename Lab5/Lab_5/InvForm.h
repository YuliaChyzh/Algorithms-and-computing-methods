// ���������� ���� ��� ��������� ���������� ���� �������� �������

#include "calc.h"

#pragma once

namespace Lab_5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� InvForm
	/// </summary>
	public ref class InvForm : public System::Windows::Forms::Form {
	public:
		InvForm(void) {
			InitializeComponent(); 
			//TODO: �������� ��� ������������
		}
	protected:
		// ���������� ��� ������������ �������.
		~InvForm() {
			if (components) {
				delete components;
			}
		}

	private:
		System::ComponentModel::Container ^components;

	protected:
		// DataGridView ��� ����������� ������� �������� �������� ������� 
	public: System::Windows::Forms::DataGridView^  matrix_InvTable;
		// ��� (�������), �� ����� ���������� matrix_InvTable

			 // �� ������ ��


			 // ��� (������), �� ��'���� �� ������ ��

			 // ������-��� � 3-�� �������� � 3-�� ������
	private: System::Windows::Forms::ToolStrip^  toolStrip;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel_Iterac;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox_Iterac;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::Button^  bClose;
	private: System::Windows::Forms::Button^  bSaveRes;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutBottom;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	
#pragma region Windows Form Designer generated code
		// ������������ ����� ��� ��������� ������������ (�� ��������� ���������� ������� ������ ��� ������ ��������� ����)
		void InitializeComponent(void) {
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(InvForm::typeid));
			this->matrix_InvTable = (gcnew System::Windows::Forms::DataGridView());
			this->toolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel_Iterac = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox_Iterac = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bClose = (gcnew System::Windows::Forms::Button());
			this->bSaveRes = (gcnew System::Windows::Forms::Button());
			this->tableLayoutBottom = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix_InvTable))->BeginInit();
			this->toolStrip->SuspendLayout();
			this->tableLayoutBottom->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// matrix_InvTable
			// 
			this->matrix_InvTable->AllowUserToAddRows = false;
			this->matrix_InvTable->AllowUserToDeleteRows = false;
			this->matrix_InvTable->AllowUserToResizeColumns = false;
			this->matrix_InvTable->AllowUserToResizeRows = false;
			this->matrix_InvTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->matrix_InvTable->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->matrix_InvTable->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->matrix_InvTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Gold;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->matrix_InvTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->matrix_InvTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrix_InvTable->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->matrix_InvTable->DefaultCellStyle = dataGridViewCellStyle2;
			this->matrix_InvTable->Location = System::Drawing::Point(24, 11);
			this->matrix_InvTable->Name = L"matrix_InvTable";
			this->matrix_InvTable->ReadOnly = true;
			this->matrix_InvTable->RowHeadersVisible = false;
			this->matrix_InvTable->RowHeadersWidth = 10;
			this->matrix_InvTable->Size = System::Drawing::Size(151, 407);
			this->matrix_InvTable->TabIndex = 0;
			// 
			// toolStrip
			// 
			this->toolStrip->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->toolStrip->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStrip->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripSeparator1,
					this->toolStripLabel_Iterac, this->toolStripTextBox_Iterac, this->toolStripSeparator2, this->toolStripSeparator3
			});
			this->toolStrip->Location = System::Drawing::Point(0, 426);
			this->toolStrip->Name = L"toolStrip";
			this->toolStrip->Padding = System::Windows::Forms::Padding(10, 5, 0, 5);
			this->toolStrip->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->toolStrip->Size = System::Drawing::Size(554, 36);
			this->toolStrip->Stretch = true;
			this->toolStrip->TabIndex = 9;
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 26);
			// 
			// toolStripLabel_Iterac
			// 
			this->toolStripLabel_Iterac->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripLabel_Iterac->ForeColor = System::Drawing::Color::Maroon;
			this->toolStripLabel_Iterac->Name = L"toolStripLabel_Iterac";
			this->toolStripLabel_Iterac->Size = System::Drawing::Size(140, 23);
			this->toolStripLabel_Iterac->Text = L"ʳ������ ��������";
			// 
			// toolStripTextBox_Iterac
			// 
			this->toolStripTextBox_Iterac->BackColor = System::Drawing::SystemColors::Window;
			this->toolStripTextBox_Iterac->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->toolStripTextBox_Iterac->ForeColor = System::Drawing::Color::Maroon;
			this->toolStripTextBox_Iterac->Name = L"toolStripTextBox_Iterac";
			this->toolStripTextBox_Iterac->ReadOnly = true;
			this->toolStripTextBox_Iterac->Size = System::Drawing::Size(100, 26);
			this->toolStripTextBox_Iterac->TextBoxTextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 26);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 26);
			// 
			// bClose
			// 
			this->bClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bClose.Image")));
			this->bClose->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bClose->Location = System::Drawing::Point(23, 340);
			this->bClose->Name = L"bClose";
			this->bClose->Size = System::Drawing::Size(211, 64);
			this->bClose->TabIndex = 1;
			this->bClose->Text = L"��&���";
			this->bClose->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bClose->UseVisualStyleBackColor = true;
			this->bClose->Click += gcnew System::EventHandler(this, &InvForm::bClose_Click);
			// 
			// bSaveRes
			// 
			this->bSaveRes->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSaveRes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bSaveRes.Image")));
			this->bSaveRes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bSaveRes->Location = System::Drawing::Point(23, 3);
			this->bSaveRes->Name = L"bSaveRes";
			this->bSaveRes->Size = System::Drawing::Size(211, 64);
			this->bSaveRes->TabIndex = 0;
			this->bSaveRes->Text = L"&�������� \r\n����\'���� � ����";
			this->bSaveRes->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bSaveRes->UseVisualStyleBackColor = true;
			this->bSaveRes->Click += gcnew System::EventHandler(this, &InvForm::bSaveRes_Click);
			// 
			// tableLayoutBottom
			// 
			this->tableLayoutBottom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutBottom->ColumnCount = 3;
			this->tableLayoutBottom->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutBottom->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutBottom->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutBottom->Controls->Add(this->bSaveRes, 1, 0);
			this->tableLayoutBottom->Controls->Add(this->bClose, 1, 2);
			this->tableLayoutBottom->Location = System::Drawing::Point(297, 11);
			this->tableLayoutBottom->Name = L"tableLayoutBottom";
			this->tableLayoutBottom->RowCount = 3;
			this->tableLayoutBottom->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
			this->tableLayoutBottom->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutBottom->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
			this->tableLayoutBottom->Size = System::Drawing::Size(254, 407);
			this->tableLayoutBottom->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				200)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				260)));
			this->tableLayoutPanel1->Controls->Add(this->matrix_InvTable, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutBottom, 2, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 8)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(554, 421);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// InvForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 462);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->toolStrip);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(570, 500);
			this->Name = L"InvForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"����\'���� ���� ������� ������� ���������� ";
			this->Load += gcnew System::EventHandler(this, &InvForm::InvForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix_InvTable))->EndInit();
			this->toolStrip->ResumeLayout(false);
			this->toolStrip->PerformLayout();
			this->tableLayoutBottom->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// ---------- ���������� ������� ��䳿 ����������� ������������ ����� ----------------
	private: System::Void InvForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 matrix_InvTable->AutoResizeColumns();  // �������� ������ Grid-a
				 toolStripTextBox_Iterac->Text = Convert::ToString(kolIter);				// ������������ ������� ��������� � ����� �������� � ����� � �������� ��������� � ���������

	}
			 // ---------- ���������� �������� �� ����������� ����� Grid-a � ������ ���� �������� � ������� ----------------
	public: float* GridToMatrix(int N) { // ���������� �������� �������
				 bool err = false;			// ��������� ������� (������� �������)
				 float *Rez = new float[N];		// �������� ���� �������
				 for (int i = 0; i < N && !err; i++) 	// ���� �� ������ �������
					  err = !float::TryParse(Convert::ToString(matrix_InvTable->Rows[i]->Cells[0]->Value), Rez[i]);	// ������������ ������� � float � ��������� ������������  
				 return (err) ? NULL : Rez;	// ���������: NULL, ���� ������� �������, ������, ������ ������� Rez 
	}
		 // ---------- ���������� ������ ������� ��������� N �� ����� file ----------------
	private: System::Void SaveTo(float * Rez, String ^file, int N) {	// ������ �������� �������, �������� �� �����, �� ������ ������ �� �����, ���������� �������
				 System::String ^st1 = gcnew System::String("");		// ����� ��� ������ ����� 
				 System::IO::StreamWriter ^streamWrite = gcnew System::IO::StreamWriter(file, false);	// ������� ���� (����) ��� ������ (���� ���� ��� ���� - ������������ ����)
//				 streamWrite->WriteLine(Convert::ToString(N));	// �������� � ���� ���������� ������� �
				 st1 = "";	// �������� �����
				 for (int i = 0; i < N; i++) // ���� �� N-��������� ������� ����'����  
					 st1 = st1->Concat(st1, Convert::ToString(Rez[i])+" "); // �������� �� ����� ��������� ������� ������� ����'����
				 streamWrite->WriteLine(st1->Replace(",", "."));		// �������� ����������� ����� � ���� (����)
				 streamWrite->Close();	// ������� ���� (����)
				 MessageBox::Show("����� ������� ����'���� �� ����� �������� �����.", "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
		 // ---------- ����� ������ ����� ��� ������ � ����� ��������� ������� ----------------
private: System::Void bSaveRes_Click(System::Object^  sender, System::EventArgs^  e) {
			 int N = Convert::ToInt32(matrix_InvTable->Tag); // ������������ ���������� Grid-a � �����
			 float *Rez = GridToMatrix(N); // ������������ Gr�d � ������� float
			 if (Rez) { // ���� �� �������� Grid-a �������� �����, �� �������� �� � ����
				 SaveFileDialog ^saveFileDialogTo = gcnew System::Windows::Forms::SaveFileDialog();
				 saveFileDialogTo->Title = "���������� ������� ����'���� �� �����";
				 saveFileDialogTo->InitialDirectory = Path::Combine(Application::StartupPath, "\Result");	// ���������� ��������� ����� ��� ������� (����� Result ������� ���� � ����� �� exe-������)
				 saveFileDialogTo->Filter = "����� �� ���������|*.tsk|����� �� �������|*.res|�� �����|*.*";
				 saveFileDialogTo->FilterIndex = 2;	// ���������� �������� (��������) ������ ������ 
				 if (saveFileDialogTo->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialogTo->FileName->Length > 0) // ������� ����� ������ �� �����	 
					 SaveTo(Rez, saveFileDialogTo->FileName, Convert::ToInt32(N)); // �������� ����� ������� ����'���� �� �����
				 else
					 MessageBox::Show("������ ����'���� �� ����� �� ���������!", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
}
		 // ---------- ���������� �������� ���� ����� ----------------
private: System::Void bClose_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}
};
}