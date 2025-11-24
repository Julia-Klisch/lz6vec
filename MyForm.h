#pragma once
 
#include <ctime>
#include <cstdlib>
#include <vector>  
namespace vec6 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(810, 481);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(802, 452);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(552, 96);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(201, 196);
			this->listBox1->TabIndex = 3;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(38, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(245, 335);
			this->dataGridView1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(348, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(348, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Заповнити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(802, 452);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(565, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 30);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(242, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 30);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(358, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Кількість стовпців:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(60, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Кількість рядків:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(60, 119);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(372, 219);
			this->dataGridView2->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(548, 162);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 52);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Виконати";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 481);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Налаштовуємо DataGridView: один стовпець
		dataGridView1->ColumnCount = 1;
		dataGridView1->Columns[0]->Name = "Елемент масиву";

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = 10;                     // розмір масиву
	std::vector<int> arr(size);        // вектор на size елементів

	dataGridView1->Rows->Clear();      // очищаємо таблицю
	listBox1->Items->Clear();          // очищаємо ListBox (результати)

	// Заповнення вектора випадковими числами [-10; 10]
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
	}

	// Виведення у DataGridView
	for (int i = 0; i < size; i++)
	{
		dataGridView1->Rows->Add(arr[i].ToString());
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Перевірка: чи є дані
	if (dataGridView1->Rows->Count == 0)
	{
		MessageBox::Show("Спочатку згенеруйте масив (кнопка 1).");
		return;
	}

	bool first = true;
	int minVal = 0;
	int maxVal = 0;

	// Перегляд рядків таблиці
	for (int i = 0; i < dataGridView1->Rows->Count; i++)
	{
		if (dataGridView1->Rows[i]->Cells[0]->Value == nullptr)
			continue;  // пропускаємо порожні рядки

		int value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);

		if (first)
		{
			minVal = maxVal = value;
			first = false;
		}
		else
		{
			if (value < minVal) minVal = value;
			if (value > maxVal) maxVal = value;
		}
	}

	if (first)
	{
		MessageBox::Show("Немає коректних чисел.");
		return;
	}

	int diff = maxVal - minVal;

	// Виведення результату
	listBox1->Items->Add("-----------------------------");
	listBox1->Items->Add("Мінімум: " + minVal);
	listBox1->Items->Add("Максимум: " + maxVal);
	listBox1->Items->Add("Різниця (max - min): " + diff);

	MessageBox::Show("Різниця між найбільшим і найменшим елементами: " + diff);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int rows = Convert::ToInt32(textBox1->Text);
	int cols = Convert::ToInt32(textBox2->Text);

	if (rows <= 0 || cols <= 0)
	{
		MessageBox::Show("Введіть додатні значення рядків і стовпців!");
		return;
	}

	std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();

	for (int j = 0; j < cols; ++j)
	{
		dataGridView2->Columns->Add("Column" + j, "Column " + (j + 1));
	}

	int sumNegative = 0;
	Random^ rand = gcnew Random();

	for (int i = 0; i < rows; ++i)
	{
		// додаємо новий рядок у DataGridView
		dataGridView2->Rows->Add(gcnew array<Object^>(cols));

		for (int j = 0; j < cols; ++j)
		{
			int num = rand->Next(-10, 11);  // [-10; 10]
			matrix[i][j] = num;

			dataGridView2->Rows[i]->Cells[j]->Value = num;

			if (num < 0)
				sumNegative += num;
		}
	}

	MessageBox::Show("Сума всіх від'ємних елементів матриці: " +
		sumNegative.ToString("0"),
		"Результат");
}
};
}
