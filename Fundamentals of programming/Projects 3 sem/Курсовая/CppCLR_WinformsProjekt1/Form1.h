#pragma once

#include <string>
#include <ctime>
#include <random>
#include <iostream>
#include <fstream>
#include "Math.h"
#include "Func_class.h"
//#include <msclr\marshal_cppstd.h>

using namespace std;

Win win;

namespace CppCLRWinformsProjekt 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	public:

	public:

		int money;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label11;
	public:
		int counter = 0;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->ForeColor = System::Drawing::Color::DarkCyan;
			this->button1->Location = System::Drawing::Point(237, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(304, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Крутить!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(120, 95);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(125, 125);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(326, 95);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(125, 125);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(520, 95);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(125, 125);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(333, 384);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(53, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(94, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"lable5";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(136, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(236, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"1 - 15 | 16 - 27 | 28 -36 | 37 - 43 | 44 - 48 | 49 - 50";
			this->label6->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::DarkCyan;
			this->button2->Location = System::Drawing::Point(12, 444);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 31);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Отладка";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Yellow;
			this->label7->Location = System::Drawing::Point(12, 33);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Количество вращений: 0";
			this->label7->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Yellow;
			this->button3->Location = System::Drawing::Point(207, 28);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Добавить 1000$";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::DarkCyan;
			this->label8->Location = System::Drawing::Point(637, 398);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Баланс:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::DarkCyan;
			this->label9->Location = System::Drawing::Point(693, 398);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 16);
			this->label9->TabIndex = 16;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::DarkCyan;
			this->label10->Location = System::Drawing::Point(663, 425);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 16);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Ставка $";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(623, 444);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 20);
			this->textBox1->TabIndex = 18;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Firebrick;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->button4->Location = System::Drawing::Point(646, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(25, 25);
			this->button4->TabIndex = 19;
			this->button4->Text = L"❌";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::DarkCyan;
			this->label11->Location = System::Drawing::Point(677, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Выйти и сохранить";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(2)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(786, 487);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Игра однорукий бандит v0,15";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text != "" && textBox1->Text != "Введите ставку")
		{
			int stavka = Convert::ToInt32(textBox1->Text);
			if (money >= stavka)
			{
				money -= stavka;
				label9->Text = Convert::ToString(money) + " $";
				//srand(time(NULL));
				random_device rd;
				mt19937 mersenne(rd());
				short n1 = mersenne() % 50 + 1; //Рандом числа первой картинки
				short n2 = mersenne() % 50 + 1; //Рандом числа второй картинки
				short n3 = mersenne() % 50 + 1; //Рандом числа третий картинки

				label3->Text = n1.ToString();
				label4->Text = n2.ToString();
				label5->Text = n3.ToString();

				if (n1 >= 1 && n1 <= 15) //Рандом первой картинки
				{
					pictureBox1->Image = System::Drawing::Bitmap::FromFile("фрукт.png");
					n1 = 1;
				}
				else if (n1 >= 16 && n1 <= 27)
				{
					pictureBox1->Image = System::Drawing::Bitmap::FromFile("фрукт2.png");
					n1 = 2;
				}
				else if (n1 >= 28 && n1 <= 36)
				{
					pictureBox1->Image = System::Drawing::Bitmap::FromFile("фрукт3.png");
					n1 = 3;
				}
				else if (n1 >= 37 && n1 <= 43)
				{
					pictureBox1->Image = System::Drawing::Bitmap::FromFile("фрукт4.png");
					n1 = 4;
				}
				else if (n1 >= 44 && n1 <= 48)
				{
					pictureBox1->Image = System::Drawing::Bitmap::FromFile("фрукт5.png");
					n1 = 5;
				}
				else if (n1 >= 49 && n1 <= 50)
				{
					pictureBox1->Image = System::Drawing::Bitmap::FromFile("777.png");
					n1 = 7;
				}

				if (n2 >= 1 && n2 <= 15) //Рандом второй картинки
				{
					pictureBox2->Image = System::Drawing::Bitmap::FromFile("фрукт.png");
					n2 = 1;
				}
				else if (n2 >= 16 && n2 <= 27)
				{
					pictureBox2->Image = System::Drawing::Bitmap::FromFile("фрукт2.png");
					n2 = 2;
				}
				else if (n2 >= 28 && n2 <= 36)
				{
					pictureBox2->Image = System::Drawing::Bitmap::FromFile("фрукт3.png");
					n2 = 3;
				}
				else if (n2 >= 37 && n2 <= 43)
				{
					pictureBox2->Image = System::Drawing::Bitmap::FromFile("фрукт4.png");
					n2 = 4;
				}
				else if (n2 >= 44 && n2 <= 48)
				{
					pictureBox2->Image = System::Drawing::Bitmap::FromFile("фрукт5.png");
					n2 = 5;
				}
				else if (n2 >= 49 && n2 <= 50)
				{
					pictureBox2->Image = System::Drawing::Bitmap::FromFile("777.png");
					n2 = 7;
				}

				if (n3 >= 1 && n3 <= 15) //Рандом третий картинки
				{
					pictureBox3->Image = System::Drawing::Bitmap::FromFile("фрукт.png");
					n3 = 1;
				}
				else if (n3 >= 16 && n3 <= 27)
				{
					pictureBox3->Image = System::Drawing::Bitmap::FromFile("фрукт2.png");
					n3 = 2;
				}
				else if (n3 >= 28 && n3 <= 36)
				{
					pictureBox3->Image = System::Drawing::Bitmap::FromFile("фрукт3.png");
					n3 = 3;
				}
				else if (n3 >= 37 && n3 <= 43)
				{
					pictureBox3->Image = System::Drawing::Bitmap::FromFile("фрукт4.png");
					n3 = 4;
				}
				else if (n3 >= 44 && n3 <= 48)
				{
					pictureBox3->Image = System::Drawing::Bitmap::FromFile("фрукт5.png");
					n3 = 5;
				}
				else if (n3 >= 49 && n3 <= 50)
				{
					pictureBox3->Image = System::Drawing::Bitmap::FromFile("777.png");
					n3 = 7;
				}

				counter++;
				label7->Text = "Количество вращений: " + counter.ToString();

				if (n1 == n2 && n2 == n3)
				{
					win.set_money(Convert::ToInt32(textBox1->Text));
					label2->Text = "Вы выиграли " + (win.calcule_win(n1)).ToString() + " $";
					money += win.calcule_win(n1);
					label9->Text = Convert::ToString(money) + " $";
				}
				else
				{
					label2->Text = " ";
				}
			}
			else
			{
				textBox1->Text = "Недостаточный баланс";
			}
		}
		else if (textBox1->Text == "")
		{
			textBox1->Text = "Введите ставку";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (label3->Visible == false)
		{
			label3->Visible = true;
			label4->Visible = true;
			label5->Visible = true;
			label6->Visible = true;
			label7->Visible = true;
			button3->Visible = true;
		}
		else
		{
			label3->Visible = false;
			label4->Visible = false;
			label5->Visible = false;
			label6->Visible = false;
			label7->Visible = false;
			button3->Visible = false;
		}
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			int* count_of_num = new int;
			ifstream fi("t.txt");
			if (!fi)
			{
				throw exception();
			}
			fi >> count_of_num[0];
			money = count_of_num[0];
			fi.close();
		}
		catch (const exception&)
		{
			textBox1->Text = "Файл сохранения не найден";
			money = 404;
		}
		label9->Text = Convert::ToString(money) + " $";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		money += 1000;
		label9->Text = Convert::ToString(money) + " $";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ofstream fo;
		fo.open("t.txt");
		fo << money;
		fo.close();
		Application::Exit();
	}
	};
}
