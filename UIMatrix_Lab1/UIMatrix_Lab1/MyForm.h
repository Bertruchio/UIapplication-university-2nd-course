//12. Дана матрица размера M x N. Заменить каждый отрицательный элемент этой матрицы на сумму элементов своей строки.
#pragma once
#include <Windows.h>

namespace UIMatrixLab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ сгенерироватьМатрицуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::ToolStripMenuItem^ очиститьToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->сгенерироватьМатрицуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Roboto", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(36, 53);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(640, 191);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(407, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 29);
			this->label5->TabIndex = 9;
			this->label5->Text = L"N:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(170, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"M:";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::Gray;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->ForeColor = System::Drawing::SystemColors::Info;
			this->numericUpDown2->Location = System::Drawing::Point(454, 109);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(161, 35);
			this->numericUpDown2->TabIndex = 7;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::Control;
			this->radioButton3->Location = System::Drawing::Point(22, 60);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(122, 28);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Случайно";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(22, 109);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(111, 28);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->Text = L"Вручную";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(217, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Размерность матрицы M x N (1 - 100)";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::Gray;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::Info;
			this->numericUpDown1->Location = System::Drawing::Point(217, 109);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(161, 35);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(36, 251);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::White;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Gray;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(640, 383);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(611, 699);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 67);
			this->button1->TabIndex = 2;
			this->button1->Text = L"СТАРТ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->сгенерироватьМатрицуToolStripMenuItem,
					this->очиститьToolStripMenuItem, this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1364, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// сгенерироватьМатрицуToolStripMenuItem
			// 
			this->сгенерироватьМатрицуToolStripMenuItem->Name = L"сгенерироватьМатрицуToolStripMenuItem";
			this->сгенерироватьМатрицуToolStripMenuItem->Size = System::Drawing::Size(192, 24);
			this->сгенерироватьМатрицуToolStripMenuItem->Text = L"Сгенерировать матрицу";
			this->сгенерироватьМатрицуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сгенерироватьМатрицуToolStripMenuItem_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->очиститьToolStripMenuItem->Text = L"Очистить";
			this->очиститьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститьToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(709, 251);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Gray;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(624, 383);
			this->dataGridView2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(950, 210);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 34);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Результат";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->label3->Location = System::Drawing::Point(232, 655);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(882, 26);
			this->label3->TabIndex = 6;
			this->label3->Text = L"После задания матрицы вручную, нажмите кнопку СТАРТ повторно для расчёта результа"
				L"та";
			this->label3->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(849, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(208, 30);
			this->textBox1->TabIndex = 7;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(728, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(581, 29);
			this->label6->TabIndex = 8;
			this->label6->Text = L"В заданной таблице нет отрицательных значений";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(696, 115);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(646, 24);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Хотите заменить некоторые положительные значения\? (от 0 до n)";
			this->label7->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1046, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 33);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Нет";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(889, 164);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 33);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Да";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Roboto", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(1086, 164);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 33);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Изменить";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1364, 778);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Обработчик матрицы";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Создаём функцию typing для ручного ввода
	private: void typing(int M, int N, int** mass) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				//Получаем значения из ячеек таблицы
				mass[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
	}

		   //Создаём функцию random для случайной матрицы
	private: void random(int M, int N, int** mass) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				mass[i][j] = rand() % 100 - 50;
			}
		}
	}

	//Создаём функцию clear для очистки таблицы и результата
	private: void clear() {
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			for (int j = 0; j < dataGridView2->Columns->Count; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = 0;
				dataGridView1->Rows[i]->Cells[j]->Value = 0;
			}
		}
	}

	//Отображаем задаваемый массив 
	private: void show(int M, int N, int** mass) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				//Название таблицы
				dataGridView1->TopLeftHeaderCell->Value = "Матрица";

				//Вывод номеров столбцов
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

				//Вывод номеров строк
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

				//Вывод значений ячеек
				dataGridView1->Rows[i]->Cells[j]->Value = mass[i][j];
			}
		}
	}

	//Проверка на наличие отрицательных значений в матрице
	private: bool isPositive(int M, int N, int** mass) {
		bool check = true;
		bool checkZero = true;

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (mass[i][j] != 0) {
					checkZero = false;
				}
			}
		}
		if (checkZero) {
			check = false;
			label6->Visible = false;
			label7->Visible = false;
			button2->Visible = false;
			button3->Visible = false;
			return check;
		}

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (mass[i][j] < 0 ) {
					check = false;
					label6->Visible = false;
					label7->Visible = false;
					button2->Visible = false;
					button3->Visible = false;
					return check;
				}
			}
		}

		if (check) {
			label6->Visible = true;
			label7->Visible = true;
			button2->Visible = true;
			button3->Visible = true;
		}
		return check;
	}

	private: void changePositive(int enter) {
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			for (int j = 0; j < dataGridView2->Columns->Count; j++) {
				if (Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value) <= enter) {
					dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value) * (-1);
				}
			}
		}
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = 0;
			}
		}

		label3->Visible = true;
	}

	//Создаём функцию result, которая будет искать в каждой строке отрицательные элементы и 
	//заменять их на сумму элементов своей строки 

	private: void result(int M, int N, int** mass) {
		//Создаём динамический массив под результат
		int** result = new int* [M];
		for (int i = 0; i < M; i++) {
			result[i] = new int[N];
		}

		//Заполняем двумерный массив результата заданными значениями для редактирования
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				result[i][j] = mass[i][j];
			}
		}

		int SumOfLine = 0;

		//Ищем отрицательные элементы и заменяем их на сумму элементов своей строки 
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				SumOfLine += mass[i][j];
			}
			

			for (int j = 0; j < N; j++) {
				if (result[i][j] < 0) {
					result[i][j] = SumOfLine;
				}
			}

			SumOfLine = 0;
		}

		//Отображаем результат
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				//Название таблицы
				dataGridView2->TopLeftHeaderCell->Value = "Результат обработки матрицы";

				//Вывод номеров столбцов
				dataGridView2->Columns[j]->HeaderCell->Value = Convert::ToString(j+1);

				//Вывод номеров строк
				dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i+1);

				//Вывод значений ячеек
				dataGridView2->Rows[i]->Cells[j]->Value = result[i][j];
			}
		}

		//Удаляем массив result
		for (int i = 0; i < M; i++) {
			delete[] result[i];
		}
		delete[] result;
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		label3->Visible = false;

		//Получаем размерность матрицы
		int M = Convert::ToInt32(numericUpDown1->Value);
		int N = Convert::ToInt32(numericUpDown2->Value);


		//Создаём двумерный динамический массив
		int** mass = new int* [M];
		for (int i = 0; i < M; i++) {
			mass[i] = new int[N];
		}

		//Создаём таблицу под матрицу
		dataGridView1->ColumnCount = N;
		dataGridView1->RowCount = M;

		//Создаём таблицу под результат
		dataGridView2->ColumnCount = N;
		dataGridView2->RowCount = M;

		//Если выбран вариант "вручную"
		if (radioButton2->Checked) {
			//Вызываем функцию typing для заполнения матрицы значениями вручную
			typing(M, N, mass);
		}
		//Если выбран вариант "случайно"
		if (radioButton3->Checked) {
			//Вызываем функцию random для заполнения матрицы случайными числами
			random(M, N, mass);
		}

		//Вызываем функцию show для вывода матрицы
		show(M, N, mass);

		//Вызываем функцию result для вывода матрицы результата
		result(M, N, mass);

		isPositive(M, N, mass);

		//Выравниваем ячейки таблицы
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView2->AutoResizeColumns();

		//Удалаем из памяти массив с матрицей
		for (int i = 0; i < M; i++) {
			delete[] mass[i];
		}
		delete[] mass;
	}

	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		clear();
		dataGridView1->ReadOnly = true;
		label3->Visible = false;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Очищаем таблицу
		clear();
		button1->PerformClick();
		dataGridView1->ReadOnly = false;
		label3->Visible = false;
	}
	private: System::Void очиститьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		clear();
		label3->Visible = false;
	}
	private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int q;

		//При вводе в ячейку таблицы значения, которое не является числом, вызываем 
		//сообщение об ошибке и меняем значение на "0"
		if (!Int32::TryParse(Convert::ToString(dataGridView1->CurrentCell->Value), q)) {
			//dataGridView1->CurrentCell->Style->BackColor = ForeColor.Maroon;
			MessageBox::Show("Матрица может состоять только из цифр", "Ошибка");
			dataGridView1->CurrentCell->Value = "0";
		}

		//Очищаем матрицу с результатом, чтобы не ввести пользователя в заблуждение
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = 0;
			}
		}

		label6->Visible = false;
		label7->Visible = false;
		button2->Visible = false;
		button3->Visible = false;

		label3->Visible = true;
	}
	
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Даём описание программы
		MessageBox::Show("Данная программа заменяет каждый отрицательный элемент данной матрицы (M x N) на сумму элементов своей строки. \n\n Выполнил: \n Студент группы ИДБ-21-01 \n Плаксин Артём \n\n\t\t\t 2022 г.", "О программе");
	}
	private: System::Void сгенерироватьМатрицуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Системно нажимаем на кнопку "START"
		button1->PerformClick();
	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		//Выходим из приложения
		Application::Exit();
	}

	//В случае если пользователь не согласен на изменение некоторых значений на отрицательные
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->Visible = false;
		button3->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
	}

	//В случае если пользователь согласен изменить некоторые значения на отрицательные
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ReadOnly = true;
		button2->Visible = false;
		button3->Visible = false;
		label7->Visible = false;
		textBox1->Visible = true;
		button4->Visible = true;
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//При вводе в ячейку таблицы значения, которое не является числом, вызываем 
		//сообщение об ошибке и меняем значение на "0"
		
	}
	//Заменяем некоторые положительные значения на отрицательные
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int q;
		if ((!Int32::TryParse(textBox1->Text, q))) {
			//dataGridView1->CurrentCell->Style->BackColor = ForeColor.Maroon;
			MessageBox::Show("Вводимое значение может быть только положительным числом!", "Ошибка");
			textBox1->Text = "";
			textBox1->BackColor = BackColor.Red;
		}
		else if (Convert::ToInt32(textBox1->Text) <= 0) {
			MessageBox::Show("Вводимое значение может быть только положительным числом!", "Ошибка");
			textBox1->Text = "";
			textBox1->BackColor = BackColor.Red;
		}
		else if (textBox1->Text != "") {
			int enter = Convert::ToInt32(textBox1->Text);
			changePositive(enter);

			textBox1->Visible = false;
			button4->Visible = false;
			label6->Visible = false;
			textBox1->BackColor = BackColor.Gray;
			dataGridView1->ReadOnly = false;
		}
	}
};
}