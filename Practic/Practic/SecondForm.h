#pragma once
#include <iostream>
#include <mutex>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <thread>
#include <chrono>

using namespace std;



namespace Practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	protected:
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(364, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"����������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(364, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"����� �� �����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 63);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(342, 88);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 177);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(98, 143);
			this->textBox2->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(227, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"���������� ���� ( A ) � ������ ���������:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(464, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(227, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(231, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"���������� ���� ( A ) �� ������ ���������:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(227, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(230, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"���������� ���� ( A ) � ������� ���������:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(227, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(241, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"���������� ���� ( A ) � ��������� ���������:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(227, 232);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(219, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"���������� ���� ( A ) � ����� ���������:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(227, 245);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(227, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"���������� ���� ( A ) � ������ ���������:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(227, 258);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(234, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"���������� ���� ( A ) � ������� ���������:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(227, 271);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(234, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"���������� ���� ( A ) � ������� ���������:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(227, 284);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(231, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"���������� ���� ( A ) � ������� ���������:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(227, 297);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(231, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"���������� ���� ( A ) � ������� ���������:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(464, 193);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(464, 206);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(464, 219);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 25;
			this->label17->Text = L"label17";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(464, 232);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 26;
			this->label18->Text = L"label18";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(464, 245);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 27;
			this->label19->Text = L"label19";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(464, 258);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 28;
			this->label20->Text = L"label20";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(464, 271);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 29;
			this->label21->Text = L"label21";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(464, 284);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 30;
			this->label22->Text = L"label22";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(464, 297);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 31;
			this->label23->Text = L"label23";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 177);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(101, 143);
			this->textBox3->TabIndex = 32;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(13, 161);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(88, 13);
			this->label24->TabIndex = 33;
			this->label24->Text = L"��� ����������";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(117, 161);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(67, 13);
			this->label25->TabIndex = 34;
			this->label25->Text = L"����������";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(108, 47);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(144, 13);
			this->label26->TabIndex = 35;
			this->label26->Text = L"�������� ����� ��������";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 455);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//template<typename T>
		void writeTo(const std::string& filepath, const  vector<char>& data)
		{

			ofstream filestream("bukv2.txt", ios::app);
			copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, " "));
			filestream.close();

		} // �������� ������� ������ ������� � ����
		//template<typename T1>
		void writeTo1(const std::string& filepath, const  vector<char>& data)
		{

			ofstream filestream("bukv2.txt", ios::app);
			filestream << "\n";
			filestream.close();

		} // �������� (�������) ������� ����� ��������
		//template<typename T2>
		void writeTo2(const std::string& filepath, const  vector<char>& data)
		{

			ofstream filestream("bukv3.txt", ios::app);
			copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, " "));
			filestream.close();

		} // ������� ������ ������� � ������ ����
		//template<typename T3>
		void writeTo4(const std::string& filepath, const  vector<char>& data)
		{

			ofstream filestream("bukv3.txt", ios::app);
			filestream << "\n";
			filestream.close();

		} // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		char test_symbol = 'a'; // �������� ����������, ��� ����������� ��������� � ������� ���������
		

		vector<char> kit; // ���������� �������
		int kol_a1 = 0; // �������� ����������, ��� �������� ���������� ����
		char str[256];
		cout << "Enter the name of an existing text file: ";
		cin.get(str, 256); // get c-string
		ifstream is("bukv.txt"); // �������������� �������� �����
		is.seekg(0, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char c;
		int i = 0;
		while (is.get(c) && i < 10) { // ����������� ���������� 10 ����
			i++;
			kit.push_back(c); // ���������� 10 ����
			if (c == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a1++; // ���������� �������� ��������� ��������
			}
		}

		is.close(); // �������� �����
		copy(kit.begin(), kit.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
	
		writeTo("bukv2.txt", kit); // ����� ������� � ����
		label5->Text = kol_a1.ToString(); // ����� �������� ���������� (kol_a1) � lebel
		writeTo1("bukv2.txt", kit); // ������ ����� ��������
		sort(kit.begin(), kit.end()); // ���������� �� �������� (� ������� �����������)

		vector <char> kit2; // ���������� �������
		int kol_a2 = 0; // �������� ����������, ��� �������� ���������� ����
		char str1[256];
		cin.get(str1, 256); // get c-string
		ifstream is1("bukv.txt"); // �������������� �������� �����
		is1.seekg(10, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char g;
		int i1 = 0;
		while (is1.get(g) && i1 < 10) { // ����������� ���������� 10 ����
			i1++;
			kit2.push_back(g); // ���������� 10 ����
			if (g == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a2++; // ���������� �������� ��������� ��������
			}
		}

		is1.close(); // �������� �����
		copy(kit2.begin(), kit2.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit2); // ����� ������� � ����
		label15->Text = kol_a2.ToString(); // ����� �������� ���������� (kol_a2) � lebel
		writeTo1("bukv2.txt", kit2); // ������ ����� ��������
		sort(kit2.begin(), kit2.end()); // ���������� �� �������� (� ������� �����������)


		vector <char> kit3; // ���������� �������
		int kol_a3 = 0; // �������� ����������, ��� �������� ���������� ����
		char str2[256];
		cin.get(str2, 256); // get c-string
		ifstream is2("bukv.txt"); // �������������� �������� �����
		is2.seekg(20, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char g1;
		int i2 = 0;
		while (is2.get(g1) && i2 < 10) {  // ����������� ���������� 10 ����
			i2++;
			kit3.push_back(g1); // ���������� 10 ����
			if (g1 == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a3++; // ���������� �������� ��������� ��������
			}
		}

		is2.close(); // �������� �����
		copy(kit3.begin(), kit3.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit3); // ����� ������� � ����
		label16->Text = kol_a3.ToString(); // ����� �������� ���������� (kol_a3) � lebel
		writeTo1("bukv2.txt", kit3); // ������ ����� ��������
		sort(kit3.begin(), kit3.end()); // ���������� �� �������� (� ������� �����������)


		vector <char> kit4; // ���������� �������
		int kol_a4 = 0; // �������� ����������, ��� �������� ���������� ����
		char str3[256];
		cin.get(str3, 256); // get c-string
		ifstream is3("bukv.txt"); // �������������� �������� �����
		is1.seekg(30, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char g2;
		int i3 = 0;
		while (is3.get(g2) && i3 < 10) { // ����������� ���������� 10 ����
			i3++;
			kit4.push_back(g2); // ���������� 10 ����
			if (g2 == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a4++; // ���������� �������� ��������� ��������
			}
		}

		is3.close(); // �������� �����
		copy(kit4.begin(), kit4.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit4);  // ����� ������� � ����
		label17->Text = kol_a4.ToString(); // ����� �������� ���������� (kol_a4) � lebel
		writeTo1("bukv2.txt", kit4); // ������ ����� ��������
		sort(kit4.begin(), kit4.end()); // ���������� �� �������� (� ������� �����������)

		 
		vector <char> kit5; // ���������� �������
		int kol_a5 = 0; // �������� ����������, ��� �������� ���������� ����
		char str5[256];
		cin.get(str5, 256); // get c-string
		ifstream is5("bukv.txt"); // �������������� �������� �����
		is5.seekg(40, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char g5;
		int i5 = 0;
		while (is5.get(g5) && i5 < 10) { // ����������� ���������� 10 ����
			i5++;
			kit5.push_back(g5); // ���������� 10 ����
			if (g5 == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a5++; // ���������� �������� ��������� ��������
			}
		}

		is5.close(); // �������� �����
		copy(kit5.begin(), kit5.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit5); // ����� ������� � ����
		label18->Text = kol_a5.ToString(); // ����� �������� ���������� (kol_a5) � lebel
		writeTo1("bukv2.txt", kit5); // ������ ����� ��������
		sort(kit5.begin(), kit5.end()); // ���������� �� �������� (� ������� �����������)


		vector <char> kit6; // ���������� �������
		int kol_a6 = 0; // �������� ����������, ��� �������� ���������� ����
		char str6[256];
		cin.get(str6, 256); // get c-string
		ifstream is6("bukv.txt"); // �������������� �������� �����
		is6.seekg(50, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char g6;
		int i6 = 0;
		while (is6.get(g6) && i6 < 10) { // ����������� ���������� 10 ����
			i6++;
			kit6.push_back(g6); // ���������� 10 ����
			if (g6 == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a6++; // ���������� �������� ��������� ��������
			}
		}

		is6.close(); // �������� �����
		copy(kit6.begin(), kit6.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit6); // ����� ������� � ����
		label19->Text = kol_a6.ToString(); // ����� �������� ���������� (kol_a6) � lebel
		writeTo1("bukv2.txt", kit6); // ������ ����� ��������
		sort(kit6.begin(), kit6.end()); // ���������� �� �������� (� ������� �����������)


		vector <char> kit7; // ���������� �������
		int kol_a7 = 0; // �������� ����������, ��� �������� ���������� ����
		char str7[256];
		cin.get(str7, 256); // get c-string
		ifstream is7("bukv.txt"); // �������������� �������� �����
		is7.seekg(60, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char g7;
		int i7 = 0;
		while (is7.get(g7) && i7 < 10) { // ����������� ���������� 10 ����
			i7++;
			kit7.push_back(g7); // ���������� 10 ����
			if (g7 == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a7++; // ���������� �������� ��������� ��������
			}
		}

		is7.close(); // �������� �����
		copy(kit7.begin(), kit7.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit7); // ����� ������� � ����
		label20->Text = kol_a7.ToString(); // ����� �������� ���������� (kol_a7) � lebel
		writeTo1("bukv2.txt", kit7); // ������ ����� ��������
		sort(kit7.begin(), kit7.end()); // ���������� �� �������� (� ������� �����������)


		vector <char> kit8; // ���������� �������
		int kol_a8 = 0; // �������� ����������, ��� �������� ���������� ����
		char str8[256];
		cin.get(str8, 256); // get c-string
		ifstream is8("bukv.txt"); // �������������� �������� �����
		is8.seekg(70, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char g8;
		int i8 = 0;
		while (is8.get(g8) && i8 < 10) { // ����������� ���������� 10 ����
			i8++;
			kit8.push_back(g8); // ���������� 10 ����
			if (g8 == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a8++; // ���������� �������� ��������� ��������
			}
		}

		is8.close(); // �������� �����
		copy(kit8.begin(), kit8.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit8); // ����� ������� � ����
		label21->Text = kol_a8.ToString(); // ����� �������� ���������� (kol_a8) � lebel
		writeTo1("bukv2.txt", kit8); // ������ ����� ��������
		sort(kit8.begin(), kit8.end()); // ���������� �� �������� (� ������� �����������)


		vector <char> kit9; // ���������� �������
		int kol_a9 = 0; // �������� ����������, ��� �������� ���������� ����
		char str9[256];
		cin.get(str9, 256); // get c-string
		ifstream is9("bukv.txt"); // �������������� �������� �����
		is9.seekg(80, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char g9;
		int i9 = 0;
		while (is9.get(g9) && i9 < 10) { // ����������� ���������� 10 ����
			i9++;
			kit9.push_back(g9); // ���������� 10 ����
			if (g9 == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a9++; // ���������� �������� ��������� ��������
			}
		}

		is9.close(); // �������� �����
		copy(kit9.begin(), kit9.end(), std::ostream_iterator<char>(cout, " "));
		cout << endl;
		writeTo("bukv2.txt", kit9); // ����� ������� � ����
		label22->Text = kol_a9.ToString(); // ����� �������� ���������� (kol_a9) � lebel
		writeTo1("bukv2.txt", kit9); // ������ ����� ��������
		sort(kit9.begin(), kit9.end()); // ���������� �� �������� (� ������� �����������)


		vector <char> kit10; // ���������� �������
		int kol_a10 = 0; // �������� ����������, ��� �������� ���������� ����
		char str10[256];
		cin.get(str10, 256); // get c-string
		ifstream is10("bukv.txt"); // �������������� �������� �����
		is10.seekg(90, ios::beg); // ����������� �������, ��� ������ ��������, ����� �������������� ����������
		char g10;
		int i10 = 0;
		while (is10.get(g10) && i10 < 10) { // ����������� ���������� 10 ����
			i10++;
			kit10.push_back(g10); // ���������� 10 ����
			if (g10 == test_symbol) // ���������� �������, ��� ��������� ��������
			{
				kol_a10++; // ���������� �������� ��������� ��������
			}
		}

		is10.close(); // �������� �����
		copy(kit10.begin(), kit10.end(), std::ostream_iterator<char>(cout, " "));
		label23->Text = kol_a10.ToString(); // ����� �������� ���������� (kol_a10) � lebel
		writeTo("bukv2.txt", kit10); // ����� ������� � ����
		sort(kit10.begin(), kit10.end()); // ���������� �� �������� (� ������� �����������)

		writeTo2("bukv3.txt", kit); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
		writeTo2("bukv3.txt", kit2); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit2); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
		writeTo2("bukv3.txt", kit3); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit3); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
		writeTo2("bukv3.txt", kit4); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit4); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
		writeTo2("bukv3.txt", kit5); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit5); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
		writeTo2("bukv3.txt", kit6); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit6); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
		writeTo2("bukv3.txt", kit7); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit7); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
		writeTo2("bukv3.txt", kit8); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit8); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
		writeTo2("bukv3.txt", kit9); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit9); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
		writeTo2("bukv3.txt", kit10); // ������� ������ ������� � ������ ����
		writeTo4("bukv3.txt", kit10); // �������� ������� (�������� ������) ����� ������ ������ ����, ��������� �� 10 ��������
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Filename = "bukv.txt"; // ������� � ���������� ��� �����
	try
	{
		StreamReader^ file = File::OpenText(Filename); // C��������� �����
		textBox1->Text = file->ReadToEnd(); // ����� ����� � texbox
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	String^ Filename1 = "bukv2.txt"; // ������� � ���������� ��� �����
	try
	{
		StreamReader^ file = File::OpenText(Filename1); // C��������� �����
		textBox2->Text = file->ReadToEnd(); // ����� ����� � texbox
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	String^ Filename2 = "bukv3.txt"; // ������� � ���������� ��� �����
	try
	{
		StreamReader^ file = File::OpenText(Filename2); // C��������� �����
		textBox3->Text = file->ReadToEnd(); // ����� ����� � texbox
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};


}
