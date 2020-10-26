#pragma once
#include <cmath>

namespace exponent {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtX;

	private: System::Windows::Forms::Label^ lblX;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rbtn6;

	private: System::Windows::Forms::RadioButton^ rbtn4;

	private: System::Windows::Forms::RadioButton^ rbtn2;
	private: System::Windows::Forms::RadioButton^ rbtn5;



	private: System::Windows::Forms::RadioButton^ rbtn3;


	private: System::Windows::Forms::RadioButton^ rbtn1;

	private: System::Windows::Forms::Button^ btnCalculate;


	private: System::Windows::Forms::Label^ lblHeading;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblSource;
	private: System::Windows::Forms::Label^ lblEps;
	private: System::Windows::Forms::Label^ lblAccurateValue;
	private: System::Windows::Forms::Label^ lblTerms;
	private: System::Windows::Forms::Label^ lblSumm;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ rbtnCos;

	private: System::Windows::Forms::RadioButton^ rbtnSin;

	private: System::Windows::Forms::RadioButton^ rbtnExp;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtX = (gcnew System::Windows::Forms::TextBox());
			this->lblX = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtn6 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn4 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn5 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn3 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn1 = (gcnew System::Windows::Forms::RadioButton());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->lblHeading = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblSource = (gcnew System::Windows::Forms::Label());
			this->lblEps = (gcnew System::Windows::Forms::Label());
			this->lblAccurateValue = (gcnew System::Windows::Forms::Label());
			this->lblTerms = (gcnew System::Windows::Forms::Label());
			this->lblSumm = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnCos = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnSin = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnExp = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtX);
			this->groupBox1->Controls->Add(this->lblX);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Location = System::Drawing::Point(12, 115);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(333, 71);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор значения X (-13<=X<=20)";
			// 
			// txtX
			// 
			this->txtX->Location = System::Drawing::Point(57, 29);
			this->txtX->Name = L"txtX";
			this->txtX->Size = System::Drawing::Size(256, 24);
			this->txtX->TabIndex = 2;
			this->txtX->Text = L"1";
			this->txtX->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtX->TextChanged += gcnew System::EventHandler(this, &MyForm::txtX_TextChanged);
			// 
			// lblX
			// 
			this->lblX->AutoSize = true;
			this->lblX->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblX->Location = System::Drawing::Point(20, 30);
			this->lblX->Name = L"lblX";
			this->lblX->Size = System::Drawing::Size(30, 20);
			this->lblX->TabIndex = 2;
			this->lblX->Text = L"x =";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbtn6);
			this->groupBox2->Controls->Add(this->rbtn4);
			this->groupBox2->Controls->Add(this->rbtn2);
			this->groupBox2->Controls->Add(this->rbtn5);
			this->groupBox2->Controls->Add(this->rbtn3);
			this->groupBox2->Controls->Add(this->rbtn1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox2->Location = System::Drawing::Point(12, 187);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(333, 85);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выбор точности";
			// 
			// rbtn6
			// 
			this->rbtn6->AutoSize = true;
			this->rbtn6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn6->Location = System::Drawing::Point(238, 53);
			this->rbtn6->Name = L"rbtn6";
			this->rbtn6->Size = System::Drawing::Size(86, 24);
			this->rbtn6->TabIndex = 0;
			this->rbtn6->Text = L"0.000001";
			this->rbtn6->UseVisualStyleBackColor = true;
			this->rbtn6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn6_CheckedChanged);
			// 
			// rbtn4
			// 
			this->rbtn4->AutoSize = true;
			this->rbtn4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn4->Location = System::Drawing::Point(129, 53);
			this->rbtn4->Name = L"rbtn4";
			this->rbtn4->Size = System::Drawing::Size(70, 24);
			this->rbtn4->TabIndex = 0;
			this->rbtn4->Text = L"0.0001";
			this->rbtn4->UseVisualStyleBackColor = true;
			this->rbtn4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn4_CheckedChanged);
			// 
			// rbtn2
			// 
			this->rbtn2->AutoSize = true;
			this->rbtn2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn2->Location = System::Drawing::Point(24, 53);
			this->rbtn2->Name = L"rbtn2";
			this->rbtn2->Size = System::Drawing::Size(54, 24);
			this->rbtn2->TabIndex = 0;
			this->rbtn2->Text = L"0.01";
			this->rbtn2->UseVisualStyleBackColor = true;
			this->rbtn2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn2_CheckedChanged);
			// 
			// rbtn5
			// 
			this->rbtn5->AutoSize = true;
			this->rbtn5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn5->Location = System::Drawing::Point(238, 23);
			this->rbtn5->Name = L"rbtn5";
			this->rbtn5->Size = System::Drawing::Size(78, 24);
			this->rbtn5->TabIndex = 0;
			this->rbtn5->Text = L"0.00001";
			this->rbtn5->UseVisualStyleBackColor = true;
			this->rbtn5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn5_CheckedChanged);
			// 
			// rbtn3
			// 
			this->rbtn3->AutoSize = true;
			this->rbtn3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn3->Location = System::Drawing::Point(129, 23);
			this->rbtn3->Name = L"rbtn3";
			this->rbtn3->Size = System::Drawing::Size(62, 24);
			this->rbtn3->TabIndex = 0;
			this->rbtn3->Text = L"0.001";
			this->rbtn3->UseVisualStyleBackColor = true;
			this->rbtn3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn3_CheckedChanged);
			// 
			// rbtn1
			// 
			this->rbtn1->AutoSize = true;
			this->rbtn1->Checked = true;
			this->rbtn1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn1->Location = System::Drawing::Point(24, 23);
			this->rbtn1->Name = L"rbtn1";
			this->rbtn1->Size = System::Drawing::Size(46, 24);
			this->rbtn1->TabIndex = 0;
			this->rbtn1->TabStop = true;
			this->rbtn1->Text = L"0.1";
			this->rbtn1->UseVisualStyleBackColor = true;
			this->rbtn1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtn1_CheckedChanged);
			// 
			// btnCalculate
			// 
			this->btnCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCalculate->Location = System::Drawing::Point(13, 279);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(332, 33);
			this->btnCalculate->TabIndex = 3;
			this->btnCalculate->Text = L"Раcчёт функции";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// lblHeading
			// 
			this->lblHeading->AutoSize = true;
			this->lblHeading->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblHeading->Location = System::Drawing::Point(69, 330);
			this->lblHeading->Name = L"lblHeading";
			this->lblHeading->Size = System::Drawing::Size(212, 26);
			this->lblHeading->TabIndex = 4;
			this->lblHeading->Text = L"Результаты расчёта:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 377);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Исходное значение =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Точность =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(13, 437);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Точное значение exp(x) =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 467);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Число слагаемых =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(13, 497);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Сумма ряда exp(x) =";
			// 
			// lblSource
			// 
			this->lblSource->AutoSize = true;
			this->lblSource->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSource->Location = System::Drawing::Point(213, 377);
			this->lblSource->Name = L"lblSource";
			this->lblSource->Size = System::Drawing::Size(0, 20);
			this->lblSource->TabIndex = 5;
			// 
			// lblEps
			// 
			this->lblEps->AutoSize = true;
			this->lblEps->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEps->Location = System::Drawing::Point(213, 407);
			this->lblEps->Name = L"lblEps";
			this->lblEps->Size = System::Drawing::Size(0, 20);
			this->lblEps->TabIndex = 5;
			// 
			// lblAccurateValue
			// 
			this->lblAccurateValue->AutoSize = true;
			this->lblAccurateValue->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAccurateValue->Location = System::Drawing::Point(213, 437);
			this->lblAccurateValue->Name = L"lblAccurateValue";
			this->lblAccurateValue->Size = System::Drawing::Size(0, 20);
			this->lblAccurateValue->TabIndex = 5;
			// 
			// lblTerms
			// 
			this->lblTerms->AutoSize = true;
			this->lblTerms->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTerms->Location = System::Drawing::Point(213, 467);
			this->lblTerms->Name = L"lblTerms";
			this->lblTerms->Size = System::Drawing::Size(0, 20);
			this->lblTerms->TabIndex = 5;
			// 
			// lblSumm
			// 
			this->lblSumm->AutoSize = true;
			this->lblSumm->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSumm->Location = System::Drawing::Point(213, 497);
			this->lblSumm->Name = L"lblSumm";
			this->lblSumm->Size = System::Drawing::Size(0, 20);
			this->lblSumm->TabIndex = 5;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->rbtnCos);
			this->groupBox3->Controls->Add(this->rbtnSin);
			this->groupBox3->Controls->Add(this->rbtnExp);
			this->groupBox3->Location = System::Drawing::Point(13, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(332, 100);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// rbtnCos
			// 
			this->rbtnCos->AutoSize = true;
			this->rbtnCos->Font = (gcnew System::Drawing::Font(L"Consolas", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnCos->Location = System::Drawing::Point(23, 66);
			this->rbtnCos->Name = L"rbtnCos";
			this->rbtnCos->Size = System::Drawing::Size(283, 17);
			this->rbtnCos->TabIndex = 2;
			this->rbtnCos->Text = L"cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...";
			this->rbtnCos->UseVisualStyleBackColor = true;
			// 
			// rbtnSin
			// 
			this->rbtnSin->AutoSize = true;
			this->rbtnSin->Font = (gcnew System::Drawing::Font(L"Consolas", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnSin->Location = System::Drawing::Point(23, 43);
			this->rbtnSin->Name = L"rbtnSin";
			this->rbtnSin->Size = System::Drawing::Size(283, 17);
			this->rbtnSin->TabIndex = 1;
			this->rbtnSin->Text = L"sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...";
			this->rbtnSin->UseVisualStyleBackColor = true;
			// 
			// rbtnExp
			// 
			this->rbtnExp->AutoSize = true;
			this->rbtnExp->Checked = true;
			this->rbtnExp->Font = (gcnew System::Drawing::Font(L"Consolas", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnExp->Location = System::Drawing::Point(23, 20);
			this->rbtnExp->Name = L"rbtnExp";
			this->rbtnExp->Size = System::Drawing::Size(283, 17);
			this->rbtnExp->TabIndex = 0;
			this->rbtnExp->TabStop = true;
			this->rbtnExp->Text = L"exp(x) = 1 + x^1/1! + x^2/2! + x^3/3! + ...";
			this->rbtnExp->UseVisualStyleBackColor = true;
			this->rbtnExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 534);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->lblSumm);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lblTerms);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblAccurateValue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblEps);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblSource);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblHeading);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double EPS;
		double X;
		int TERMS;

		String^ roundTo(double number, double eps) { // (вещ. число, точность) --возвращает форматированную строку с округлением числа до нужного кол-ва знаков
			if (number != EPS) {
				eps = eps / 10;
			}
			if (eps * 10000000 == 1) {
				return number.ToString("F7");
			}
			else if (floor(eps * 1000000) == 1) {
				return number.ToString("F6");
			}
			else if (floor(eps * 100000) == 1) {
				return number.ToString("F5");
			}
			else if (eps * 10000 == 1) {
				return number.ToString("F4");
			}
			else if (eps * 1000 == 1) {
				return number.ToString("F3");
			}
			else if (eps * 100 == 1) {
				return number.ToString("F2");
			}
			else if (eps * 10 == 1) {
				return number.ToString("F1");
			}
		}

		double factorial(int n) { // (цел. число) --возвращает вещественное число - факториал числа
			double result = 1;
			for (int i = 1; i <= n; i++) {
				result *= i;
			}
			return result;
		}

		double func(double x, double eps) { // (вещ. числоб, точность) --возвращает вещественное число - результат расчета функции
			double sum = 0; // сумма ряда 
			int iter = 0;   // номер слагаемого
			if (rbtnExp->Checked) { // расчёт экспоненты
				double term = pow(x, iter) / factorial(iter);
				while (abs(term) > eps) {
					sum += term;
					iter++;
					term = floor(term / 0.000001) * 0.000001;
					term = pow(x, iter) / factorial(iter);
				}
			}
			else if (rbtnSin->Checked) { // расчет синуса
				double term = pow(-1, iter) * pow(x, (2 * iter + 1)) / factorial(2 * iter + 1);
				while (abs(term) > eps) {
					sum += term;
					iter++;
					term = pow(-1, iter) * pow(x, (2 * iter + 1)) / factorial(2 * iter + 1);
				}
			}
			else if (rbtnCos->Checked) { // расчёт косинуса
				double term = pow(-1, iter) * pow(x, 2 * iter) / factorial(2 * iter);
				while (abs(term) > eps) {
					sum += term;
					iter++;
					term = pow(-1, iter) * pow(x, 2 * iter) / factorial(2 * iter);
				}
			}
			TERMS = iter; // число слогаемых ряда
			return floor(sum / (eps / 10)) * (eps / 10); // округление до eps +1 знак (eps/10)
		}

		String^ parseLine(Windows::Forms::TextBox^ box) { // фильтр вводимых данных
			String^ line = box->Text;
			String^ res_line = "";
			bool firstComma = 1;
			for (int i = 0; i < line->Length; i++) {
				if (line[i] == "-"[0] && i == 0)                                 res_line += "-";
				else if (Char::IsDigit(line[i]))                                 res_line += line[i];
				else if ((line[i] == ","[0] || line[i] == "."[0]) && firstComma) res_line += ",";
			}

			if (res_line == "" || res_line == "," || res_line == "-")            res_line = "1";
			else if (res_line->StartsWith(","))                                  res_line = "0" + res_line;
			box->Text = res_line;
			return res_line;
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
		X = Convert::ToDouble(parseLine(txtX));

		lblSource->Text = parseLine(txtX);
		lblAccurateValue->Text = (rbtnExp->Checked) ? roundTo(System::Math::Exp(X), EPS)
								: (rbtnSin->Checked) ? roundTo(System::Math::Sin(X), EPS)
								: (rbtnCos->Checked) ? roundTo(System::Math::Cos(X), EPS)
								: "error";

		lblEps->Text = roundTo(EPS, EPS);
		lblSumm->Text = roundTo(func(X, EPS), EPS);
		lblTerms->Text = Convert::ToString(TERMS);
	}
	private: System::Void txtX_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		lblSource->Text = "";
		lblAccurateValue->Text = "";
		lblEps->Text = "";
		lblTerms->Text = "";
		lblSumm->Text = "";
	}
	private: System::Void rbtn1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EPS = 0.1;
	}
	private: System::Void rbtn2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EPS = 0.01;
	}
	private: System::Void rbtn3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EPS = 0.001;
	}
	private: System::Void rbtn4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EPS = 0.0001;
	}
	private: System::Void rbtn5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EPS = 0.00001;
	}
	private: System::Void rbtn6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EPS = 0.000001;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
