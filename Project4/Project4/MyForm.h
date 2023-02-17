#pragma once
#include <string>
#include <time.h>
#include"card.h"
#include"linkedlist.h"
namespace Project4 {

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
		LinkedList* game = new LinkedList();
		players* p1 = new players();
		cards* c = new cards();
		players* p2 = new players();
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			game->implement("Goo", 0, 200, false, false, 0);
			game->implement("Sharqia", 1, 500, false, false, 50);
			game->implement("Monufia", 2, 100, false, false, 50);
			game->implement(" Kafr-el-Sheikh ", 3, 250, false, false, 50);
			game->implement("Faiyum", 4, 200, false, false, 100);
			game->implement("police", 5, 0, false, false, 0);
			game->implement("Qena", 6, 75, false, false, 50);
			game->implement("Asyut", 7, 150, false, false, 50);
			game->implement("Sohag", 8, 50, false, false, 100);
			game->implement("Ismailia", 9, 100, false, false, 150);
			game->implement("draw card", 10, 0, false, false, 0);
			game->implement("Aswan", 11, 300, false, false, 150);
			game->implement("Luxor", 12, 300, false, false, 150);
			game->implement("Damietta", 13, 100, false, false, 50);
			game->implement("Port Said", 14, 200, false, false, 50);
			game->implement("jail", 15, 0, false, false, 0);
			game->implement("Red-Sea", 16, 400, false, false, 100);
			game->implement("Giza", 17, 350, false, false, 750);
			game->implement("Alex", 18, 400, false, false, 200);
			game->implement("Cairo", 19, 500, false, false, 225);
			game->start(*p1, *p2);
			game->traveltojail(*p1);


			c->push(8, "borrow 100 from the bank");
			c->push(7, "Pay 100 to the bank");
			c->push(6, "Today is your birthday take from your friend 100 LE");
			c->push(5, "go to jail");
			c->push(4, "pay 200 LE to your Friend");
			c->push(3, "Go Back 4 steps");
			c->push(2, "Jump 3 steps");
			c->push(1, "Take from your friend 50 LE");


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
	private: System::Windows::Forms::Button^ button9;
	protected:
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(1025, 404);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(96, 113);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(29, 404);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 117);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(1029, 266);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(92, 86);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(29, 275);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 86);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1151, 532);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1003, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1003, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1003, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1003, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 180);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"label8";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1151, 529);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			label5->Text = "Player 1";
			label1->Text = "Player 2";

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button8->Enabled = true;
	this->button9->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = true;
	int x;
	srand(time(0));
	x = rand() % 6 + 1;
	string f1 = c->top();
	String^ z1 = gcnew String(f1.c_str());
	for (int i = 0; i < x; i++) {
		p1->position = p1->position->next;
		if (p1->position->data == "Goo") {

			p1->balance += 200;
			MessageBox::Show("player 1 earned 200$ ");
		}
		if (p1->position->data == "draw card") {


			if (c->top() == "Take from your friend 50 LE") {

				MessageBox::Show("your dare is to " + z1);
				p1->balance += 50;
				p2->balance -= 50;
			}
			else if (c->top() == "Jump 3 steps") {
				MessageBox::Show("your dare is to " + z1);
				game->jump3steps(*p1, *c);
			}
			else if (c->top() == "Go Back 4 steps") {
				MessageBox::Show("your dare is to " + z1);
				game->getback(*p1);
			}
			else if (c->top() == "pay 200 LE to your Friend") {
				MessageBox::Show("your dare is to " + z1);
				p1->balance -= 200;
				p2->balance += 200;

				/*MessageBox::Show("your dare is to ", z1);
				MessageBox::Show("your dare is to ", z1);*/
				/*cout << p1->name << " new balance = " << p1->balance << endl;
				cout << p2->name << " new balance = " << p2->balance << endl;*/
			}
			else if (c->top() == "go to jail") {
				game->traveltojailfromcards(*p1);
			}
			else if (c->top() == "Today is your birthday take from your friend 100 LE") {
				p1->balance += 100;
				p2->balance -= 100;
				cout << p1->name << " new balance = " << p1->balance << endl;
				cout << p2->name << " new balance = " << p2->balance << endl;
			}
			else if (c->top() == "Pay 100 to the bank") {

				p1->balance -= 100;

			}
			else if (c->top() == "Pay 100 to the bank") {

				p1->balance -= 100;

			}
			else if (c->top() == "borrow 100 from the bank") {
				p1->balance += 100;
			}

			c->pop();
		}
	}

	/*String^ b = Convert::ToString(p1->balance);
	String^ b2 = Convert::ToString(p2->balance);*/

	game->traveltojail(*p1);
	/////////




	///////////////
	//drawc(p, p2, c);
	string f = p1->position->data;
	String^ z = gcnew String(f.c_str());


	label6->Text = z;
	String^ dice1 = Convert::ToString(x);
	label7->Text = "Dice " + dice1;
	String^ b1 = Convert::ToString(p1->balance);
	label8->Text = b1 + "$ ";

	if (p1->position->isowned == false && p1->position->isowned2 == true) {
		p1->balance -= p1->position->rentalprice;
		p2->balance += p1->position->rentalprice;


		MessageBox::Show("player 1 payed to player 2 " + p1->position->rentalprice);
	}
	if (p1->balance < 0) {
		MessageBox::Show("Game Over player 2 Wins!!");
		Application::Exit();
	}
	this->button8->Enabled = false;
	this->button9->Enabled = true;
	this->button7->Enabled = false;
	this->button6->Enabled = true;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button8->Enabled = true;
	this->button9->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = true;
	string f1 = c->top();
	String^ z1 = gcnew String(f1.c_str());


	int x2;
	srand(time(0));
	x2 = rand() % 6 + 1;


	for (int i = 0; i < x2; i++) {
		p2->position = p2->position->next;

		if (p2->position->data == "Goo") {

			p2->balance += 200;
			MessageBox::Show("player 2 earned 200$ ");
		}
		if (p2->position->data == "draw card") {


			if (c->top() == "Take from your friend 50 LE") {

				MessageBox::Show("your dare is to " + z1);
				p2->balance += 50;
				p1->balance -= 50;
			}//
			else if (c->top() == "Jump 3 steps") {
				MessageBox::Show("your dare is to " + z1);
				game->jump3steps(*p2, *c);
			}
			else if (c->top() == "Go Back 4 steps") {
				MessageBox::Show("your dare is to " + z1);
				game->getback(*p2);
			}
			else if (c->top() == "pay 200 LE to your Friend") {
				MessageBox::Show("your dare is to " + z1);
				p2->balance -= 200;
				p1->balance += 200;

				/*MessageBox::Show("your dare is to ", z1);
				MessageBox::Show("your dare is to ", z1);*/
				/*cout << p1->name << " new balance = " << p1->balance << endl;
				cout << p2->name << " new balance = " << p2->balance << endl;*/
			}
			else if (c->top() == "go to jail") {
				game->traveltojailfromcards(*p2);
			}
			else if (c->top() == "Today is your birthday take from your friend 100 LE") {
				p2->balance += 100;
				p1->balance -= 100;
				/*cout << p1->name << " new balance = " << p1->balance << endl;
				cout << p2->name << " new balance = " << p2->balance << endl;*/
			}
			else if (c->top() == "Pay 100 to the bank") {

				p2->balance -= 100;

			}
			else if (c->top() == "borrow 100 from the bank") {
				p2->balance += 100;
			}
			c->pop();
		}
	}
	game->traveltojail(*p2);

	//drawc(p, p2, c);
	string f = p2->position->data;
	String^ z2 = gcnew String(f.c_str());


	label2->Text = z2;
	String^ dice2 = Convert::ToString(x2);
	label3->Text = "Dice " + dice2;
	String^ b2 = Convert::ToString(p2->balance);
	label4->Text = b2 + "$ ";

	if (p2->position->isowned == true && p2->position->isowned2 == false) {
		p2->balance -= p2->position->rentalprice;
		p1->balance += p2->position->rentalprice;

		MessageBox::Show("player 2 payed to player 1 " + p2->position->rentalprice);

	}
	if (p2->balance < 0) {
		MessageBox::Show("Game Over player 1 Wins!!");
		Application::Exit();
	}
	this->button8->Enabled = true;
	this->button9->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = true;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	string f = p1->position->data;
	String^ z = gcnew String(f.c_str());
	if (p1->position->data == "draw card" || p1->position->data == "police" || p1->position->data == "jail" || p1->position->data == "Goo") {
		//cout << "This item can not be bought\n";
		MessageBox::Show("This item can not be bought");
		return;

	}
	else if (p1->position->isowned == false && p1->position->isowned2 == true) {
		//cout << "owned by " << p2->name << endl;
		MessageBox::Show("owned by player 2");
	}
	else if (p1->position->isowned == true && p1->position->isowned2 == false) {
		//cout << "owned by " << p1->name << endl;
		MessageBox::Show("owned by player 1");
	}
	else if (p1->position->isowned == false && p1->position->isowned2 == false) {
		if (p1->balance < p1->position->price) {
			//cout << "Balance is not enough \n";
			MessageBox::Show("Balance is not enough");
		}
		else {
			p1->balance = p1->balance - (p1->position->price);
			p1->position->isowned = true;
			//cout << "item " << p1->position->data << " is bought successfully" << endl << "your balance = " << p1->balance << endl;

			MessageBox::Show(z + " is bought successfully");
		}

	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	string f = p2->position->data;
	String^ z = gcnew String(f.c_str());
	if (p2->position->data == "draw card" || p2->position->data == "police" || p2->position->data == "jail" || p1->position->data == "Goo") {
		//cout << "This item cant be bought\n";
		MessageBox::Show("This item can not be bought");
		return;

	}


	else if (p2->position->isowned == false && p2->position->isowned2 == true) {
		//	cout << "owned by " << p1->name << endl;
		MessageBox::Show("owned by player 2");
	}
	else if (p2->position->isowned == true && p2->position->isowned2 == false) {
		//	cout << "owned by " << p1->name << endl;
		MessageBox::Show("owned by player 1");
	}
	else if (p2->position->isowned == false && p2->position->isowned2 == false) {
		if (p2->balance < p2->position->price) {
			/*	cout << "Balance is not enough \n";*/
			MessageBox::Show("Balance is not enough");

		}
		else {
			p2->balance = p2->balance - (p2->position->price);
			p2->position->isowned2 = true;
			//cout << "item " << p2->position->data << " is bought successfully" << endl << "your balance = " << p2->balance << endl;
			MessageBox::Show(z + " is bought successfully");
		}





	}
}
};
}
