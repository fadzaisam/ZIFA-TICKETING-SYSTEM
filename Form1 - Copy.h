#pragma once
#include "stdafx.h"
#include "Form3.h"

namespace FADZAIERICKAISAMPROJECT {

	using namespace System::Speech::Synthesis;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  txtPassed;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::TextBox^  txtUserlog;
	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  labelLogin5;
	private: System::Windows::Forms::Panel^  panel4;

	protected: 

	protected: 

	protected: 

			 //protected:

	//protected:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtPassed = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->txtUserlog = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->labelLogin5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(354, 124);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(98, 77);
			this->pictureBox4->TabIndex = 84;
			this->pictureBox4->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Location = System::Drawing::Point(175, 127);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(122, 67);
			this->panel2->TabIndex = 83;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(24, 131);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(87, 63);
			this->pictureBox3->TabIndex = 82;
			this->pictureBox3->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel1->Location = System::Drawing::Point(123, 332);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(245, 1);
			this->panel1->TabIndex = 79;
			// 
			// txtPassed
			// 
			this->txtPassed->BackColor = System::Drawing::Color::White;
			this->txtPassed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassed->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPassed->Location = System::Drawing::Point(123, 371);
			this->txtPassed->Name = L"txtPassed";
			this->txtPassed->PasswordChar = '.';
			this->txtPassed->Size = System::Drawing::Size(245, 34);
			this->txtPassed->TabIndex = 78;
			this->txtPassed->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel5->ForeColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(123, 415);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(245, 1);
			this->panel5->TabIndex = 77;
			// 
			// txtUserlog
			// 
			this->txtUserlog->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(15) {L"UserName", L"n.aisam", L"j.chigada", 
				L"eng.aisam", L"t.aisam", L"m.chigada", L"t.musokotwane", L"r.aisam", L"f.aisam", L"e.aisam", L"s.mugove", L"k.chigada", L"l.aisam", 
				L"l.chasauka", L"y.chasauka"});
			this->txtUserlog->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->txtUserlog->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->txtUserlog->BackColor = System::Drawing::Color::White;
			this->txtUserlog->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtUserlog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtUserlog->ForeColor = System::Drawing::SystemColors::Desktop;
			this->txtUserlog->Location = System::Drawing::Point(123, 291);
			this->txtUserlog->Name = L"txtUserlog";
			this->txtUserlog->Size = System::Drawing::Size(245, 31);
			this->txtUserlog->TabIndex = 76;
			this->txtUserlog->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogin->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnLogin->FlatAppearance->BorderSize = 0;
			this->btnLogin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->btnLogin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), 
				static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnLogin->Location = System::Drawing::Point(169, 452);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(157, 53);
			this->btnLogin->TabIndex = 74;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Form1::btnLogin_Click_2);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::DarkGreen;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(461, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(22, 20);
			this->pictureBox5->TabIndex = 63;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::pictureBox5_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkGreen;
			this->panel3->Controls->Add(this->labelLogin5);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Location = System::Drawing::Point(-10, -1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(511, 100);
			this->panel3->TabIndex = 75;
			// 
			// labelLogin5
			// 
			this->labelLogin5->AutoSize = true;
			this->labelLogin5->BackColor = System::Drawing::Color::DarkGreen;
			this->labelLogin5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelLogin5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelLogin5->ForeColor = System::Drawing::Color::White;
			this->labelLogin5->Location = System::Drawing::Point(19, 31);
			this->labelLogin5->Name = L"labelLogin5";
			this->labelLogin5->Size = System::Drawing::Size(453, 40);
			this->labelLogin5->TabIndex = 64;
			this->labelLogin5->Text = L"ZIFA TICKETING SYSTEM";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(48, 268);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 65);
			this->pictureBox1->TabIndex = 80;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(48, 351);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(69, 65);
			this->pictureBox2->TabIndex = 81;
			this->pictureBox2->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(10, 112);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(463, 100);
			this->panel4->TabIndex = 85;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMargin = System::Drawing::Size(5, 5);
			this->AutoScrollMinSize = System::Drawing::Size(5, 5);
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(475, 586);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txtPassed);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->txtUserlog);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel4);
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ZIFA TICKETING SYSTEM LOGIN";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

			int checker;

		void ConnectionDB()
		{
			 try
			 {
				 OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb");
			 conn->Open();
			 OleDbCommand^ cmd  = conn->CreateCommand();
			 cmd->CommandType = CommandType::Text;
			 cmd->CommandText = "select * from ainfo";
			 cmd->ExecuteNonQuery();

			 conn->Close();
			 // MessageBox::Show("Connection is Successful","Form1",
				//  MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 catch (Exception^ ex)
			 {
			 MessageBox::Show(ex->Message,"Form1", MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
		}
		
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 
			 	OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb");

			 try{
			 

				 ConnectionDB();

				 SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
				 Sapi->SpeakAsync("Welcome to ZIFA Ticketing System, Please enter your details and press enter to use the system, if you mistype you can press clear to retype and you can press exit to close the system");
			    
			     }
			 catch (Exception^ ex)

			     {

		         MessageBox::Show(ex->Message,"C++ Access Database Connector", MessageBoxButtons::OK,MessageBoxIcon::Error);
			   
			     }

			 }


private: System::Void btnLogin_Click_2(System::Object^  sender, System::EventArgs^  e) {

			 int checked;
			     OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb");
				
			 try
			 {
             conn->Open();
			 OleDbCommand^ cmd  = conn->CreateCommand();
			 cmd->CommandType = CommandType::Text;
			 cmd->CommandText = "Select * from ainfo where UserName = '" + txtUserlog->Text + "' AND Privacy = '" + txtPassed->Text + "'";
			 OleDbDataReader^ dr =  cmd->ExecuteReader();
			
			 checked = 0;

			 
			  do {
				 checked = checker ++;
			  }

			  while (dr->Read());

			 if (checked > 1)
			 {

			  SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
			  Sapi->SpeakAsync("Login Successful");
			  MessageBox::Show("Login Successful","Zifa Ticketing System",
			  MessageBoxButtons::OK,MessageBoxIcon::Exclamation);

			  this->Hide();
			  Form3^ form3 = gcnew Form3(txtUserlog->Text);
			  form3->ShowDialog();
			 }

			 else
			  {
			 
			  SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
			  Sapi->SpeakAsync("Login Failed please retype your details or contact your Administrator for support");
			  MessageBox::Show("Login Failed","Form1",
				  MessageBoxButtons::OK,MessageBoxIcon::Stop);

			  txtUserlog->Text = "";
			  txtPassed->Clear();
			  txtUserlog->Focus();
			 }
		}

			  catch (Exception^ ex)

			  {

			   MessageBox::Show(ex->Message,"Zifa Ticketing System", MessageBoxButtons::OK,
				 MessageBoxIcon::Error);
			 
			  }
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
		 }

};
}

