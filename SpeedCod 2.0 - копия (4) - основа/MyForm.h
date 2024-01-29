#pragma once
#include <iostream>
#include <cstdio>
#include <string>
#include <Windows.h>
#include <fstream>
#include <vector>
#include <iomanip>
int z = 0, a =0, X1=0, Y1=0, e5=0, ch=0, n=0, posu=0, all=0, wrong=0, back=0, Light_ =0, svoi=0, e6=0;
std::vector <int> pos, post;
double Time = 0;
std::string str_Time;
namespace SpeedCod {

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
	public: System::Windows::Forms::Label^ label1;
	protected:


	public:
		
		String^ s2 = "";
		  String^ s1 = "";
		  String^ s3 = "";
		  String^ s4 = "";
		  Char^ c;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	public: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ убратьПробелыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ полностьюБезПробеловToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ пробелДоСкобокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ пробелПослеСкобокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ пробелДоИПослеСкобокToolStripMenuItem;
	private: System::Windows::Forms::Button^ Light;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ вводСвоейПрограммыToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::ToolStripMenuItem^ поУмолчаниюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ начатьЗановоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ стильToolStripMenuItem;
	
	public:
		void probel(int menu_num) {
			for (int i = 0; i < s3->Length - 1; i++) {
				if (s3[i] == ' ') {
					if (i >= 3) {
						if (s3[i - 1] == 't' && s3[i - 3] == 'i') {
							continue;
						}
					}
					if (i >= 4) {
						if (s3[i - 1] == 'd' && s3[i - 4] == 'v') {
							continue;
						}
					}
					if (i >= 6) {
						if (s3[i - 1] == 'g' && s3[i - 3] == 's') {
							continue;
						}
					}
					if (s3[i - 1] == 'n' && s3[i - 6] == 'r') {
						continue;
					}
					if (menu_num == 1 || menu_num==3) {
						if (i != s3->Length - 2) {
							if (s3[i + 1] == '(') {
								continue;
							}
						}
					}
					if (menu_num == 2 || menu_num==3) {
						if (i != 0) {
							if (s3[i - 1] == ')') {
								continue;
							}
						}
					}
					s3 = s3->Remove(i, 1);
				}
			}
			this->textBox2->Text = s3;
		}
		void menu() {
		all = 0;
		back = 0;
		n = 0;
		wrong = 0;
		post.clear();
		pos.clear();
		post.push_back(0);
		for (int i = 0; i < s3->Length; i++) {
			textBox2->Text = this->textBox2->Text->Replace("\t", "    ");
		}
		for (int i = 0; i < this->textBox2->Text->Length; i++)
		{
			if (this->textBox2->Text[i] == '\n') {
				n++;
			}
		}
		if (e6 == 0) {
			for (int i = 0; i < n; i++)
			{
				this->textBox2->Text += "\r\n";
			}
		}
		n = 0;
		for (int i = 0; i < this->textBox2->Text->Length; i++)
		{
			if (this->textBox2->Text[i] == '\n') {
				n++;
				if (n >= 21) {
					pos.push_back(i);
				}

			}
			if (i > 0) {
				if (this->textBox2->Text[i - 1] == '\n') {
					post.push_back(i);


				}
			}
		}

		pos.push_back(this->textBox2->Text->Length - 1);
		n++;
		for (int i = 0; i < s3->Length; i++) {
			if (s3[i] != '\r') {
				all++;
			}
		}
		
		textBox1->Focus();
		
	}

	public:
	private:



	private:
	private: System::ComponentModel::IContainer^ components;
	public:
	public:
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->стильToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->убратьПробелыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->полностьюБезПробеловToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->пробелДоСкобокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->пробелПослеСкобокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->пробелДоИПослеСкобокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поУмолчаниюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вводСвоейПрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->начатьЗановоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Light = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Name = L"textBox1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->ForeColor = System::Drawing::Color::White;
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Name = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// textBox2
			// 
			this->textBox2->AcceptsReturn = true;
			this->textBox2->AcceptsTab = true;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->стильToolStripMenuItem,
					this->вводСвоейПрограммыToolStripMenuItem, this->начатьЗановоToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// стильToolStripMenuItem
			// 
			this->стильToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->убратьПробелыToolStripMenuItem,
					this->поУмолчаниюToolStripMenuItem
			});
			this->стильToolStripMenuItem->Name = L"стильToolStripMenuItem";
			resources->ApplyResources(this->стильToolStripMenuItem, L"стильToolStripMenuItem");
			this->стильToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::стильToolStripMenuItem_Click);
			// 
			// убратьПробелыToolStripMenuItem
			// 
			this->убратьПробелыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->полностьюБезПробеловToolStripMenuItem,
					this->пробелДоСкобокToolStripMenuItem, this->пробелПослеСкобокToolStripMenuItem, this->пробелДоИПослеСкобокToolStripMenuItem
			});
			this->убратьПробелыToolStripMenuItem->Name = L"убратьПробелыToolStripMenuItem";
			resources->ApplyResources(this->убратьПробелыToolStripMenuItem, L"убратьПробелыToolStripMenuItem");
			// 
			// полностьюБезПробеловToolStripMenuItem
			// 
			this->полностьюБезПробеловToolStripMenuItem->Name = L"полностьюБезПробеловToolStripMenuItem";
			resources->ApplyResources(this->полностьюБезПробеловToolStripMenuItem, L"полностьюБезПробеловToolStripMenuItem");
			this->полностьюБезПробеловToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::полностьюБезПробеловToolStripMenuItem_Click);
			// 
			// пробелДоСкобокToolStripMenuItem
			// 
			this->пробелДоСкобокToolStripMenuItem->Name = L"пробелДоСкобокToolStripMenuItem";
			resources->ApplyResources(this->пробелДоСкобокToolStripMenuItem, L"пробелДоСкобокToolStripMenuItem");
			this->пробелДоСкобокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::пробелДоСкобокToolStripMenuItem_Click);
			// 
			// пробелПослеСкобокToolStripMenuItem
			// 
			this->пробелПослеСкобокToolStripMenuItem->Name = L"пробелПослеСкобокToolStripMenuItem";
			resources->ApplyResources(this->пробелПослеСкобокToolStripMenuItem, L"пробелПослеСкобокToolStripMenuItem");
			this->пробелПослеСкобокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::пробелПослеСкобокToolStripMenuItem_Click);
			// 
			// пробелДоИПослеСкобокToolStripMenuItem
			// 
			this->пробелДоИПослеСкобокToolStripMenuItem->Name = L"пробелДоИПослеСкобокToolStripMenuItem";
			resources->ApplyResources(this->пробелДоИПослеСкобокToolStripMenuItem, L"пробелДоИПослеСкобокToolStripMenuItem");
			this->пробелДоИПослеСкобокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::пробелДоИПослеСкобокToolStripMenuItem_Click);
			// 
			// поУмолчаниюToolStripMenuItem
			// 
			this->поУмолчаниюToolStripMenuItem->Name = L"поУмолчаниюToolStripMenuItem";
			resources->ApplyResources(this->поУмолчаниюToolStripMenuItem, L"поУмолчаниюToolStripMenuItem");
			this->поУмолчаниюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::поУмолчаниюToolStripMenuItem_Click);
			// 
			// вводСвоейПрограммыToolStripMenuItem
			// 
			this->вводСвоейПрограммыToolStripMenuItem->Name = L"вводСвоейПрограммыToolStripMenuItem";
			resources->ApplyResources(this->вводСвоейПрограммыToolStripMenuItem, L"вводСвоейПрограммыToolStripMenuItem");
			this->вводСвоейПрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вводСвоейПрограммыToolStripMenuItem_Click);
			// 
			// начатьЗановоToolStripMenuItem
			// 
			this->начатьЗановоToolStripMenuItem->Name = L"начатьЗановоToolStripMenuItem";
			resources->ApplyResources(this->начатьЗановоToolStripMenuItem, L"начатьЗановоToolStripMenuItem");
			this->начатьЗановоToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::начатьЗановоToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			resources->ApplyResources(this->справкаToolStripMenuItem, L"справкаToolStripMenuItem");
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// Light
			// 
			resources->ApplyResources(this->Light, L"Light");
			this->Light->BackColor = System::Drawing::Color::White;
			this->Light->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Light->ImageList = this->imageList1;
			this->Light->Name = L"Light";
			this->Light->UseVisualStyleBackColor = false;
			this->Light->Click += gcnew System::EventHandler(this, &MyForm::Light_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"uQEf2a4pzts.jpg");
			this->imageList1->Images->SetKeyName(1, L"k49hIgD8WIQ.jpg");
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Light);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
		if (s3->Length == textBox1->Text->Length) {
			timer1->Enabled = false;
			this->textBox3->Text = "Всего символов: " + all + "\r\n";
			textBox3->Text += "Всего Backspace нажато: " + back + "\r\n";
			for (int i = 0; i < s3->Length; i++) {
				if (s3[i] != textBox1->Text[i]) {
					wrong++;
				}
			}
			textBox3->Text += "Всего правильных и неправильных: " + (all - wrong) + " / " + wrong + "\r\n";
			textBox3->Text += "Среднее количество слов в минуту: " + (round(double((((all - wrong )/5.0)))/(double(ch+(Time*(1.0/60.0)))))*10)/10 + "\r\n";
			textBox3->Text += "Точность: " + double(((round((double(all-wrong)/double(all))*1000)/1000.0)*100.0)) +" %" + "\r\n";
			textBox3->Text += "Всего времени понадобилось: " + ch + " минут и " + round(Time*100)/100 + " секунд" + "\r\n";
			textBox3->Visible = true;
			textBox3->Focus();
		}
		else if (e5 == 1) {
			e5 = 0;
		}
		else {
			this->s1 = Convert::ToString(this->textBox1->Text);
			if (a >=s1->Length ) {
				back++;
				if (s1->Length >0) {
	
					if (s1[s1->Length - 1] == '\r') {
						z = s1->Length - 2;
						s1 = s1->Remove(s1->Length - 1, 1);
						e5 = 1;
						label2->Location = Drawing::Point(X1, Y1);
						this->textBox1->Text = this->s1;
						this->textBox1->SelectionStart = this->textBox1->Text->Length;
						if (n > 21) {
							textBox2->SelectionStart = post[posu-1];
							textBox1->Focus();
							textBox2->ScrollToCaret();
							textBox1->Focus();
							posu--;
						}
					}
					else {
						z -= 2;
						if (z < 0) {
							z = -1;
						}
						if (Light_ == 0) {
							this->label1->BackColor = Color::White;
							this->textBox2->BackColor = Color::White;
						}
						else {
							this->label1->BackColor = Color::Black;
							this->textBox2->BackColor = Color::Black;
						}
						if (z != -1) {
							if (s3[z] == '\r') {
								if (n > 21) {
									textBox2->SelectionStart = post[posu-1];
									textBox1->Focus();
									textBox2->ScrollToCaret();
									textBox1->Focus();
									posu--;
								}
								label2->Location = Drawing::Point(X1, Y1);
								z--;
							}
							else {
								switch (s3[z+1]) {
								case '%':
									label2->Location = Drawing::Point(label2->Location.X - 15, label2->Location.Y);
									break;
								case '\t':
									label2->Location = Drawing::Point(label2->Location.X - 19, label2->Location.Y);
									break;
								case 'a':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'A':
									label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
									break;
								case 'b':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'B':
									label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
									break;
								case 'c':
									label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
									break;
								case 'C':
									label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
									break;
								case 'd':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'D':
									label2->Location = Drawing::Point(label2->Location.X - 13.2, label2->Location.Y);
									break;
								case 'e':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'E':
									label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
									break;
								case 'f':
									label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
									break;
								case 'F':
									label2->Location = Drawing::Point(label2->Location.X - 11, label2->Location.Y);
									break;
								case 'g':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'G':
									label2->Location = Drawing::Point(label2->Location.X - 14.2, label2->Location.Y);
									break;
								case 'h':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'H':
									label2->Location = Drawing::Point(label2->Location.X - 13.5, label2->Location.Y);
									break;
								case 'i':
									label2->Location = Drawing::Point(label2->Location.X - 4, label2->Location.Y);
									break;
								case 'I':
									label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
									break;
								case 'j':
									label2->Location = Drawing::Point(label2->Location.X - 4.1, label2->Location.Y);
									break;
								case 'J':
									label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
									break;
								case 'k':
									label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
									break;
								case 'K':
									label2->Location = Drawing::Point(label2->Location.X - 11.5, label2->Location.Y);
									break;
								case 'l':
									label2->Location = Drawing::Point(label2->Location.X - 3.5, label2->Location.Y);
									break;
								case 'L':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'm':
									label2->Location = Drawing::Point(label2->Location.X - 14, label2->Location.Y);
									break;
								case 'M':
									label2->Location = Drawing::Point(label2->Location.X - 14, label2->Location.Y);
									break;
								case 'n':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'N':
									label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
									break;
								case 'o':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'O':
									label2->Location = Drawing::Point(label2->Location.X - 13, label2->Location.Y);
									break;
								case 'p':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'P':
									label2->Location = Drawing::Point(label2->Location.X - 11, label2->Location.Y);
									break;
								case 'q':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'Q':
									label2->Location = Drawing::Point(label2->Location.X - 13, label2->Location.Y);
									break;
								case 'r':
									label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
									break;
								case 'R':
									label2->Location = Drawing::Point(label2->Location.X - 13, label2->Location.Y);
									break;
								case 's':
									label2->Location = Drawing::Point(label2->Location.X - 7, label2->Location.Y);
									break;
								case 'S':
									label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
									break;
								case 't':
									label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
									break;
								case 'T':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'u':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case 'U':
									label2->Location = Drawing::Point(label2->Location.X - 13, label2->Location.Y);
									break;
								case 'v':
									label2->Location = Drawing::Point(label2->Location.X - 8, label2->Location.Y);
									break;
								case 'V':
									label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
									break;
								case 'w':
									label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
									break;
								case 'W':
									label2->Location = Drawing::Point(label2->Location.X - 16, label2->Location.Y);
									break;
								case 'x':
									label2->Location = Drawing::Point(label2->Location.X - 8, label2->Location.Y);
									break;
								case 'X':
									label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
									break;
								case 'y':
									label2->Location = Drawing::Point(label2->Location.X - 8, label2->Location.Y);
									break;
								case 'Y':
									label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
									break;
								case 'z':
									label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
									break;
								case 'Z':
									label2->Location = Drawing::Point(label2->Location.X - 11, label2->Location.Y);
									break;
								case '>':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case '<':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case '!':
									label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
									break;
								case '*':
									label2->Location = Drawing::Point(label2->Location.X - 6.5, label2->Location.Y);
									break;
								case '+':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case '/':
									label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
									break;
								case '=':
									label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
									break;
								case '-':
									label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
									break;
								case ';':
									label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
									break;
								case ',':
									label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
									break;
								case ')':
									label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
									break;
								case '(':
									label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
									break;
								case '{':
									label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
									break;
								case '}':
									label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
									break;
								case '[':
									label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
									break;
								case ']':
									label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
									break;
								case ' ':
									label2->Location = Drawing::Point(label2->Location.X - 3.5, label2->Location.Y);
									break;
								case '.':
									label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
									break;
								case ':':
									label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
									break;
								default:
									label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
									break;

								}
							}
						}
						else {
							label2->Location = Drawing::Point(16, 45);
						}
					}
				}
				else {
					z -= 2;
					if (z < 0) {
						z = -1;
					}
					if (Light_ == 0) {
						this->label1->BackColor = Color::White;
						this->textBox2->BackColor = Color::White;
					}
					else {
						this->label1->BackColor = Color::Black;
						this->textBox2->BackColor = Color::Black;
					}
					if (z != -1) {
						if (s3[z] == '\r') {
							label2->Location = Drawing::Point(X1, Y1);
							z--;
						}
						else {
							switch (s3[z+1]) {
							case '%':
								label2->Location = Drawing::Point(label2->Location.X - 15, label2->Location.Y);
								break;
							case '\t':
								label2->Location = Drawing::Point(label2->Location.X - 19, label2->Location.Y);
								break;
							case 'a':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'A':
								label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
								break;
							case 'b':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'B':
								label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
								break;
							case 'c':
								label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
								break;
							case 'C':
								label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
								break;
							case 'd':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'D':
								label2->Location = Drawing::Point(label2->Location.X - 13.2, label2->Location.Y);
								break;
							case 'e':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'E':
								label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
								break;
							case 'f':
								label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
								break;
							case 'F':
								label2->Location = Drawing::Point(label2->Location.X - 11, label2->Location.Y);
								break;
							case 'g':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'G':
								label2->Location = Drawing::Point(label2->Location.X - 14.2, label2->Location.Y);
								break;
							case 'h':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'H':
								label2->Location = Drawing::Point(label2->Location.X - 13.5, label2->Location.Y);
								break;
							case 'i':
								label2->Location = Drawing::Point(label2->Location.X - 4, label2->Location.Y);
								break;
							case 'I':
								label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
								break;
							case 'j':
								label2->Location = Drawing::Point(label2->Location.X - 4.1, label2->Location.Y);
								break;
							case 'J':
								label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
								break;
							case 'k':
								label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
								break;
							case 'K':
								label2->Location = Drawing::Point(label2->Location.X - 11.5, label2->Location.Y);
								break;
							case 'l':
								label2->Location = Drawing::Point(label2->Location.X - 3.5, label2->Location.Y);
								break;
							case 'L':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'm':
								label2->Location = Drawing::Point(label2->Location.X - 14, label2->Location.Y);
								break;
							case 'M':
								label2->Location = Drawing::Point(label2->Location.X - 14, label2->Location.Y);
								break;
							case 'n':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'N':
								label2->Location = Drawing::Point(label2->Location.X - 12.5, label2->Location.Y);
								break;
							case 'o':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'O':
								label2->Location = Drawing::Point(label2->Location.X - 13, label2->Location.Y);
								break;
							case 'p':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'P':
								label2->Location = Drawing::Point(label2->Location.X - 11, label2->Location.Y);
								break;
							case 'q':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'Q':
								label2->Location = Drawing::Point(label2->Location.X - 13, label2->Location.Y);
								break;
							case 'r':
								label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
								break;
							case 'R':
								label2->Location = Drawing::Point(label2->Location.X - 13, label2->Location.Y);
								break;
							case 's':
								label2->Location = Drawing::Point(label2->Location.X - 7, label2->Location.Y);
								break;
							case 'S':
								label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
								break;
							case 't':
								label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
								break;
							case 'T':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'u':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case 'U':
								label2->Location = Drawing::Point(label2->Location.X - 13, label2->Location.Y);
								break;
							case 'v':
								label2->Location = Drawing::Point(label2->Location.X - 8, label2->Location.Y);
								break;
							case 'V':
								label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
								break;
							case 'w':
								label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
								break;
							case 'W':
								label2->Location = Drawing::Point(label2->Location.X - 16, label2->Location.Y);
								break;
							case 'x':
								label2->Location = Drawing::Point(label2->Location.X - 8, label2->Location.Y);
								break;
							case 'X':
								label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
								break;
							case 'y':
								label2->Location = Drawing::Point(label2->Location.X - 8, label2->Location.Y);
								break;
							case 'Y':
								label2->Location = Drawing::Point(label2->Location.X - 12, label2->Location.Y);
								break;
							case 'z':
								label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
								break;
							case 'Z':
								label2->Location = Drawing::Point(label2->Location.X - 11, label2->Location.Y);
								break;
							case '>':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case '<':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case '!':
								label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
								break;
							case '*':
								label2->Location = Drawing::Point(label2->Location.X - 6.5, label2->Location.Y);
								break;
							case '+':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case '/':
								label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
								break;
							case '=':
								label2->Location = Drawing::Point(label2->Location.X - 10, label2->Location.Y);
								break;
							case '-':
								label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
								break;
							case ';':
								label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
								break;
							case ',':
								label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
								break;
							case ')':
								label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
								break;
							case '(':
								label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
								break;
							case '{':
								label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
								break;
							case '}':
								label2->Location = Drawing::Point(label2->Location.X - 6, label2->Location.Y);
								break;
							case '[':
								label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
								break;
							case ']':
								label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
								break;
							case ' ':
								label2->Location = Drawing::Point(label2->Location.X - 3.5, label2->Location.Y);
								break;
							case '.':
								label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
								break;
							case ':':
								label2->Location = Drawing::Point(label2->Location.X - 5, label2->Location.Y);
								break;
							default:
								label2->Location = Drawing::Point(label2->Location.X - 9, label2->Location.Y);
								break;
							}
						}
					}
					else {
						label2->Location = Drawing::Point(16, 45);
					}
					
				}
			}
			else {
					if (s1[z] == s3[z]) {
					
						if (s3[z + 1] == '\n') {
							X1 = label2->Location.X;
							Y1 = label2->Location.Y;
							if (n <= 21) {
								label2->Location = Drawing::Point(16, label2->Location.Y + 20);
								
							}
							else {
								if (posu+1 > pos.size()-1) {
									label2->Location = Drawing::Point(16, label2->Location.Y + 20);
								}
								else {
									label2->Location = Drawing::Point(16, label2->Location.Y);
									textBox2->SelectionStart = pos[posu+1];
									textBox1->Focus();
									textBox2->ScrollToCaret();
									textBox1->Focus();
									if (posu+1 <= pos.size()-1) {
										posu++;
									}
								}
							}
							z++;
						}
						if (Light_ ==0) {
							this->label1->BackColor = Color::PaleTurquoise;
							this->textBox2->BackColor = Color::PaleTurquoise;
						}
						else {
							this->label1->BackColor = Color::FromArgb(0, 0, 64);
							this->textBox2->BackColor = Color::FromArgb(0, 0, 64);
						}
					}
					else {
						if (s3[z + 1] == '\n') {
							X1 = label2->Location.X;
							Y1 = label2->Location.Y;
							if (n <= 21) {
								label2->Location = Drawing::Point(16, label2->Location.Y + 20);
							}
							else if (posu + 1> pos.size()-1) {
								label2->Location = Drawing::Point(16, label2->Location.Y + 20);
							}
							else {
								label2->Location = Drawing::Point(16, label2->Location.Y);
								textBox2->SelectionStart = pos[posu+1];
								textBox1->Focus();
								textBox2->ScrollToCaret();
								textBox1->Focus();
								if (posu +1  <= pos.size()-1) {
									posu++;
								}
							}
							
							s1=s1->Insert(s1->Length-1,"\r");
							z++;
							e5 = 1;
							this->textBox1->Text = this->s1;
							this->textBox1->SelectionStart = this->textBox1->Text->Length;

						}
						else if (s1->Length==a+2) {
							if (s1[z + 1] == '\n' && s1[z] == '\r') {
								s1=s1->Remove(s1->Length - 2, 1);
								e5 = 1;
								this->textBox1->Text = this->s1;
								this->textBox1->SelectionStart = this->textBox1->Text->Length;
							}
						}
						if (Light_ == 0) {
							this->label1->BackColor = Color::IndianRed;
							this->textBox2->BackColor = Color::IndianRed;
						} 
						else {
							this->label1->BackColor = Color::FromArgb(150, 0, 0);
							this->textBox2->BackColor = Color::FromArgb(150, 0, 0);
						}
					}
					if (s3[z] != '\n' && s3[z + 1] != '\n') {

						switch (s3[z]) {
						case '%':
							label2->Location = Drawing::Point(label2->Location.X + 15, label2->Location.Y);
							break;
						case '\t':
							label2->Location = Drawing::Point(label2->Location.X + 19, label2->Location.Y);
							break;
						case 'a':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'A':
							label2->Location = Drawing::Point(label2->Location.X + 12.5, label2->Location.Y);
							break;
						case 'b':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'B':
							label2->Location = Drawing::Point(label2->Location.X + 12.5, label2->Location.Y);
							break;
						case 'c':
							label2->Location = Drawing::Point(label2->Location.X + 9, label2->Location.Y);
							break;
						case 'C':
							label2->Location = Drawing::Point(label2->Location.X + 12.5, label2->Location.Y);
							break;
						case 'd':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'D':
							label2->Location = Drawing::Point(label2->Location.X + 13.2, label2->Location.Y);
							break;
						case 'e':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'E':
							label2->Location = Drawing::Point(label2->Location.X + 12.5, label2->Location.Y);
							break;
						case 'f':
							label2->Location = Drawing::Point(label2->Location.X + 6, label2->Location.Y);
							break;
						case 'F':
							label2->Location = Drawing::Point(label2->Location.X + 11, label2->Location.Y);
							break;
						case 'g':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'G':
							label2->Location = Drawing::Point(label2->Location.X + 14.2, label2->Location.Y);
							break;
						case 'h':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'H':
							label2->Location = Drawing::Point(label2->Location.X + 13.5, label2->Location.Y);
							break;
						case 'i':
							label2->Location = Drawing::Point(label2->Location.X + 4, label2->Location.Y);
							break;
						case 'I':
							label2->Location = Drawing::Point(label2->Location.X + 6, label2->Location.Y);
							break;
						case 'j':
							label2->Location = Drawing::Point(label2->Location.X + 4.1, label2->Location.Y);
							break;
						case 'J':
							label2->Location = Drawing::Point(label2->Location.X + 9, label2->Location.Y);
							break;
						case 'k':
							label2->Location = Drawing::Point(label2->Location.X + 9, label2->Location.Y);
							break;
						case 'K':
							label2->Location = Drawing::Point(label2->Location.X + 11.5, label2->Location.Y);
							break;
						case 'l':
							label2->Location = Drawing::Point(label2->Location.X + 3.5, label2->Location.Y);
							break;
						case 'L':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'm':
							label2->Location = Drawing::Point(label2->Location.X + 14, label2->Location.Y);
							break;
						case 'M':
							label2->Location = Drawing::Point(label2->Location.X + 14, label2->Location.Y);
							break;
						case 'n':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'N':
							label2->Location = Drawing::Point(label2->Location.X + 12.5, label2->Location.Y);
							break;
						case 'o':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'O':
							label2->Location = Drawing::Point(label2->Location.X + 13, label2->Location.Y);
							break;
						case 'p':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'P':
							label2->Location = Drawing::Point(label2->Location.X + 11, label2->Location.Y);
							break;
						case 'q':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'Q':
							label2->Location = Drawing::Point(label2->Location.X + 13, label2->Location.Y);
							break;
						case 'r':
							label2->Location = Drawing::Point(label2->Location.X + 6, label2->Location.Y);
							break;
						case 'R':
							label2->Location = Drawing::Point(label2->Location.X + 13, label2->Location.Y);
							break;
						case 's':
							label2->Location = Drawing::Point(label2->Location.X + 7, label2->Location.Y);
							break;
						case 'S':
							label2->Location = Drawing::Point(label2->Location.X + 12, label2->Location.Y);
							break;
						case 't':
							label2->Location = Drawing::Point(label2->Location.X + 6, label2->Location.Y);
							break;
						case 'T':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'u':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case 'U':
							label2->Location = Drawing::Point(label2->Location.X + 13, label2->Location.Y);
							break;
						case 'v':
							label2->Location = Drawing::Point(label2->Location.X + 8, label2->Location.Y);
							break;
						case 'V':
							label2->Location = Drawing::Point(label2->Location.X + 12, label2->Location.Y);
							break;
						case 'w':
							label2->Location = Drawing::Point(label2->Location.X + 12, label2->Location.Y);
							break;
						case 'W':
							label2->Location = Drawing::Point(label2->Location.X + 16, label2->Location.Y);
							break;
						case 'x':
							label2->Location = Drawing::Point(label2->Location.X + 8, label2->Location.Y);
							break;
						case 'X':
							label2->Location = Drawing::Point(label2->Location.X + 12, label2->Location.Y);
							break;
						case 'y':
							label2->Location = Drawing::Point(label2->Location.X + 8, label2->Location.Y);
							break;
						case 'Y':
							label2->Location = Drawing::Point(label2->Location.X + 12, label2->Location.Y);
							break;
						case 'z':
							label2->Location = Drawing::Point(label2->Location.X + 9, label2->Location.Y);
							break;
						case 'Z':
							label2->Location = Drawing::Point(label2->Location.X + 11, label2->Location.Y);
							break;
						case '>':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case '<':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case '!':
							label2->Location = Drawing::Point(label2->Location.X + 5, label2->Location.Y);
							break;
						case '*':
							label2->Location = Drawing::Point(label2->Location.X + 6.5, label2->Location.Y);
							break;
						case '+':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case '/':
							label2->Location = Drawing::Point(label2->Location.X + 5, label2->Location.Y);
							break;
						case '=':
							label2->Location = Drawing::Point(label2->Location.X + 10, label2->Location.Y);
							break;
						case '-':
							label2->Location = Drawing::Point(label2->Location.X + 6, label2->Location.Y);
							break;
						case ';':
							label2->Location = Drawing::Point(label2->Location.X + 5, label2->Location.Y);
							break;
						case ',':
							label2->Location = Drawing::Point(label2->Location.X + 5, label2->Location.Y);
							break;
						case ')':
							label2->Location = Drawing::Point(label2->Location.X + 6, label2->Location.Y);
							break;
						case '(':
							label2->Location = Drawing::Point(label2->Location.X + 6, label2->Location.Y);
							break;
						case '{':
							label2->Location = Drawing::Point(label2->Location.X + 6, label2->Location.Y);
							break;
						case '}':
							label2->Location = Drawing::Point(label2->Location.X + 6, label2->Location.Y);
							break;
						case '[':
							label2->Location = Drawing::Point(label2->Location.X + 5, label2->Location.Y);
							break;
						case ']':
							label2->Location = Drawing::Point(label2->Location.X + 5, label2->Location.Y);
							break;
						case ' ':
							label2->Location = Drawing::Point(label2->Location.X + 5, label2->Location.Y);
							break;
						case '.':
							label2->Location = Drawing::Point(label2->Location.X + 5, label2->Location.Y);
							break;
						case ':':
							label2->Location = Drawing::Point(label2->Location.X + 5, label2->Location.Y);
							break;
						default:
							label2->Location = Drawing::Point(label2->Location.X + 9, label2->Location.Y);
							break;
						}

					}
				
			}

			a = s1->Length;
			z++;
			
		}

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Time += 0.0011 * timer1->Interval;
		
		if (Time >= 60) {
			Time = 0;
			ch++;
		}
		label3->Text = Convert::ToString(ch)+":"+String::Format("{0:F1}", Time);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->s3 = Convert::ToString(this->textBox2->Text);
		menu();
		s4 = Convert::ToString(this->textBox2->Text);
	}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	  
private: System::Void стильToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void полностьюБезПробеловToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	probel(0);
	menu();
}
private: System::Void пробелПослеСкобокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	probel(2);
	menu();
}
private: System::Void пробелДоСкобокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	probel(1);
	menu();
}
private: System::Void пробелДоИПослеСкобокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	probel(3);
	menu();
}
private: System::Void Light_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Light_ == 0) {
		this->BackColor = Color::FromArgb(0, 64, 64);
		this->textBox2->BackColor = Color::Black;
		this->textBox2->ForeColor = Color::White;
		this->menuStrip1->BackColor = Color::Purple;
		this->label2->BackColor = Color::White;
		this->textBox1->BackColor = Color::Black;
		this->textBox1->ForeColor = Color::White;
		this->textBox2->ForeColor = Color::White;
		this->label3->BackColor = Color::FromArgb(204, 204, 0);
		this->label1->BackColor = Color::Black;
		this->button2->BackColor = Color::FromArgb(204, 102, 5);
		this->Light->ImageIndex = 1;
		this->menuStrip1->ForeColor = Color::White;
		pictureBox2->Visible = false;
		pictureBox1->Visible = true;
		Light_ = 1;
		textBox1->Focus();
	}
	else {
		this->BackColor = Color::Silver;
		this->textBox2->BackColor = Color::White;
		this->button2->BackColor = Color::FromArgb(255, 224, 192);
		this->menuStrip1->BackColor = Color::FromArgb(192, 192, 255);
		this->textBox2->ForeColor = Color::Black;
		this->label2->BackColor = Color::Black;
		this->textBox1->ForeColor = Color::Black;
		this->textBox1->BackColor = Color::White;
		this->textBox2->ForeColor = Color::Black;
		this->label3->BackColor = Color::FromArgb(255, 255, 192);
		this->label1->BackColor = Color::White;
		this->Light->ImageIndex = 0;
		Light_ = 0;
		pictureBox2->Visible = true;
		pictureBox1->Visible = false;
		textBox1->Focus();
	}
	
}
private: System::Void вводСвоейПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Visible = false;
	this->textBox2->Text = "";
	this->textBox1->Text = "";
	svoi = 1;
	this->textBox2->ReadOnly = false;
	this->textBox1->ReadOnly = true;
	textBox2->Focus();
	timer1->Enabled = false;
	Time = 0;
	posu = 0;
	label2->Location = Drawing::Point(16, 45);
	ch = 0;
	z = 0;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (svoi == 1) {
		button1->Visible = true;
		svoi = 0;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	s4 = Convert::ToString(this->textBox2->Text);
	this->s3 = Convert::ToString(this->textBox2->Text);
	menu();
	this->textBox2->ReadOnly = true;
	this->textBox1->ReadOnly = false;
	textBox1->Focus();
	button1->Visible = false;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	textBox1->Focus();
}
private: System::Void поУмолчаниюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Text = s4;
	s3 = s4;
	e6 = 1;
	
	menu();
	e6 = 0;
}
private: System::Void начатьЗановоToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->textBox1->Text = "";
	
	timer1->Enabled = false;
	Time = 0;
	label2->Location = Drawing::Point(16, 45);
	ch = 0;
	z = 0;
	posu = 0;
	textBox3->Visible = false;
	e6 = 1;
	menu();
	e6 = 0;
	textBox2->SelectionStart = post[0];
	textBox2->ScrollToCaret();
	textBox1->Focus();
}
private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(this, "Программа новая, могут быть баги. По вопросам/предложениям/багам писать сюда: danil.tkach2018@ynadex.ru;", "Info", MessageBoxButtons::OK);
}
};
}