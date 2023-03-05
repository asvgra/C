#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
#include "MyFormInform1.h"
#include "MyFormKopu.h"


namespace KursovaiaRABFORMS
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
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
//добавление эллементов на форму и изменение их свойсв
	protected:
	private: System::Windows::Forms::TextBox^ textBoxQuantity;


	private: System::Windows::Forms::Button^ buttonJK;





	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::DataGridView^ dataGridViewTable_Koord;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		float X, x, xmax = 0, xmin = 0; //добавление переменных типа float


		double  a, b, c, form, NUM, NYLL, SU, Y, size; //добавление переменных типа double 
	
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)//изменение свойст для эллементов формы
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBoxQuantity = (gcnew System::Windows::Forms::TextBox());
			this->buttonJK = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridViewTable_Koord = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTable_Koord))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxQuantity
			// 
			this->textBoxQuantity->Location = System::Drawing::Point(6, 29);
			this->textBoxQuantity->Multiline = true;
			this->textBoxQuantity->Name = L"textBoxQuantity";
			this->textBoxQuantity->Size = System::Drawing::Size(102, 28);
			this->textBoxQuantity->TabIndex = 1;
			this->textBoxQuantity->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxQuantity_TextChanged);
			// 
			// buttonJK
			// 
			this->buttonJK->Location = System::Drawing::Point(89, 83);
			this->buttonJK->Name = L"buttonJK";
			this->buttonJK->Size = System::Drawing::Size(116, 30);
			this->buttonJK->TabIndex = 6;
			this->buttonJK->Text = L"Ввести значения";
			this->buttonJK->UseVisualStyleBackColor = true;
			this->buttonJK->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::LightGray;
			this->chart1->BorderlineColor = System::Drawing::Color::WhiteSmoke;
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->BackColor = System::Drawing::Color::Silver;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(301, 34);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->BorderWidth = 4;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Legend = L"Legend1";
			series1->Name = L"point1";
			series1->ToolTip = L"X = #VALX, Y = #VALY";
			series2->BorderWidth = 4;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"approks";
			series2->ToolTip = L"X=#VALX, Y=#VALY";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(488, 415);
			this->chart1->TabIndex = 7;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// dataGridViewTable_Koord
			// 
			this->dataGridViewTable_Koord->AllowUserToAddRows = false;
			this->dataGridViewTable_Koord->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewTable_Koord->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridViewTable_Koord->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridViewTable_Koord->ColumnHeadersVisible = false;
			this->dataGridViewTable_Koord->EnableHeadersVisualStyles = false;
			this->dataGridViewTable_Koord->Location = System::Drawing::Point(6, 25);
			this->dataGridViewTable_Koord->Name = L"dataGridViewTable_Koord";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTable_Koord->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewTable_Koord->Size = System::Drawing::Size(186, 150);
			this->dataGridViewTable_Koord->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 30);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Выполнить аппроксимацию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxQuantity);
			this->groupBox1->Controls->Add(this->buttonJK);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(8, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(222, 142);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Введите количество точек";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridViewTable_Koord);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(8, 213);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(287, 231);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Координаты (х,у) точек";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оПрограммеToolStripMenuItem,
					this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(778, 25);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(102, 21);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(70, 21);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(626, 456);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 26);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Очистить данные";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(163, 450);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 29);
			this->textBox1->TabIndex = 16;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(351, 452);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 30);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Вывести уравнение  прямой";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(778, 492);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Аппроксиматор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTable_Koord))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void textBoxQuantity_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //  for (i)
	private: System::Void textBoxMeaningX_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//int NUM;
		if (textBoxQuantity->Text != "")
		{
			NUM = System::Convert::ToInt32(textBoxQuantity->Text);
			dataGridViewTable_Koord->ColumnCount = 2; //присваивание размера для столбцов
			dataGridViewTable_Koord->RowCount = NUM; //присваивание для строк
			  
		}
		else MessageBox::Show("Введите количество точек");

	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
			typedef double* mass;//добавление массива данных 
			mass* arr = new mass[dataGridViewTable_Koord->RowCount];
			double   summx2 = 0;// значение переменным
			double	summx = 0;
			double 	summy = 0;
			double summxy = 0;
			for (int i = 0; i < dataGridViewTable_Koord->RowCount; i++)
			{
				
				arr[i] = new double[dataGridViewTable_Koord->ColumnCount];
				arr[i][0] = Convert::ToDouble(dataGridViewTable_Koord->Rows[i]->Cells[0]->Value);
				arr[i][1] = Convert::ToDouble(dataGridViewTable_Koord->Rows[i]->Cells[1]->Value);
				chart1->Series["point1"]->Points->AddXY(arr[i][0], arr[i][1]);//заполнение массива
				summx += arr[i][0];//расчет коэфициентов методом наименьших квадпатов
				summy += arr[i][1];
				summx2 += arr[i][0] * arr[i][0];
				summxy += arr[i][1] * arr[i][0];
				if (arr[i][0] < xmin)//присвоение минимальное и максимального значения графика
				{
					xmin = arr[i][0];
				}
				if (arr[i][0] > xmax)
				{
					xmax = arr[i][0];
				}
				size = (NUM * summxy - (summx * summy)) / (NUM * summx2 - summx * summx);//расчет коэфициента а
				SU = (summy - size * summx) / NUM;//расчет коэфициета б
				for (int j = 0; j < dataGridViewTable_Koord->ColumnCount; j++)
				{
					

				}
			}
	
		
		x = xmin;
			while (x < xmax)
			{
				Y = size * x + SU;
				chart1->Series["approks"]->Points->AddXY(x, Y);//вывод на график линии по заданным значениям

				x += 0.1;
			}
	
	}
	
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormInform1^ F2 = gcnew MyFormInform1();
		  F2->Show();
	}
private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormKopu^ F2 = gcnew MyFormKopu();
	F2->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//кнопка очистки памяти
	chart1->Series["point1"]->Points->Clear();
	chart1->Series["approks"]->Points->Clear();
	textBoxQuantity->Clear();
	textBox1->Clear();
	dataGridViewTable_Koord->Rows->Clear();
	dataGridViewTable_Koord->Columns->Clear();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//System::Convert::ToStr(size) + x (SU)
	//Y = Sustem
	//textBox1->Text = System::Convert::ToString (size)+x+SU;
	//textBox1->Text = Convert::ToInt32(textBox1->Text) + Y
	//textBox1->Text = Convert::ToInt32
	//textBox1->Text;
	//textBox1 ->Size;
	if (textBox1->Text == "")
	{
		//textBox1->Text = System::Convert::ToString(size) + "x" + System::Convert::ToString(SU);
		textBox1->Text = "y= " + System::Convert::ToString(size) +  " x * " + System::Convert::ToString(SU);
		//textBox1->Text = System::Convert::ToString(SU) + 'x' + SU;
	}
} 
};
}







	   //int size, SU;
   //}
	   //arr[i][j] = Convert::ToDouble(dataGridViewTable_Koord->Rows[i]->Cells[j]->Value);
   //else  {

   //	size = (summy - NUM * (summxy / summx)) / (summx -NUM * (pow(summx, 2)) / (summx));
   //	SU = (summxy - size * (pow(summx, 2)))/ summx;

   //apprors = ["x^4 - 7(x^2 + 10)"];
	   //MyFunction func = gcnew MyFunction();

	   //chart1->Series[X]->Points->AddXY(size, SU );
	   //chart1->Series->Add(size);


	 // else MessageBox::Show("упс"); {
	 // }

//	}
	

	//	}
 

			//private: System::Void оПрограммеToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
			//	Informait^ F2 = gcnew Informait();
			//	F2->Show();
			//}

				   // private: System::Void dataGridViewTable_Koord_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
					//{
					 //   }
				   //  private: System::Void dataGridViewTable_Koord_RowPrePaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPrePaintEventArgs^ e) {;


			//private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
			//}
 