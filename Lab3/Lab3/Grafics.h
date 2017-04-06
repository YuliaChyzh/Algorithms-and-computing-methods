#pragma once

namespace Lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Grafics
	/// </summary>
	public ref class Grafics : public System::Windows::Forms::Form
	{
	public:
		Grafics(void)
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
		~Grafics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panelChart;
	protected:
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  graphchart;
	public: System::Windows::Forms::CheckBox^  checkBox1;
	public:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->panelChart = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->graphchart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panelChart->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphchart))->BeginInit();
			this->SuspendLayout();
			// 
			// panelChart
			// 
			this->panelChart->Controls->Add(this->checkBox1);
			this->panelChart->Controls->Add(this->graphchart);
			this->panelChart->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelChart->Location = System::Drawing::Point(0, 0);
			this->panelChart->Name = L"panelChart";
			this->panelChart->Size = System::Drawing::Size(1121, 597);
			this->panelChart->TabIndex = 21;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::White;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(12, 12);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(315, 20);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Виводити оригінальний графік функції";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Grafics::checkBox1_CheckedChanged);
			// 
			// graphchart
			// 
			chartArea1->AxisX->IsLabelAutoFit = false;
			chartArea1->AxisY->IsLabelAutoFit = false;
			chartArea1->CursorX->AutoScroll = false;
			chartArea1->CursorY->AutoScroll = false;
			chartArea1->Name = L"ChartArea1";
			this->graphchart->ChartAreas->Add(chartArea1);
			this->graphchart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Alignment = System::Drawing::StringAlignment::Center;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->graphchart->Legends->Add(legend1);
			this->graphchart->Location = System::Drawing::Point(0, 0);
			this->graphchart->Name = L"graphchart";
			this->graphchart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series1->BorderWidth = 6;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->LegendText = L"Оригінальна функція";
			series1->Name = L"Original";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Aqua;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Інтерполяційний поліном";
			series2->Name = L"Interpolyation";
			series3->BorderWidth = 4;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series3->Color = System::Drawing::Color::Red;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Контрольні точки";
			series3->Name = L"ControlPoint";
			this->graphchart->Series->Add(series1);
			this->graphchart->Series->Add(series2);
			this->graphchart->Series->Add(series3);
			this->graphchart->Size = System::Drawing::Size(1121, 597);
			this->graphchart->TabIndex = 16;
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Графік полінома";
			this->graphchart->Titles->Add(title1);
			// 
			// Grafics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 597);
			this->Controls->Add(this->panelChart);
			this->Name = L"Grafics";
			this->Text = L"Перегляд графіка";
			this->panelChart->ResumeLayout(false);
			this->panelChart->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphchart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 graphchart->Series["Original"]->Enabled = checkBox1->Checked;
	}
};
}
