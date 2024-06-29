#pragma once

namespace FADZAIERICKAISAMPROJECT {

using namespace System::Speech::Synthesis;
using namespace System::Threading::Tasks;
using namespace System::Speech::Recognition;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::IO::Ports;

/// <summary>
/// Summary for Form2
/// </summary>
public ref class Form2 : public System::Windows::Forms::Form
{
public:
	Form2(void)
	{
		InitializeComponent();

		

		cmbCC->Text = "Select Currency";
		cmbCC->Items->Add("United States");
		cmbCC->Items->Add("EUROPE");
		cmbCC->Items->Add("BRITAIN");
		cmbCC->Items->Add("RSA");
		cmbCC->Items->Add("ZAMBIA");
		cmbCC->Items->Add("BOTSWANA");

		cmbStadium->Text = "Select Stadium";
		cmbStadium->Items->Add("Rufaro");
		cmbStadium->Items->Add("Gwanzura");
		cmbStadium->Items->Add("National_Sports");
		cmbStadium->Items->Add("Babourfields");

		timer1->Start();

		//
		//TODO: Add the constructor code here
		//
	}

	Form2(String^data)
	{
		InitializeComponent();
		lblUserin->Text = data;

		

		pictureBox1 = gcnew PictureBox();
		pictureBox1->Image = Image::FromFile("N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\1672298067968.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::AutoSize;

		pictureBox2 = gcnew PictureBox();
		pictureBox2->Image = Image::FromFile("N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\zifaqr.jpg");
		pictureBox2->SizeMode = PictureBoxSizeMode::AutoSize;

		this->Controls->Add(pictureBox1);
		this->Controls->Add(pictureBox2);

		cmbCC->Text = "Select Currency";
		cmbCC->Items->Add("United States");
		cmbCC->Items->Add("EUROPE");
		cmbCC->Items->Add("BRITAIN");
		cmbCC->Items->Add("RSA");
		cmbCC->Items->Add("ZAMBIA");
		cmbCC->Items->Add("BOTSWANA");

		cmbStadium->Text = "Select Stadium";
		cmbStadium->Items->Add("Rufaro");
		cmbStadium->Items->Add("Gwanzura");
		cmbStadium->Items->Add("National_Sports");
		cmbStadium->Items->Add("Babourfields");

		timer1->Start();
		//
		//TODO: Add the constructor code here
		//
	}

protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~Form2()
	{
		if (components)
		{
			delete components;
		}
	}


protected: 

protected: 



private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::TabControl^  tbcntrAdmin;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::TextBox^  txtDate;
private: System::Windows::Forms::TextBox^  txtTime;
private: System::Windows::Forms::TextBox^  txtPrice;
private: System::Windows::Forms::TextBox^  txtRefno;
private: System::Windows::Forms::TextBox^  txtAdult;
private: System::Windows::Forms::TextBox^  txtChild;
private: System::Windows::Forms::TextBox^  txtTicketype;
private: System::Windows::Forms::TextBox^  txtEventicket;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;

private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::RadioButton^  rbGroup;
private: System::Windows::Forms::RadioButton^  rbSingle;
private: System::Windows::Forms::RadioButton^  rbDouble;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::ComboBox^  cmbStadium;
private: System::Windows::Forms::RadioButton^  rbChild;
private: System::Windows::Forms::RadioButton^  rbAdult;
private: System::Windows::Forms::Label^  label3;






private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::Button^  btnCC;
private: System::Windows::Forms::Button^  btnCancel;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  btnCO;
private: System::Windows::Forms::Label^  lblCC;
private: System::Windows::Forms::TextBox^  txtCC;
private: System::Windows::Forms::ComboBox^  cmbCC;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Button^  btnTotal;
private: System::Windows::Forms::Button^  btnClear;
private: System::Windows::Forms::Label^  lblTotal;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  lblVAT;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  lblSubtotal;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::RichTextBox^  rtbReceipt;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Button^  btnResetRec;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Button^  btnSearchRec;
private: System::Windows::Forms::Panel^  panel11;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::Panel^  panel21;
private: System::Windows::Forms::Panel^  dataGridView;
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::TextBox^  txtSearch;
private: System::Windows::Forms::Button^  btnSearchAdmin;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Panel^  panel22;
private: System::Windows::Forms::Panel^  panel13;
private: System::Windows::Forms::Button^  btnAddData;
private: System::Windows::Forms::Button^  btnBackAd;
private: System::Windows::Forms::Button^  btnUpdateAdmin;
private: System::Windows::Forms::Button^  btnDelAd;
private: System::Windows::Forms::Button^  btnResetADdat;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  txtEmail;
private: System::Windows::Forms::TextBox^  txtLocation;
private: System::Windows::Forms::TextBox^  txtPassword;
private: System::Windows::Forms::TextBox^  txtSurname;
private: System::Windows::Forms::TextBox^  txtNamef;
private: System::Windows::Forms::TextBox^  txtUsername;
private: System::Windows::Forms::TextBox^  txtID;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label42;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Timer^  timer1;
private: System::Drawing::Printing::PrintDocument^  printDocument2;
private: System::Windows::Forms::Button^  btnPrintReceipt;
private: System::Windows::Forms::Button^  btnBackRec;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  btbBackRec;
private: System::Windows::Forms::Label^  Venue;
private: System::Windows::Forms::TextBox^  txtStadium;
private: System::Windows::Forms::TextBox^  txtClass;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Label^  lblEventT;
private: System::Windows::Forms::RadioButton^  rbOther;
private: System::Windows::Forms::RadioButton^  rbFootball;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  txtTelephone;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  lblSit;
private: System::Windows::Forms::TextBox^  txtHolder;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog2;
private: System::Windows::Forms::Label^  lblHolder;
private: System::Windows::Forms::DataGridView^  dataGridView2;
private: System::Windows::Forms::TextBox^  txtBarcode;
private: System::Windows::Forms::Label^  lblUserin;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
public: System::IO::Ports::SerialPort^  serialPort1;
private: System::Windows::Forms::TextBox^  txtApproved;
private: System::Windows::Forms::ProgressBar^  progressBar1;
private: System::Windows::Forms::Timer^  timer2;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Button^  btnAudio;
private: System::Windows::Forms::Label^  lblCount;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  btnRecordsPrint;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::RadioButton^  rbVVip;
private: System::Windows::Forms::RadioButton^  rbStandard;
private: System::Windows::Forms::RadioButton^  rbVip;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::Label^  labelMainSystem5;
private: System::Windows::Forms::Panel^  panelMainSystem1;
private: System::Windows::Forms::Panel^  panelMainSystem2;
private: System::Windows::Forms::Panel^  panel19;
private: System::Windows::Forms::Panel^  panel18;
private: System::Windows::Forms::Panel^  panel17;
private: System::Windows::Forms::Panel^  panel16;
private: System::Windows::Forms::Panel^  panel24;
private: System::Windows::Forms::Panel^  panel23;
private: System::Windows::Forms::Panel^  panel20;
private: System::Windows::Forms::Panel^  panel26;
private: System::Windows::Forms::Panel^  panel25;
private: System::Windows::Forms::Panel^  panel28;
private: System::Windows::Forms::Panel^  panel27;
private: System::Windows::Forms::Panel^  panel30;
private: System::Windows::Forms::Panel^  panel29;
private: System::Windows::Forms::Panel^  panel37;
private: System::Windows::Forms::Panel^  panel36;
private: System::Windows::Forms::Panel^  panel35;
private: System::Windows::Forms::Panel^  panel34;
private: System::Windows::Forms::Panel^  panel33;
private: System::Windows::Forms::Panel^  panel32;
private: System::Windows::Forms::Panel^  panel31;


public: 
private: 

public: 

public: 

public: 
private: 


private: System::ComponentModel::IContainer^  components;


private:
	/// <summary>
	/// Required designer variable.
	/// </summary>


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void InitializeComponent(void)
	{
		this->components = (gcnew System::ComponentModel::Container());
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
		this->tbcntrAdmin = (gcnew System::Windows::Forms::TabControl());
		this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
		this->panel4 = (gcnew System::Windows::Forms::Panel());
		this->panel24 = (gcnew System::Windows::Forms::Panel());
		this->panel23 = (gcnew System::Windows::Forms::Panel());
		this->panel20 = (gcnew System::Windows::Forms::Panel());
		this->panel19 = (gcnew System::Windows::Forms::Panel());
		this->btnAudio = (gcnew System::Windows::Forms::Button());
		this->btnTotal = (gcnew System::Windows::Forms::Button());
		this->btnClear = (gcnew System::Windows::Forms::Button());
		this->lblTotal = (gcnew System::Windows::Forms::Label());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->lblVAT = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->lblSubtotal = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->panel7 = (gcnew System::Windows::Forms::Panel());
		this->btnCC = (gcnew System::Windows::Forms::Button());
		this->panel18 = (gcnew System::Windows::Forms::Panel());
		this->panel17 = (gcnew System::Windows::Forms::Panel());
		this->panel16 = (gcnew System::Windows::Forms::Panel());
		this->btnCancel = (gcnew System::Windows::Forms::Button());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->btnCO = (gcnew System::Windows::Forms::Button());
		this->lblCC = (gcnew System::Windows::Forms::Label());
		this->txtCC = (gcnew System::Windows::Forms::TextBox());
		this->cmbCC = (gcnew System::Windows::Forms::ComboBox());
		this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
		this->panel3 = (gcnew System::Windows::Forms::Panel());
		this->rbGroup = (gcnew System::Windows::Forms::RadioButton());
		this->rbSingle = (gcnew System::Windows::Forms::RadioButton());
		this->rbDouble = (gcnew System::Windows::Forms::RadioButton());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
		this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
		this->panel5 = (gcnew System::Windows::Forms::Panel());
		this->lblEventT = (gcnew System::Windows::Forms::Label());
		this->rbOther = (gcnew System::Windows::Forms::RadioButton());
		this->rbFootball = (gcnew System::Windows::Forms::RadioButton());
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->cmbStadium = (gcnew System::Windows::Forms::ComboBox());
		this->rbChild = (gcnew System::Windows::Forms::RadioButton());
		this->rbAdult = (gcnew System::Windows::Forms::RadioButton());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->rbVVip = (gcnew System::Windows::Forms::RadioButton());
		this->rbStandard = (gcnew System::Windows::Forms::RadioButton());
		this->rbVip = (gcnew System::Windows::Forms::RadioButton());
		this->label30 = (gcnew System::Windows::Forms::Label());
		this->lblUserin = (gcnew System::Windows::Forms::Label());
		this->panel8 = (gcnew System::Windows::Forms::Panel());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->panel9 = (gcnew System::Windows::Forms::Panel());
		this->txtBarcode = (gcnew System::Windows::Forms::TextBox());
		this->lblHolder = (gcnew System::Windows::Forms::Label());
		this->txtHolder = (gcnew System::Windows::Forms::TextBox());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->lblSit = (gcnew System::Windows::Forms::Label());
		this->txtClass = (gcnew System::Windows::Forms::TextBox());
		this->label25 = (gcnew System::Windows::Forms::Label());
		this->txtStadium = (gcnew System::Windows::Forms::TextBox());
		this->txtDate = (gcnew System::Windows::Forms::TextBox());
		this->txtTime = (gcnew System::Windows::Forms::TextBox());
		this->txtPrice = (gcnew System::Windows::Forms::TextBox());
		this->txtRefno = (gcnew System::Windows::Forms::TextBox());
		this->txtAdult = (gcnew System::Windows::Forms::TextBox());
		this->txtChild = (gcnew System::Windows::Forms::TextBox());
		this->txtTicketype = (gcnew System::Windows::Forms::TextBox());
		this->txtEventicket = (gcnew System::Windows::Forms::TextBox());
		this->label16 = (gcnew System::Windows::Forms::Label());
		this->label15 = (gcnew System::Windows::Forms::Label());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->label14 = (gcnew System::Windows::Forms::Label());
		this->label13 = (gcnew System::Windows::Forms::Label());
		this->label12 = (gcnew System::Windows::Forms::Label());
		this->label11 = (gcnew System::Windows::Forms::Label());
		this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
		this->panel26 = (gcnew System::Windows::Forms::Panel());
		this->panel25 = (gcnew System::Windows::Forms::Panel());
		this->txtApproved = (gcnew System::Windows::Forms::TextBox());
		this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->btbBackRec = (gcnew System::Windows::Forms::Button());
		this->btnPrintReceipt = (gcnew System::Windows::Forms::Button());
		this->rtbReceipt = (gcnew System::Windows::Forms::RichTextBox());
		this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
		this->panel28 = (gcnew System::Windows::Forms::Panel());
		this->panel27 = (gcnew System::Windows::Forms::Panel());
		this->btnRecordsPrint = (gcnew System::Windows::Forms::Button());
		this->btnBackRec = (gcnew System::Windows::Forms::Button());
		this->panel15 = (gcnew System::Windows::Forms::Panel());
		this->lblCount = (gcnew System::Windows::Forms::Label());
		this->label19 = (gcnew System::Windows::Forms::Label());
		this->panel14 = (gcnew System::Windows::Forms::Panel());
		this->panel30 = (gcnew System::Windows::Forms::Panel());
		this->panel29 = (gcnew System::Windows::Forms::Panel());
		this->btnResetRec = (gcnew System::Windows::Forms::Button());
		this->label24 = (gcnew System::Windows::Forms::Label());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->btnSearchRec = (gcnew System::Windows::Forms::Button());
		this->panel11 = (gcnew System::Windows::Forms::Panel());
		this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
		this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
		this->panel21 = (gcnew System::Windows::Forms::Panel());
		this->dataGridView = (gcnew System::Windows::Forms::Panel());
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->label17 = (gcnew System::Windows::Forms::Label());
		this->panel10 = (gcnew System::Windows::Forms::Panel());
		this->panel37 = (gcnew System::Windows::Forms::Panel());
		this->panel36 = (gcnew System::Windows::Forms::Panel());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->txtSearch = (gcnew System::Windows::Forms::TextBox());
		this->btnSearchAdmin = (gcnew System::Windows::Forms::Button());
		this->label39 = (gcnew System::Windows::Forms::Label());
		this->label41 = (gcnew System::Windows::Forms::Label());
		this->panel22 = (gcnew System::Windows::Forms::Panel());
		this->panel13 = (gcnew System::Windows::Forms::Panel());
		this->panel35 = (gcnew System::Windows::Forms::Panel());
		this->panel34 = (gcnew System::Windows::Forms::Panel());
		this->panel33 = (gcnew System::Windows::Forms::Panel());
		this->panel32 = (gcnew System::Windows::Forms::Panel());
		this->panel31 = (gcnew System::Windows::Forms::Panel());
		this->btnAddData = (gcnew System::Windows::Forms::Button());
		this->btnBackAd = (gcnew System::Windows::Forms::Button());
		this->btnUpdateAdmin = (gcnew System::Windows::Forms::Button());
		this->btnDelAd = (gcnew System::Windows::Forms::Button());
		this->btnResetADdat = (gcnew System::Windows::Forms::Button());
		this->panel12 = (gcnew System::Windows::Forms::Panel());
		this->label26 = (gcnew System::Windows::Forms::Label());
		this->txtTelephone = (gcnew System::Windows::Forms::TextBox());
		this->label18 = (gcnew System::Windows::Forms::Label());
		this->txtEmail = (gcnew System::Windows::Forms::TextBox());
		this->txtLocation = (gcnew System::Windows::Forms::TextBox());
		this->txtPassword = (gcnew System::Windows::Forms::TextBox());
		this->txtSurname = (gcnew System::Windows::Forms::TextBox());
		this->txtNamef = (gcnew System::Windows::Forms::TextBox());
		this->txtUsername = (gcnew System::Windows::Forms::TextBox());
		this->txtID = (gcnew System::Windows::Forms::TextBox());
		this->label23 = (gcnew System::Windows::Forms::Label());
		this->label27 = (gcnew System::Windows::Forms::Label());
		this->label29 = (gcnew System::Windows::Forms::Label());
		this->label28 = (gcnew System::Windows::Forms::Label());
		this->label44 = (gcnew System::Windows::Forms::Label());
		this->label42 = (gcnew System::Windows::Forms::Label());
		this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
		this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
		this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
		this->printDocument2 = (gcnew System::Drawing::Printing::PrintDocument());
		this->printPreviewDialog2 = (gcnew System::Windows::Forms::PrintPreviewDialog());
		this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
		this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
		this->panel6 = (gcnew System::Windows::Forms::Panel());
		this->labelMainSystem5 = (gcnew System::Windows::Forms::Label());
		this->panelMainSystem1 = (gcnew System::Windows::Forms::Panel());
		this->panelMainSystem2 = (gcnew System::Windows::Forms::Panel());
		this->groupBox5->SuspendLayout();
		this->tbcntrAdmin->SuspendLayout();
		this->tabPage1->SuspendLayout();
		this->panel4->SuspendLayout();
		this->panel7->SuspendLayout();
		this->groupBox4->SuspendLayout();
		this->panel3->SuspendLayout();
		this->groupBox2->SuspendLayout();
		this->panel5->SuspendLayout();
		this->panel2->SuspendLayout();
		this->groupBox3->SuspendLayout();
		this->panel1->SuspendLayout();
		this->panel8->SuspendLayout();
		this->panel9->SuspendLayout();
		this->tabPage2->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
		this->tabPage3->SuspendLayout();
		this->panel15->SuspendLayout();
		this->panel14->SuspendLayout();
		this->panel11->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
		this->tabPage4->SuspendLayout();
		this->panel21->SuspendLayout();
		this->dataGridView->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
		this->panel10->SuspendLayout();
		this->panel22->SuspendLayout();
		this->panel13->SuspendLayout();
		this->panel12->SuspendLayout();
		this->panel6->SuspendLayout();
		this->SuspendLayout();
		// 
		// groupBox5
		// 
		this->groupBox5->BackColor = System::Drawing::Color::Black;
		this->groupBox5->Controls->Add(this->tbcntrAdmin);
		this->groupBox5->ForeColor = System::Drawing::Color::White;
		this->groupBox5->Location = System::Drawing::Point(-13, 109);
		this->groupBox5->Name = L"groupBox5";
		this->groupBox5->Size = System::Drawing::Size(1443, 628);
		this->groupBox5->TabIndex = 12;
		this->groupBox5->TabStop = false;
		// 
		// tbcntrAdmin
		// 
		this->tbcntrAdmin->Alignment = System::Windows::Forms::TabAlignment::Left;
		this->tbcntrAdmin->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->tbcntrAdmin->Controls->Add(this->tabPage1);
		this->tbcntrAdmin->Controls->Add(this->tabPage2);
		this->tbcntrAdmin->Controls->Add(this->tabPage3);
		this->tbcntrAdmin->Controls->Add(this->tabPage4);
		this->tbcntrAdmin->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->tbcntrAdmin->Location = System::Drawing::Point(6, 13);
		this->tbcntrAdmin->Multiline = true;
		this->tbcntrAdmin->Name = L"tbcntrAdmin";
		this->tbcntrAdmin->SelectedIndex = 0;
		this->tbcntrAdmin->Size = System::Drawing::Size(1449, 622);
		this->tbcntrAdmin->TabIndex = 2;
		// 
		// tabPage1
		// 
		this->tabPage1->AutoScroll = true;
		this->tabPage1->BackColor = System::Drawing::Color::Transparent;
		this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
		this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->tabPage1->Controls->Add(this->panel4);
		this->tabPage1->Controls->Add(this->panel7);
		this->tabPage1->Controls->Add(this->groupBox4);
		this->tabPage1->Controls->Add(this->progressBar1);
		this->tabPage1->Controls->Add(this->groupBox2);
		this->tabPage1->Controls->Add(this->groupBox3);
		this->tabPage1->Controls->Add(this->label30);
		this->tabPage1->Controls->Add(this->lblUserin);
		this->tabPage1->Controls->Add(this->panel8);
		this->tabPage1->Location = System::Drawing::Point(48, 4);
		this->tabPage1->Name = L"tabPage1";
		this->tabPage1->Padding = System::Windows::Forms::Padding(3);
		this->tabPage1->Size = System::Drawing::Size(1397, 614);
		this->tabPage1->TabIndex = 0;
		this->tabPage1->Text = L"Booking";
		// 
		// panel4
		// 
		this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel4->Controls->Add(this->panel24);
		this->panel4->Controls->Add(this->panel23);
		this->panel4->Controls->Add(this->panel20);
		this->panel4->Controls->Add(this->panel19);
		this->panel4->Controls->Add(this->btnAudio);
		this->panel4->Controls->Add(this->btnTotal);
		this->panel4->Controls->Add(this->btnClear);
		this->panel4->Controls->Add(this->lblTotal);
		this->panel4->Controls->Add(this->label7);
		this->panel4->Controls->Add(this->lblVAT);
		this->panel4->Controls->Add(this->label6);
		this->panel4->Controls->Add(this->button1);
		this->panel4->Controls->Add(this->lblSubtotal);
		this->panel4->Controls->Add(this->label5);
		this->panel4->Location = System::Drawing::Point(1033, 326);
		this->panel4->Name = L"panel4";
		this->panel4->Size = System::Drawing::Size(352, 264);
		this->panel4->TabIndex = 14;
		// 
		// panel24
		// 
		this->panel24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel24.BackgroundImage")));
		this->panel24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel24->Location = System::Drawing::Point(317, 215);
		this->panel24->Name = L"panel24";
		this->panel24->Size = System::Drawing::Size(22, 32);
		this->panel24->TabIndex = 54;
		// 
		// panel23
		// 
		this->panel23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel23.BackgroundImage")));
		this->panel23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel23->Location = System::Drawing::Point(234, 215);
		this->panel23->Name = L"panel23";
		this->panel23->Size = System::Drawing::Size(22, 32);
		this->panel23->TabIndex = 53;
		// 
		// panel20
		// 
		this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel20.BackgroundImage")));
		this->panel20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel20->Location = System::Drawing::Point(152, 215);
		this->panel20->Name = L"panel20";
		this->panel20->Size = System::Drawing::Size(22, 32);
		this->panel20->TabIndex = 52;
		// 
		// panel19
		// 
		this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel19.BackgroundImage")));
		this->panel19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel19->Location = System::Drawing::Point(64, 215);
		this->panel19->Name = L"panel19";
		this->panel19->Size = System::Drawing::Size(22, 32);
		this->panel19->TabIndex = 51;
		// 
		// btnAudio
		// 
		this->btnAudio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnAudio->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnAudio->FlatAppearance->BorderSize = 0;
		this->btnAudio->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), 
			static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
		this->btnAudio->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnAudio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnAudio->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnAudio->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnAudio->Location = System::Drawing::Point(94, 204);
		this->btnAudio->Name = L"btnAudio";
		this->btnAudio->Size = System::Drawing::Size(81, 53);
		this->btnAudio->TabIndex = 30;
		this->btnAudio->Text = L"Speech";
		this->btnAudio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnAudio->UseVisualStyleBackColor = false;
		this->btnAudio->Click += gcnew System::EventHandler(this, &Form2::btnAudio_Click);
		// 
		// btnTotal
		// 
		this->btnTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(209)), 
			static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnTotal->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnTotal->FlatAppearance->BorderSize = 0;
		this->btnTotal->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), 
			static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(6)));
		this->btnTotal->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnTotal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnTotal->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnTotal->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnTotal->Location = System::Drawing::Point(9, 204);
		this->btnTotal->Name = L"btnTotal";
		this->btnTotal->Size = System::Drawing::Size(81, 53);
		this->btnTotal->TabIndex = 18;
		this->btnTotal->Text = L"Enter";
		this->btnTotal->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnTotal->UseVisualStyleBackColor = false;
		this->btnTotal->Click += gcnew System::EventHandler(this, &Form2::btnTotal_Click);
		// 
		// btnClear
		// 
		this->btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnClear->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnClear->FlatAppearance->BorderSize = 0;
		this->btnClear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->btnClear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnClear->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnClear->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnClear->Location = System::Drawing::Point(179, 204);
		this->btnClear->Name = L"btnClear";
		this->btnClear->Size = System::Drawing::Size(81, 53);
		this->btnClear->TabIndex = 17;
		this->btnClear->Text = L"Clear";
		this->btnClear->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnClear->UseVisualStyleBackColor = false;
		this->btnClear->Click += gcnew System::EventHandler(this, &Form2::btnClear_Click);
		// 
		// lblTotal
		// 
		this->lblTotal->AutoSize = true;
		this->lblTotal->BackColor = System::Drawing::Color::White;
		this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->lblTotal->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->lblTotal->ForeColor = System::Drawing::SystemColors::Desktop;
		this->lblTotal->Location = System::Drawing::Point(191, 134);
		this->lblTotal->Name = L"lblTotal";
		this->lblTotal->Size = System::Drawing::Size(107, 26);
		this->lblTotal->TabIndex = 16;
		this->lblTotal->Text = L"                   ";
		this->lblTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label7->Location = System::Drawing::Point(12, 134);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(70, 28);
		this->label7->TabIndex = 15;
		this->label7->Text = L"Total";
		// 
		// lblVAT
		// 
		this->lblVAT->AutoSize = true;
		this->lblVAT->BackColor = System::Drawing::Color::White;
		this->lblVAT->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->lblVAT->ForeColor = System::Drawing::SystemColors::Desktop;
		this->lblVAT->Location = System::Drawing::Point(193, 76);
		this->lblVAT->Name = L"lblVAT";
		this->lblVAT->Size = System::Drawing::Size(105, 24);
		this->lblVAT->TabIndex = 14;
		this->lblVAT->Text = L"                   ";
		this->lblVAT->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label6->Location = System::Drawing::Point(13, 77);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(66, 24);
		this->label6->TabIndex = 13;
		this->label6->Text = L"V.A.T";
		// 
		// button1
		// 
		this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
		this->button1->FlatAppearance->BorderSize = 0;
		this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->button1->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button1->Location = System::Drawing::Point(263, 204);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(81, 53);
		this->button1->TabIndex = 28;
		this->button1->Text = L"Logout";
		this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button1->UseVisualStyleBackColor = false;
		this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
		// 
		// lblSubtotal
		// 
		this->lblSubtotal->AutoSize = true;
		this->lblSubtotal->BackColor = System::Drawing::Color::White;
		this->lblSubtotal->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->lblSubtotal->ForeColor = System::Drawing::SystemColors::Desktop;
		this->lblSubtotal->Location = System::Drawing::Point(193, 8);
		this->lblSubtotal->Name = L"lblSubtotal";
		this->lblSubtotal->Size = System::Drawing::Size(105, 24);
		this->lblSubtotal->TabIndex = 12;
		this->lblSubtotal->Text = L"                   ";
		this->lblSubtotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label5->Location = System::Drawing::Point(13, 11);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(106, 24);
		this->label5->TabIndex = 1;
		this->label5->Text = L"Sub Total";
		// 
		// panel7
		// 
		this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel7->Controls->Add(this->btnCC);
		this->panel7->Controls->Add(this->panel18);
		this->panel7->Controls->Add(this->panel17);
		this->panel7->Controls->Add(this->panel16);
		this->panel7->Controls->Add(this->btnCancel);
		this->panel7->Controls->Add(this->button2);
		this->panel7->Controls->Add(this->btnCO);
		this->panel7->Controls->Add(this->lblCC);
		this->panel7->Controls->Add(this->txtCC);
		this->panel7->Controls->Add(this->cmbCC);
		this->panel7->Location = System::Drawing::Point(615, 326);
		this->panel7->Name = L"panel7";
		this->panel7->Size = System::Drawing::Size(358, 264);
		this->panel7->TabIndex = 15;
		// 
		// btnCC
		// 
		this->btnCC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(233)), 
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnCC->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnCC->ForeColor = System::Drawing::Color::Red;
		this->btnCC->Location = System::Drawing::Point(0, -1);
		this->btnCC->Name = L"btnCC";
		this->btnCC->Size = System::Drawing::Size(358, 264);
		this->btnCC->TabIndex = 18;
		this->btnCC->Text = L"Currency Conveter";
		this->btnCC->UseVisualStyleBackColor = false;
		this->btnCC->Click += gcnew System::EventHandler(this, &Form2::btnCC_Click);
		// 
		// panel18
		// 
		this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel18.BackgroundImage")));
		this->panel18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel18->Location = System::Drawing::Point(316, 212);
		this->panel18->Name = L"panel18";
		this->panel18->Size = System::Drawing::Size(22, 32);
		this->panel18->TabIndex = 50;
		// 
		// panel17
		// 
		this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel17.BackgroundImage")));
		this->panel17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel17->Location = System::Drawing::Point(205, 212);
		this->panel17->Name = L"panel17";
		this->panel17->Size = System::Drawing::Size(22, 32);
		this->panel17->TabIndex = 49;
		// 
		// panel16
		// 
		this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel16.BackgroundImage")));
		this->panel16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel16->Location = System::Drawing::Point(90, 212);
		this->panel16->Name = L"panel16";
		this->panel16->Size = System::Drawing::Size(22, 32);
		this->panel16->TabIndex = 48;
		// 
		// btnCancel
		// 
		this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnCancel->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnCancel->FlatAppearance->BorderSize = 0;
		this->btnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->btnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnCancel->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnCancel->Location = System::Drawing::Point(238, 203);
		this->btnCancel->Name = L"btnCancel";
		this->btnCancel->Size = System::Drawing::Size(109, 53);
		this->btnCancel->TabIndex = 17;
		this->btnCancel->Text = L"Cancel";
		this->btnCancel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnCancel->UseVisualStyleBackColor = false;
		this->btnCancel->Click += gcnew System::EventHandler(this, &Form2::btnCancel_Click);
		// 
		// button2
		// 
		this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->button2->FlatAppearance->BorderSize = 0;
		this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->button2->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button2->Location = System::Drawing::Point(124, 203);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(109, 53);
		this->button2->TabIndex = 16;
		this->button2->Text = L"Reset";
		this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button2->UseVisualStyleBackColor = false;
		this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
		// 
		// btnCO
		// 
		this->btnCO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnCO->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnCO->FlatAppearance->BorderSize = 0;
		this->btnCO->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), 
			static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(6)));
		this->btnCO->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnCO->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnCO->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnCO->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnCO->Location = System::Drawing::Point(10, 203);
		this->btnCO->Name = L"btnCO";
		this->btnCO->Size = System::Drawing::Size(109, 53);
		this->btnCO->TabIndex = 15;
		this->btnCO->Text = L"Convert";
		this->btnCO->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnCO->UseVisualStyleBackColor = false;
		this->btnCO->Click += gcnew System::EventHandler(this, &Form2::btnCO_Click);
		// 
		// lblCC
		// 
		this->lblCC->AutoSize = true;
		this->lblCC->BackColor = System::Drawing::Color::White;
		this->lblCC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->lblCC->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->lblCC->ForeColor = System::Drawing::Color::Black;
		this->lblCC->Location = System::Drawing::Point(105, 138);
		this->lblCC->Name = L"lblCC";
		this->lblCC->Size = System::Drawing::Size(107, 24);
		this->lblCC->TabIndex = 14;
		this->lblCC->Text = L"                   ";
		// 
		// txtCC
		// 
		this->txtCC->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtCC->Location = System::Drawing::Point(74, 76);
		this->txtCC->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtCC->Name = L"txtCC";
		this->txtCC->Size = System::Drawing::Size(189, 32);
		this->txtCC->TabIndex = 5;
		this->txtCC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// cmbCC
		// 
		this->cmbCC->BackColor = System::Drawing::Color::White;
		this->cmbCC->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->cmbCC->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->cmbCC->ForeColor = System::Drawing::Color::Black;
		this->cmbCC->FormattingEnabled = true;
		this->cmbCC->Location = System::Drawing::Point(74, 15);
		this->cmbCC->Name = L"cmbCC";
		this->cmbCC->Size = System::Drawing::Size(189, 26);
		this->cmbCC->TabIndex = 4;
		this->cmbCC->Text = L"Select";
		// 
		// groupBox4
		// 
		this->groupBox4->BackColor = System::Drawing::Color::Transparent;
		this->groupBox4->Controls->Add(this->panel3);
		this->groupBox4->Controls->Add(this->label4);
		this->groupBox4->ForeColor = System::Drawing::Color::White;
		this->groupBox4->Location = System::Drawing::Point(615, -5);
		this->groupBox4->Name = L"groupBox4";
		this->groupBox4->Size = System::Drawing::Size(234, 318);
		this->groupBox4->TabIndex = 9;
		this->groupBox4->TabStop = false;
		// 
		// panel3
		// 
		this->panel3->Controls->Add(this->rbGroup);
		this->panel3->Controls->Add(this->rbSingle);
		this->panel3->Controls->Add(this->rbDouble);
		this->panel3->Location = System::Drawing::Point(7, 54);
		this->panel3->Name = L"panel3";
		this->panel3->Size = System::Drawing::Size(221, 239);
		this->panel3->TabIndex = 2;
		// 
		// rbGroup
		// 
		this->rbGroup->AutoSize = true;
		this->rbGroup->BackColor = System::Drawing::Color::White;
		this->rbGroup->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbGroup->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbGroup->Location = System::Drawing::Point(35, 9);
		this->rbGroup->Name = L"rbGroup";
		this->rbGroup->Size = System::Drawing::Size(115, 36);
		this->rbGroup->TabIndex = 7;
		this->rbGroup->Text = L"Group";
		this->rbGroup->UseVisualStyleBackColor = false;
		// 
		// rbSingle
		// 
		this->rbSingle->AutoSize = true;
		this->rbSingle->BackColor = System::Drawing::Color::White;
		this->rbSingle->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbSingle->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbSingle->Location = System::Drawing::Point(35, 86);
		this->rbSingle->Name = L"rbSingle";
		this->rbSingle->Size = System::Drawing::Size(114, 36);
		this->rbSingle->TabIndex = 6;
		this->rbSingle->Text = L"Single";
		this->rbSingle->UseVisualStyleBackColor = false;
		// 
		// rbDouble
		// 
		this->rbDouble->AutoSize = true;
		this->rbDouble->BackColor = System::Drawing::Color::White;
		this->rbDouble->Checked = true;
		this->rbDouble->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbDouble->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbDouble->Location = System::Drawing::Point(35, 171);
		this->rbDouble->Name = L"rbDouble";
		this->rbDouble->Size = System::Drawing::Size(125, 36);
		this->rbDouble->TabIndex = 5;
		this->rbDouble->TabStop = true;
		this->rbDouble->Text = L"Double";
		this->rbDouble->UseVisualStyleBackColor = false;
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label4->Location = System::Drawing::Point(37, 22);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(138, 26);
		this->label4->TabIndex = 1;
		this->label4->Text = L"Ticket Type";
		// 
		// progressBar1
		// 
		this->progressBar1->ForeColor = System::Drawing::Color::LawnGreen;
		this->progressBar1->Location = System::Drawing::Point(8, 594);
		this->progressBar1->MarqueeAnimationSpeed = 300;
		this->progressBar1->Name = L"progressBar1";
		this->progressBar1->Size = System::Drawing::Size(252, 17);
		this->progressBar1->TabIndex = 52;
		// 
		// groupBox2
		// 
		this->groupBox2->BackColor = System::Drawing::Color::Transparent;
		this->groupBox2->Controls->Add(this->panel5);
		this->groupBox2->Controls->Add(this->panel2);
		this->groupBox2->Controls->Add(this->label3);
		this->groupBox2->ForeColor = System::Drawing::Color::White;
		this->groupBox2->Location = System::Drawing::Point(872, -7);
		this->groupBox2->Name = L"groupBox2";
		this->groupBox2->Size = System::Drawing::Size(234, 318);
		this->groupBox2->TabIndex = 8;
		this->groupBox2->TabStop = false;
		// 
		// panel5
		// 
		this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel5->Controls->Add(this->lblEventT);
		this->panel5->Controls->Add(this->rbOther);
		this->panel5->Controls->Add(this->rbFootball);
		this->panel5->Location = System::Drawing::Point(13, 185);
		this->panel5->Name = L"panel5";
		this->panel5->Size = System::Drawing::Size(215, 108);
		this->panel5->TabIndex = 6;
		// 
		// lblEventT
		// 
		this->lblEventT->AutoSize = true;
		this->lblEventT->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->lblEventT->Location = System::Drawing::Point(67, 10);
		this->lblEventT->Name = L"lblEventT";
		this->lblEventT->Size = System::Drawing::Size(73, 26);
		this->lblEventT->TabIndex = 4;
		this->lblEventT->Text = L"Event";
		// 
		// rbOther
		// 
		this->rbOther->AutoSize = true;
		this->rbOther->BackColor = System::Drawing::Color::White;
		this->rbOther->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbOther->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbOther->Location = System::Drawing::Point(130, 56);
		this->rbOther->Name = L"rbOther";
		this->rbOther->Size = System::Drawing::Size(80, 26);
		this->rbOther->TabIndex = 3;
		this->rbOther->Text = L"Other";
		this->rbOther->UseVisualStyleBackColor = false;
		// 
		// rbFootball
		// 
		this->rbFootball->AutoSize = true;
		this->rbFootball->BackColor = System::Drawing::Color::White;
		this->rbFootball->Checked = true;
		this->rbFootball->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbFootball->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbFootball->Location = System::Drawing::Point(3, 56);
		this->rbFootball->Name = L"rbFootball";
		this->rbFootball->Size = System::Drawing::Size(101, 26);
		this->rbFootball->TabIndex = 2;
		this->rbFootball->TabStop = true;
		this->rbFootball->Text = L"Football";
		this->rbFootball->UseVisualStyleBackColor = false;
		// 
		// panel2
		// 
		this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel2->Controls->Add(this->cmbStadium);
		this->panel2->Controls->Add(this->rbChild);
		this->panel2->Controls->Add(this->rbAdult);
		this->panel2->Location = System::Drawing::Point(13, 54);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(215, 140);
		this->panel2->TabIndex = 5;
		// 
		// cmbStadium
		// 
		this->cmbStadium->BackColor = System::Drawing::Color::White;
		this->cmbStadium->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->cmbStadium->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->cmbStadium->ForeColor = System::Drawing::Color::Black;
		this->cmbStadium->FormattingEnabled = true;
		this->cmbStadium->Location = System::Drawing::Point(9, 8);
		this->cmbStadium->Name = L"cmbStadium";
		this->cmbStadium->Size = System::Drawing::Size(189, 26);
		this->cmbStadium->TabIndex = 4;
		this->cmbStadium->Text = L"Select";
		// 
		// rbChild
		// 
		this->rbChild->AutoSize = true;
		this->rbChild->BackColor = System::Drawing::Color::White;
		this->rbChild->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbChild->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbChild->Location = System::Drawing::Point(128, 55);
		this->rbChild->Name = L"rbChild";
		this->rbChild->Size = System::Drawing::Size(82, 28);
		this->rbChild->TabIndex = 3;
		this->rbChild->Text = L"Child";
		this->rbChild->UseVisualStyleBackColor = false;
		// 
		// rbAdult
		// 
		this->rbAdult->AutoSize = true;
		this->rbAdult->BackColor = System::Drawing::Color::White;
		this->rbAdult->Checked = true;
		this->rbAdult->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbAdult->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbAdult->Location = System::Drawing::Point(3, 56);
		this->rbAdult->Name = L"rbAdult";
		this->rbAdult->Size = System::Drawing::Size(82, 28);
		this->rbAdult->TabIndex = 2;
		this->rbAdult->TabStop = true;
		this->rbAdult->Text = L"Adult\r\n";
		this->rbAdult->UseVisualStyleBackColor = false;
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label3->Location = System::Drawing::Point(55, 24);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(100, 26);
		this->label3->TabIndex = 1;
		this->label3->Text = L"Stadium";
		// 
		// groupBox3
		// 
		this->groupBox3->BackColor = System::Drawing::Color::Transparent;
		this->groupBox3->Controls->Add(this->label2);
		this->groupBox3->Controls->Add(this->panel1);
		this->groupBox3->ForeColor = System::Drawing::Color::White;
		this->groupBox3->Location = System::Drawing::Point(1129, -7);
		this->groupBox3->Name = L"groupBox3";
		this->groupBox3->Size = System::Drawing::Size(256, 318);
		this->groupBox3->TabIndex = 7;
		this->groupBox3->TabStop = false;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label2->Location = System::Drawing::Point(83, 24);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(71, 26);
		this->label2->TabIndex = 0;
		this->label2->Text = L"Class";
		// 
		// panel1
		// 
		this->panel1->Controls->Add(this->rbVVip);
		this->panel1->Controls->Add(this->rbStandard);
		this->panel1->Controls->Add(this->rbVip);
		this->panel1->Location = System::Drawing::Point(20, 54);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(215, 239);
		this->panel1->TabIndex = 4;
		// 
		// rbVVip
		// 
		this->rbVVip->AutoSize = true;
		this->rbVVip->BackColor = System::Drawing::Color::White;
		this->rbVVip->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbVVip->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbVVip->Location = System::Drawing::Point(20, 171);
		this->rbVVip->Name = L"rbVVip";
		this->rbVVip->Size = System::Drawing::Size(121, 36);
		this->rbVVip->TabIndex = 3;
		this->rbVVip->Text = L"V.V.I.P";
		this->rbVVip->UseVisualStyleBackColor = false;
		// 
		// rbStandard
		// 
		this->rbStandard->AutoSize = true;
		this->rbStandard->BackColor = System::Drawing::Color::White;
		this->rbStandard->Checked = true;
		this->rbStandard->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbStandard->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbStandard->Location = System::Drawing::Point(20, 5);
		this->rbStandard->Name = L"rbStandard";
		this->rbStandard->Size = System::Drawing::Size(155, 36);
		this->rbStandard->TabIndex = 1;
		this->rbStandard->TabStop = true;
		this->rbStandard->Text = L"Standard\r\n";
		this->rbStandard->UseVisualStyleBackColor = false;
		// 
		// rbVip
		// 
		this->rbVip->AutoSize = true;
		this->rbVip->BackColor = System::Drawing::Color::White;
		this->rbVip->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rbVip->ForeColor = System::Drawing::SystemColors::Desktop;
		this->rbVip->Location = System::Drawing::Point(23, 86);
		this->rbVip->Name = L"rbVip";
		this->rbVip->Size = System::Drawing::Size(94, 36);
		this->rbVip->TabIndex = 2;
		this->rbVip->Text = L"V.I.P";
		this->rbVip->UseVisualStyleBackColor = false;
		// 
		// label30
		// 
		this->label30->AutoSize = true;
		this->label30->Font = (gcnew System::Drawing::Font(L"Impact", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label30->ForeColor = System::Drawing::Color::Gold;
		this->label30->Location = System::Drawing::Point(553, 595);
		this->label30->Name = L"label30";
		this->label30->Size = System::Drawing::Size(57, 16);
		this->label30->TabIndex = 48;
		this->label30->Text = L"Session    :";
		this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// lblUserin
		// 
		this->lblUserin->AutoSize = true;
		this->lblUserin->Font = (gcnew System::Drawing::Font(L"Impact", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->lblUserin->ForeColor = System::Drawing::Color::Gold;
		this->lblUserin->Location = System::Drawing::Point(612, 595);
		this->lblUserin->Name = L"lblUserin";
		this->lblUserin->Size = System::Drawing::Size(46, 16);
		this->lblUserin->TabIndex = 47;
		this->lblUserin->Text = L"e.aisam";
		this->lblUserin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// panel8
		// 
		this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel8->Controls->Add(this->label10);
		this->panel8->Controls->Add(this->panel9);
		this->panel8->Location = System::Drawing::Point(6, 0);
		this->panel8->Name = L"panel8";
		this->panel8->Size = System::Drawing::Size(603, 590);
		this->panel8->TabIndex = 1;
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label10->Location = System::Drawing::Point(192, 4);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(165, 24);
		this->label10->TabIndex = 1;
		this->label10->Text = L"EVENT TICKET";
		// 
		// panel9
		// 
		this->panel9->Controls->Add(this->txtBarcode);
		this->panel9->Controls->Add(this->lblHolder);
		this->panel9->Controls->Add(this->txtHolder);
		this->panel9->Controls->Add(this->label1);
		this->panel9->Controls->Add(this->lblSit);
		this->panel9->Controls->Add(this->txtClass);
		this->panel9->Controls->Add(this->label25);
		this->panel9->Controls->Add(this->txtStadium);
		this->panel9->Controls->Add(this->txtDate);
		this->panel9->Controls->Add(this->txtTime);
		this->panel9->Controls->Add(this->txtPrice);
		this->panel9->Controls->Add(this->txtRefno);
		this->panel9->Controls->Add(this->txtAdult);
		this->panel9->Controls->Add(this->txtChild);
		this->panel9->Controls->Add(this->txtTicketype);
		this->panel9->Controls->Add(this->txtEventicket);
		this->panel9->Controls->Add(this->label16);
		this->panel9->Controls->Add(this->label15);
		this->panel9->Controls->Add(this->label9);
		this->panel9->Controls->Add(this->label8);
		this->panel9->Controls->Add(this->label14);
		this->panel9->Controls->Add(this->label13);
		this->panel9->Controls->Add(this->label12);
		this->panel9->Controls->Add(this->label11);
		this->panel9->Location = System::Drawing::Point(15, 31);
		this->panel9->Name = L"panel9";
		this->panel9->Size = System::Drawing::Size(565, 557);
		this->panel9->TabIndex = 0;
		// 
		// txtBarcode
		// 
		this->txtBarcode->Font = (gcnew System::Drawing::Font(L"CCode39", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtBarcode->Location = System::Drawing::Point(286, 493);
		this->txtBarcode->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtBarcode->Multiline = true;
		this->txtBarcode->Name = L"txtBarcode";
		this->txtBarcode->Size = System::Drawing::Size(266, 54);
		this->txtBarcode->TabIndex = 51;
		this->txtBarcode->Text = L"Barcode";
		this->txtBarcode->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// lblHolder
		// 
		this->lblHolder->AutoSize = true;
		this->lblHolder->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Bold));
		this->lblHolder->Location = System::Drawing::Point(33, 438);
		this->lblHolder->Name = L"lblHolder";
		this->lblHolder->Size = System::Drawing::Size(164, 26);
		this->lblHolder->TabIndex = 50;
		this->lblHolder->Text = L"Holder Name";
		// 
		// txtHolder
		// 
		this->txtHolder->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtHolder->Location = System::Drawing::Point(286, 438);
		this->txtHolder->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtHolder->Multiline = true;
		this->txtHolder->Name = L"txtHolder";
		this->txtHolder->Size = System::Drawing::Size(266, 53);
		this->txtHolder->TabIndex = 49;
		this->txtHolder->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Bold));
		this->label1->Location = System::Drawing::Point(33, 352);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(84, 26);
		this->label1->TabIndex = 47;
		this->label1->Text = L"Venue";
		// 
		// lblSit
		// 
		this->lblSit->AutoSize = true;
		this->lblSit->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->lblSit->Location = System::Drawing::Point(3, 493);
		this->lblSit->Name = L"lblSit";
		this->lblSit->Size = System::Drawing::Size(245, 40);
		this->lblSit->TabIndex = 46;
		this->lblSit->Text = L"Sitting Position";
		// 
		// txtClass
		// 
		this->txtClass->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtClass->Location = System::Drawing::Point(286, 395);
		this->txtClass->Multiline = true;
		this->txtClass->Name = L"txtClass";
		this->txtClass->Size = System::Drawing::Size(266, 53);
		this->txtClass->TabIndex = 44;
		this->txtClass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label25
		// 
		this->label25->AutoSize = true;
		this->label25->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Bold));
		this->label25->Location = System::Drawing::Point(30, 395);
		this->label25->Name = L"label25";
		this->label25->Size = System::Drawing::Size(149, 26);
		this->label25->TabIndex = 43;
		this->label25->Text = L"Ticket Type";
		// 
		// txtStadium
		// 
		this->txtStadium->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F));
		this->txtStadium->Location = System::Drawing::Point(286, 352);
		this->txtStadium->Multiline = true;
		this->txtStadium->Name = L"txtStadium";
		this->txtStadium->Size = System::Drawing::Size(266, 53);
		this->txtStadium->TabIndex = 41;
		this->txtStadium->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtDate
		// 
		this->txtDate->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F));
		this->txtDate->Location = System::Drawing::Point(286, 308);
		this->txtDate->Multiline = true;
		this->txtDate->Name = L"txtDate";
		this->txtDate->Size = System::Drawing::Size(266, 53);
		this->txtDate->TabIndex = 40;
		this->txtDate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtTime
		// 
		this->txtTime->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F));
		this->txtTime->Location = System::Drawing::Point(286, 264);
		this->txtTime->Multiline = true;
		this->txtTime->Name = L"txtTime";
		this->txtTime->Size = System::Drawing::Size(266, 53);
		this->txtTime->TabIndex = 39;
		this->txtTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtPrice
		// 
		this->txtPrice->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F));
		this->txtPrice->Location = System::Drawing::Point(286, 220);
		this->txtPrice->Multiline = true;
		this->txtPrice->Name = L"txtPrice";
		this->txtPrice->Size = System::Drawing::Size(266, 53);
		this->txtPrice->TabIndex = 38;
		this->txtPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtRefno
		// 
		this->txtRefno->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F));
		this->txtRefno->Location = System::Drawing::Point(286, 176);
		this->txtRefno->Multiline = true;
		this->txtRefno->Name = L"txtRefno";
		this->txtRefno->Size = System::Drawing::Size(266, 53);
		this->txtRefno->TabIndex = 37;
		this->txtRefno->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtAdult
		// 
		this->txtAdult->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F));
		this->txtAdult->Location = System::Drawing::Point(286, 132);
		this->txtAdult->Multiline = true;
		this->txtAdult->Name = L"txtAdult";
		this->txtAdult->Size = System::Drawing::Size(266, 53);
		this->txtAdult->TabIndex = 36;
		this->txtAdult->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtChild
		// 
		this->txtChild->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F));
		this->txtChild->Location = System::Drawing::Point(286, 88);
		this->txtChild->Multiline = true;
		this->txtChild->Name = L"txtChild";
		this->txtChild->Size = System::Drawing::Size(266, 53);
		this->txtChild->TabIndex = 35;
		this->txtChild->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtTicketype
		// 
		this->txtTicketype->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F));
		this->txtTicketype->Location = System::Drawing::Point(286, 46);
		this->txtTicketype->Multiline = true;
		this->txtTicketype->Name = L"txtTicketype";
		this->txtTicketype->Size = System::Drawing::Size(266, 53);
		this->txtTicketype->TabIndex = 34;
		this->txtTicketype->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtEventicket
		// 
		this->txtEventicket->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F));
		this->txtEventicket->ForeColor = System::Drawing::SystemColors::Desktop;
		this->txtEventicket->Location = System::Drawing::Point(286, 3);
		this->txtEventicket->Multiline = true;
		this->txtEventicket->Name = L"txtEventicket";
		this->txtEventicket->Size = System::Drawing::Size(266, 53);
		this->txtEventicket->TabIndex = 33;
		this->txtEventicket->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label16
		// 
		this->label16->AutoSize = true;
		this->label16->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label16->Location = System::Drawing::Point(30, 220);
		this->label16->Name = L"label16";
		this->label16->Size = System::Drawing::Size(68, 24);
		this->label16->TabIndex = 25;
		this->label16->Text = L"Price";
		// 
		// label15
		// 
		this->label15->AutoSize = true;
		this->label15->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label15->Location = System::Drawing::Point(33, 303);
		this->label15->Name = L"label15";
		this->label15->Size = System::Drawing::Size(61, 24);
		this->label15->TabIndex = 23;
		this->label15->Text = L"Date";
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label9->Location = System::Drawing::Point(30, 264);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(64, 24);
		this->label9->TabIndex = 21;
		this->label9->Text = L"Time";
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label8->Location = System::Drawing::Point(29, 176);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(231, 26);
		this->label8->TabIndex = 19;
		this->label8->Text = L"Reference Number";
		// 
		// label14
		// 
		this->label14->AutoSize = true;
		this->label14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label14->Location = System::Drawing::Point(30, 89);
		this->label14->Name = L"label14";
		this->label14->Size = System::Drawing::Size(69, 24);
		this->label14->TabIndex = 17;
		this->label14->Text = L"Child";
		// 
		// label13
		// 
		this->label13->AutoSize = true;
		this->label13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label13->Location = System::Drawing::Point(30, 132);
		this->label13->Name = L"label13";
		this->label13->Size = System::Drawing::Size(69, 24);
		this->label13->TabIndex = 15;
		this->label13->Text = L"Adult";
		// 
		// label12
		// 
		this->label12->AutoSize = true;
		this->label12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label12->Location = System::Drawing::Point(29, 46);
		this->label12->Name = L"label12";
		this->label12->Size = System::Drawing::Size(78, 27);
		this->label12->TabIndex = 13;
		this->label12->Text = L"Class";
		// 
		// label11
		// 
		this->label11->AutoSize = true;
		this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label11->Location = System::Drawing::Point(29, 3);
		this->label11->Name = L"label11";
		this->label11->Size = System::Drawing::Size(80, 27);
		this->label11->TabIndex = 2;
		this->label11->Text = L"Event";
		// 
		// tabPage2
		// 
		this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
		this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->tabPage2->Controls->Add(this->panel26);
		this->tabPage2->Controls->Add(this->panel25);
		this->tabPage2->Controls->Add(this->txtApproved);
		this->tabPage2->Controls->Add(this->pictureBox2);
		this->tabPage2->Controls->Add(this->pictureBox1);
		this->tabPage2->Controls->Add(this->btbBackRec);
		this->tabPage2->Controls->Add(this->btnPrintReceipt);
		this->tabPage2->Controls->Add(this->rtbReceipt);
		this->tabPage2->Location = System::Drawing::Point(48, 4);
		this->tabPage2->Name = L"tabPage2";
		this->tabPage2->Padding = System::Windows::Forms::Padding(3);
		this->tabPage2->Size = System::Drawing::Size(1397, 614);
		this->tabPage2->TabIndex = 1;
		this->tabPage2->Text = L"Receipt";
		this->tabPage2->UseVisualStyleBackColor = true;
		// 
		// panel26
		// 
		this->panel26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel26.BackgroundImage")));
		this->panel26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel26->Location = System::Drawing::Point(129, 280);
		this->panel26->Name = L"panel26";
		this->panel26->Size = System::Drawing::Size(56, 41);
		this->panel26->TabIndex = 50;
		// 
		// panel25
		// 
		this->panel25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel25.BackgroundImage")));
		this->panel25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel25->Location = System::Drawing::Point(129, 497);
		this->panel25->Name = L"panel25";
		this->panel25->Size = System::Drawing::Size(56, 41);
		this->panel25->TabIndex = 49;
		// 
		// txtApproved
		// 
		this->txtApproved->Location = System::Drawing::Point(1224, 190);
		this->txtApproved->Name = L"txtApproved";
		this->txtApproved->Size = System::Drawing::Size(100, 45);
		this->txtApproved->TabIndex = 38;
		this->txtApproved->Text = L"Approved";
		this->txtApproved->Visible = false;
		// 
		// pictureBox2
		// 
		this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
		this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->pictureBox2->ImageLocation = L"N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION";
		this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.InitialImage")));
		this->pictureBox2->Location = System::Drawing::Point(1249, 99);
		this->pictureBox2->Name = L"pictureBox2";
		this->pictureBox2->Size = System::Drawing::Size(76, 80);
		this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->pictureBox2->TabIndex = 37;
		this->pictureBox2->TabStop = false;
		this->pictureBox2->Visible = false;
		// 
		// pictureBox1
		// 
		this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
		this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->pictureBox1->ImageLocation = L"N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION";
		this->pictureBox1->Location = System::Drawing::Point(1248, 6);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(76, 80);
		this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->pictureBox1->TabIndex = 36;
		this->pictureBox1->TabStop = false;
		this->pictureBox1->Visible = false;
		// 
		// btbBackRec
		// 
		this->btbBackRec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btbBackRec->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btbBackRec->FlatAppearance->BorderSize = 0;
		this->btbBackRec->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->btbBackRec->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btbBackRec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btbBackRec->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btbBackRec->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btbBackRec->Location = System::Drawing::Point(74, 372);
		this->btbBackRec->Name = L"btbBackRec";
		this->btbBackRec->Size = System::Drawing::Size(170, 193);
		this->btbBackRec->TabIndex = 35;
		this->btbBackRec->Text = L"Back";
		this->btbBackRec->UseVisualStyleBackColor = false;
		this->btbBackRec->Click += gcnew System::EventHandler(this, &Form2::btbBackRec_Click);
		// 
		// btnPrintReceipt
		// 
		this->btnPrintReceipt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnPrintReceipt->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnPrintReceipt->FlatAppearance->BorderSize = 0;
		this->btnPrintReceipt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), 
			static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(6)));
		this->btnPrintReceipt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnPrintReceipt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnPrintReceipt->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->btnPrintReceipt->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnPrintReceipt->Location = System::Drawing::Point(74, 138);
		this->btnPrintReceipt->Name = L"btnPrintReceipt";
		this->btnPrintReceipt->Size = System::Drawing::Size(170, 208);
		this->btnPrintReceipt->TabIndex = 28;
		this->btnPrintReceipt->Text = L"Print";
		this->btnPrintReceipt->UseVisualStyleBackColor = false;
		this->btnPrintReceipt->Click += gcnew System::EventHandler(this, &Form2::btnPrintReceipt_Click);
		// 
		// rtbReceipt
		// 
		this->rtbReceipt->BackColor = System::Drawing::Color::White;
		this->rtbReceipt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->rtbReceipt->Cursor = System::Windows::Forms::Cursors::Hand;
		this->rtbReceipt->Font = (gcnew System::Drawing::Font(L"Bell MT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->rtbReceipt->Location = System::Drawing::Point(364, 127);
		this->rtbReceipt->Name = L"rtbReceipt";
		this->rtbReceipt->Size = System::Drawing::Size(772, 484);
		this->rtbReceipt->TabIndex = 0;
		this->rtbReceipt->Text = L"";
		this->rtbReceipt->ZoomFactor = 0.5F;
		this->rtbReceipt->FontChanged += gcnew System::EventHandler(this, &Form2::btnPrintReceipt_Click);
		// 
		// tabPage3
		// 
		this->tabPage3->BackColor = System::Drawing::SystemColors::Desktop;
		this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage3.BackgroundImage")));
		this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->tabPage3->Controls->Add(this->panel28);
		this->tabPage3->Controls->Add(this->panel27);
		this->tabPage3->Controls->Add(this->btnRecordsPrint);
		this->tabPage3->Controls->Add(this->btnBackRec);
		this->tabPage3->Controls->Add(this->panel15);
		this->tabPage3->Controls->Add(this->panel14);
		this->tabPage3->Controls->Add(this->panel11);
		this->tabPage3->Location = System::Drawing::Point(48, 4);
		this->tabPage3->Name = L"tabPage3";
		this->tabPage3->Size = System::Drawing::Size(1397, 614);
		this->tabPage3->TabIndex = 2;
		this->tabPage3->Text = L"Records";
		// 
		// panel28
		// 
		this->panel28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel28.BackgroundImage")));
		this->panel28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel28->Location = System::Drawing::Point(632, 123);
		this->panel28->Name = L"panel28";
		this->panel28->Size = System::Drawing::Size(38, 34);
		this->panel28->TabIndex = 49;
		// 
		// panel27
		// 
		this->panel27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel27.BackgroundImage")));
		this->panel27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel27->Location = System::Drawing::Point(632, 54);
		this->panel27->Name = L"panel27";
		this->panel27->Size = System::Drawing::Size(38, 34);
		this->panel27->TabIndex = 48;
		// 
		// btnRecordsPrint
		// 
		this->btnRecordsPrint->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnRecordsPrint->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnRecordsPrint->FlatAppearance->BorderSize = 0;
		this->btnRecordsPrint->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), 
			static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(6)));
		this->btnRecordsPrint->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnRecordsPrint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnRecordsPrint->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->btnRecordsPrint->ForeColor = System::Drawing::Color::Black;
		this->btnRecordsPrint->Location = System::Drawing::Point(523, 40);
		this->btnRecordsPrint->Name = L"btnRecordsPrint";
		this->btnRecordsPrint->Size = System::Drawing::Size(162, 63);
		this->btnRecordsPrint->TabIndex = 36;
		this->btnRecordsPrint->Text = L"     Print";
		this->btnRecordsPrint->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnRecordsPrint->UseVisualStyleBackColor = false;
		this->btnRecordsPrint->Click += gcnew System::EventHandler(this, &Form2::btnRecordsPrint_Click);
		// 
		// btnBackRec
		// 
		this->btnBackRec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnBackRec->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnBackRec->FlatAppearance->BorderSize = 0;
		this->btnBackRec->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->btnBackRec->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnBackRec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnBackRec->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnBackRec->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnBackRec->Location = System::Drawing::Point(523, 109);
		this->btnBackRec->Name = L"btnBackRec";
		this->btnBackRec->Size = System::Drawing::Size(162, 63);
		this->btnBackRec->TabIndex = 35;
		this->btnBackRec->Text = L"     Back";
		this->btnBackRec->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnBackRec->UseVisualStyleBackColor = false;
		this->btnBackRec->Click += gcnew System::EventHandler(this, &Form2::btnBackRec_Click_1);
		// 
		// panel15
		// 
		this->panel15->BackColor = System::Drawing::Color::Transparent;
		this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel15->Controls->Add(this->lblCount);
		this->panel15->Controls->Add(this->label19);
		this->panel15->Location = System::Drawing::Point(829, 9);
		this->panel15->Name = L"panel15";
		this->panel15->Size = System::Drawing::Size(478, 186);
		this->panel15->TabIndex = 12;
		// 
		// lblCount
		// 
		this->lblCount->AutoSize = true;
		this->lblCount->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->lblCount->ForeColor = System::Drawing::Color::Red;
		this->lblCount->Location = System::Drawing::Point(219, 60);
		this->lblCount->Name = L"lblCount";
		this->lblCount->Size = System::Drawing::Size(104, 111);
		this->lblCount->TabIndex = 31;
		this->lblCount->Text = L"0";
		this->lblCount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label19
		// 
		this->label19->AutoSize = true;
		this->label19->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label19->Location = System::Drawing::Point(144, 5);
		this->label19->Name = L"label19";
		this->label19->Size = System::Drawing::Size(244, 28);
		this->label19->TabIndex = 30;
		this->label19->Text = L"Number Checked-In";
		// 
		// panel14
		// 
		this->panel14->BackColor = System::Drawing::Color::Transparent;
		this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel14->Controls->Add(this->panel30);
		this->panel14->Controls->Add(this->panel29);
		this->panel14->Controls->Add(this->btnResetRec);
		this->panel14->Controls->Add(this->label24);
		this->panel14->Controls->Add(this->textBox1);
		this->panel14->Controls->Add(this->btnSearchRec);
		this->panel14->Location = System::Drawing::Point(14, 9);
		this->panel14->Name = L"panel14";
		this->panel14->Size = System::Drawing::Size(392, 186);
		this->panel14->TabIndex = 11;
		// 
		// panel30
		// 
		this->panel30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel30.BackgroundImage")));
		this->panel30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel30->Location = System::Drawing::Point(283, 127);
		this->panel30->Name = L"panel30";
		this->panel30->Size = System::Drawing::Size(27, 30);
		this->panel30->TabIndex = 49;
		// 
		// panel29
		// 
		this->panel29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel29.BackgroundImage")));
		this->panel29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel29->Location = System::Drawing::Point(119, 127);
		this->panel29->Name = L"panel29";
		this->panel29->Size = System::Drawing::Size(27, 30);
		this->panel29->TabIndex = 48;
		// 
		// btnResetRec
		// 
		this->btnResetRec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnResetRec->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnResetRec->FlatAppearance->BorderSize = 0;
		this->btnResetRec->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->btnResetRec->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnResetRec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnResetRec->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnResetRec->ForeColor = System::Drawing::Color::Black;
		this->btnResetRec->Location = System::Drawing::Point(197, 112);
		this->btnResetRec->Name = L"btnResetRec";
		this->btnResetRec->Size = System::Drawing::Size(124, 59);
		this->btnResetRec->TabIndex = 34;
		this->btnResetRec->Text = L"   Reset";
		this->btnResetRec->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnResetRec->UseVisualStyleBackColor = false;
		this->btnResetRec->Click += gcnew System::EventHandler(this, &Form2::btnResetRec_Click);
		// 
		// label24
		// 
		this->label24->AutoSize = true;
		this->label24->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label24->Location = System::Drawing::Point(98, 5);
		this->label24->Name = L"label24";
		this->label24->Size = System::Drawing::Size(162, 28);
		this->label24->TabIndex = 29;
		this->label24->Text = L"Enter Details";
		// 
		// textBox1
		// 
		this->textBox1->BackColor = System::Drawing::Color::White;
		this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->textBox1->Location = System::Drawing::Point(61, 43);
		this->textBox1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->textBox1->Multiline = true;
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(249, 55);
		this->textBox1->TabIndex = 28;
		this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// btnSearchRec
		// 
		this->btnSearchRec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnSearchRec->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnSearchRec->FlatAppearance->BorderSize = 0;
		this->btnSearchRec->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), 
			static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(6)));
		this->btnSearchRec->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnSearchRec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnSearchRec->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnSearchRec->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnSearchRec->Location = System::Drawing::Point(33, 112);
		this->btnSearchRec->Name = L"btnSearchRec";
		this->btnSearchRec->Size = System::Drawing::Size(119, 59);
		this->btnSearchRec->TabIndex = 27;
		this->btnSearchRec->Text = L"   Search";
		this->btnSearchRec->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnSearchRec->UseVisualStyleBackColor = false;
		this->btnSearchRec->Click += gcnew System::EventHandler(this, &Form2::btnSearchRec_Click);
		// 
		// panel11
		// 
		this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		this->panel11->Controls->Add(this->dataGridView2);
		this->panel11->Location = System::Drawing::Point(0, 203);
		this->panel11->Name = L"panel11";
		this->panel11->Size = System::Drawing::Size(1330, 408);
		this->panel11->TabIndex = 5;
		// 
		// dataGridView2
		// 
		this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Desktop;
		this->dataGridView2->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableAlwaysIncludeHeaderText;
		dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
		dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
		dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Desktop;
		dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
		this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView2->Cursor = System::Windows::Forms::Cursors::Cross;
		dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
		dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
		dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle2;
		this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
		this->dataGridView2->GridColor = System::Drawing::SystemColors::Desktop;
		this->dataGridView2->Location = System::Drawing::Point(0, 0);
		this->dataGridView2->Name = L"dataGridView2";
		dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
		dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::Desktop;
		dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
		this->dataGridView2->RowHeadersWidth = 18;
		this->dataGridView2->RowTemplate->Height = 18;
		this->dataGridView2->Size = System::Drawing::Size(1326, 404);
		this->dataGridView2->TabIndex = 1;
		// 
		// tabPage4
		// 
		this->tabPage4->BackColor = System::Drawing::SystemColors::Desktop;
		this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage4.BackgroundImage")));
		this->tabPage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->tabPage4->Controls->Add(this->panel21);
		this->tabPage4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->tabPage4->Location = System::Drawing::Point(48, 4);
		this->tabPage4->Name = L"tabPage4";
		this->tabPage4->Size = System::Drawing::Size(1397, 614);
		this->tabPage4->TabIndex = 3;
		this->tabPage4->Text = L"Admin";
		// 
		// panel21
		// 
		this->panel21->BackColor = System::Drawing::Color::Transparent;
		this->panel21->Controls->Add(this->dataGridView);
		this->panel21->Controls->Add(this->label17);
		this->panel21->Controls->Add(this->panel10);
		this->panel21->Controls->Add(this->label41);
		this->panel21->Controls->Add(this->panel22);
		this->panel21->Location = System::Drawing::Point(8, 9);
		this->panel21->Name = L"panel21";
		this->panel21->Size = System::Drawing::Size(1393, 587);
		this->panel21->TabIndex = 2;
		// 
		// dataGridView
		// 
		this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		this->dataGridView->Controls->Add(this->dataGridView1);
		this->dataGridView->Location = System::Drawing::Point(7, 385);
		this->dataGridView->Name = L"dataGridView";
		this->dataGridView->Size = System::Drawing::Size(1386, 207);
		this->dataGridView->TabIndex = 4;
		// 
		// dataGridView1
		// 
		this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Desktop;
		this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableAlwaysIncludeHeaderText;
		dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
		dataGridViewCellStyle4->BackColor = System::Drawing::Color::White;
		dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::Desktop;
		dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
		dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
		dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle5;
		this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->dataGridView1->GridColor = System::Drawing::SystemColors::Desktop;
		this->dataGridView1->Location = System::Drawing::Point(0, 0);
		this->dataGridView1->Name = L"dataGridView1";
		dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle6->BackColor = System::Drawing::Color::White;
		dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::Desktop;
		dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
		this->dataGridView1->RowHeadersWidth = 18;
		this->dataGridView1->RowTemplate->Height = 18;
		this->dataGridView1->Size = System::Drawing::Size(1382, 203);
		this->dataGridView1->TabIndex = 0;
		// 
		// label17
		// 
		this->label17->AutoSize = true;
		this->label17->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 34, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label17->Location = System::Drawing::Point(977, 2);
		this->label17->Name = L"label17";
		this->label17->Size = System::Drawing::Size(220, 54);
		this->label17->TabIndex = 3;
		this->label17->Text = L"SEARCH";
		// 
		// panel10
		// 
		this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel10->Controls->Add(this->panel37);
		this->panel10->Controls->Add(this->panel36);
		this->panel10->Controls->Add(this->button3);
		this->panel10->Controls->Add(this->txtSearch);
		this->panel10->Controls->Add(this->btnSearchAdmin);
		this->panel10->Controls->Add(this->label39);
		this->panel10->Location = System::Drawing::Point(902, 59);
		this->panel10->Name = L"panel10";
		this->panel10->Size = System::Drawing::Size(491, 323);
		this->panel10->TabIndex = 2;
		// 
		// panel37
		// 
		this->panel37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel37.BackgroundImage")));
		this->panel37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel37->Location = System::Drawing::Point(408, 247);
		this->panel37->Name = L"panel37";
		this->panel37->Size = System::Drawing::Size(44, 38);
		this->panel37->TabIndex = 49;
		// 
		// panel36
		// 
		this->panel36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel36.BackgroundImage")));
		this->panel36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel36->Location = System::Drawing::Point(149, 248);
		this->panel36->Name = L"panel36";
		this->panel36->Size = System::Drawing::Size(44, 38);
		this->panel36->TabIndex = 48;
		// 
		// button3
		// 
		this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->button3->FlatAppearance->BorderSize = 0;
		this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->button3->ForeColor = System::Drawing::SystemColors::Desktop;
		this->button3->Location = System::Drawing::Point(276, 231);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(189, 75);
		this->button3->TabIndex = 29;
		this->button3->Text = L"     Clear";
		this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button3->UseVisualStyleBackColor = false;
		this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
		// 
		// txtSearch
		// 
		this->txtSearch->BackColor = System::Drawing::Color::White;
		this->txtSearch->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtSearch->Location = System::Drawing::Point(121, 119);
		this->txtSearch->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtSearch->Multiline = true;
		this->txtSearch->Name = L"txtSearch";
		this->txtSearch->Size = System::Drawing::Size(250, 67);
		this->txtSearch->TabIndex = 28;
		this->txtSearch->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// btnSearchAdmin
		// 
		this->btnSearchAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnSearchAdmin->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnSearchAdmin->FlatAppearance->BorderSize = 0;
		this->btnSearchAdmin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), 
			static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(6)));
		this->btnSearchAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnSearchAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnSearchAdmin->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->btnSearchAdmin->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnSearchAdmin->Location = System::Drawing::Point(20, 231);
		this->btnSearchAdmin->Name = L"btnSearchAdmin";
		this->btnSearchAdmin->Size = System::Drawing::Size(189, 75);
		this->btnSearchAdmin->TabIndex = 27;
		this->btnSearchAdmin->Text = L"     Search";
		this->btnSearchAdmin->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnSearchAdmin->UseVisualStyleBackColor = false;
		this->btnSearchAdmin->Click += gcnew System::EventHandler(this, &Form2::btnSearchAdmin_Click);
		// 
		// label39
		// 
		this->label39->AutoSize = true;
		this->label39->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 30.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label39->Location = System::Drawing::Point(106, 32);
		this->label39->Name = L"label39";
		this->label39->Size = System::Drawing::Size(289, 48);
		this->label39->TabIndex = 2;
		this->label39->Text = L"Enter Details";
		// 
		// label41
		// 
		this->label41->AutoSize = true;
		this->label41->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 34, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label41->Location = System::Drawing::Point(289, 2);
		this->label41->Name = L"label41";
		this->label41->Size = System::Drawing::Size(261, 54);
		this->label41->TabIndex = 1;
		this->label41->Text = L"REGISTER";
		// 
		// panel22
		// 
		this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel22->Controls->Add(this->panel13);
		this->panel22->Controls->Add(this->panel12);
		this->panel22->Location = System::Drawing::Point(5, 59);
		this->panel22->Name = L"panel22";
		this->panel22->Size = System::Drawing::Size(891, 323);
		this->panel22->TabIndex = 0;
		// 
		// panel13
		// 
		this->panel13->Controls->Add(this->panel35);
		this->panel13->Controls->Add(this->panel34);
		this->panel13->Controls->Add(this->panel33);
		this->panel13->Controls->Add(this->panel32);
		this->panel13->Controls->Add(this->panel31);
		this->panel13->Controls->Add(this->btnAddData);
		this->panel13->Controls->Add(this->btnBackAd);
		this->panel13->Controls->Add(this->btnUpdateAdmin);
		this->panel13->Controls->Add(this->btnDelAd);
		this->panel13->Controls->Add(this->btnResetADdat);
		this->panel13->Location = System::Drawing::Point(574, 5);
		this->panel13->Name = L"panel13";
		this->panel13->Size = System::Drawing::Size(310, 311);
		this->panel13->TabIndex = 36;
		// 
		// panel35
		// 
		this->panel35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel35.BackgroundImage")));
		this->panel35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel35->Location = System::Drawing::Point(179, 256);
		this->panel35->Name = L"panel35";
		this->panel35->Size = System::Drawing::Size(33, 25);
		this->panel35->TabIndex = 52;
		// 
		// panel34
		// 
		this->panel34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel34.BackgroundImage")));
		this->panel34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel34->Location = System::Drawing::Point(179, 198);
		this->panel34->Name = L"panel34";
		this->panel34->Size = System::Drawing::Size(33, 25);
		this->panel34->TabIndex = 51;
		// 
		// panel33
		// 
		this->panel33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel33.BackgroundImage")));
		this->panel33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel33->Location = System::Drawing::Point(179, 140);
		this->panel33->Name = L"panel33";
		this->panel33->Size = System::Drawing::Size(33, 25);
		this->panel33->TabIndex = 50;
		// 
		// panel32
		// 
		this->panel32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel32.BackgroundImage")));
		this->panel32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel32->Location = System::Drawing::Point(179, 81);
		this->panel32->Name = L"panel32";
		this->panel32->Size = System::Drawing::Size(33, 25);
		this->panel32->TabIndex = 49;
		// 
		// panel31
		// 
		this->panel31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->panel31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel31.BackgroundImage")));
		this->panel31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panel31->Location = System::Drawing::Point(179, 20);
		this->panel31->Name = L"panel31";
		this->panel31->Size = System::Drawing::Size(33, 25);
		this->panel31->TabIndex = 48;
		// 
		// btnAddData
		// 
		this->btnAddData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnAddData->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnAddData->FlatAppearance->BorderSize = 0;
		this->btnAddData->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), 
			static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(6)));
		this->btnAddData->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnAddData->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnAddData->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnAddData->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnAddData->Location = System::Drawing::Point(63, 9);
		this->btnAddData->Name = L"btnAddData";
		this->btnAddData->Size = System::Drawing::Size(162, 49);
		this->btnAddData->TabIndex = 27;
		this->btnAddData->Text = L"     Add";
		this->btnAddData->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnAddData->UseVisualStyleBackColor = false;
		this->btnAddData->Click += gcnew System::EventHandler(this, &Form2::btnAddData_Click);
		// 
		// btnBackAd
		// 
		this->btnBackAd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnBackAd->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnBackAd->FlatAppearance->BorderSize = 0;
		this->btnBackAd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->btnBackAd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnBackAd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnBackAd->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnBackAd->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnBackAd->Location = System::Drawing::Point(63, 243);
		this->btnBackAd->Name = L"btnBackAd";
		this->btnBackAd->Size = System::Drawing::Size(162, 53);
		this->btnBackAd->TabIndex = 34;
		this->btnBackAd->Text = L"     Back";
		this->btnBackAd->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnBackAd->UseVisualStyleBackColor = false;
		this->btnBackAd->Click += gcnew System::EventHandler(this, &Form2::btnBackAd_Click);
		// 
		// btnUpdateAdmin
		// 
		this->btnUpdateAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnUpdateAdmin->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnUpdateAdmin->FlatAppearance->BorderSize = 0;
		this->btnUpdateAdmin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), 
			static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(6)));
		this->btnUpdateAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnUpdateAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnUpdateAdmin->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnUpdateAdmin->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnUpdateAdmin->Location = System::Drawing::Point(63, 66);
		this->btnUpdateAdmin->Name = L"btnUpdateAdmin";
		this->btnUpdateAdmin->Size = System::Drawing::Size(162, 53);
		this->btnUpdateAdmin->TabIndex = 28;
		this->btnUpdateAdmin->Text = L"     Update";
		this->btnUpdateAdmin->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnUpdateAdmin->UseVisualStyleBackColor = false;
		this->btnUpdateAdmin->Click += gcnew System::EventHandler(this, &Form2::btnUpdateAdmin_Click);
		// 
		// btnDelAd
		// 
		this->btnDelAd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnDelAd->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnDelAd->FlatAppearance->BorderSize = 0;
		this->btnDelAd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->btnDelAd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnDelAd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnDelAd->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnDelAd->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnDelAd->Location = System::Drawing::Point(63, 127);
		this->btnDelAd->Name = L"btnDelAd";
		this->btnDelAd->Size = System::Drawing::Size(162, 53);
		this->btnDelAd->TabIndex = 32;
		this->btnDelAd->Text = L"     Delete";
		this->btnDelAd->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnDelAd->UseVisualStyleBackColor = false;
		this->btnDelAd->Click += gcnew System::EventHandler(this, &Form2::btnDelAd_Click);
		// 
		// btnResetADdat
		// 
		this->btnResetADdat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->btnResetADdat->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->btnResetADdat->FlatAppearance->BorderSize = 0;
		this->btnResetADdat->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), 
			static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
		this->btnResetADdat->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), 
			static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(4)));
		this->btnResetADdat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnResetADdat->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->btnResetADdat->ForeColor = System::Drawing::SystemColors::Desktop;
		this->btnResetADdat->Location = System::Drawing::Point(63, 184);
		this->btnResetADdat->Name = L"btnResetADdat";
		this->btnResetADdat->Size = System::Drawing::Size(162, 53);
		this->btnResetADdat->TabIndex = 33;
		this->btnResetADdat->Text = L"     Reset";
		this->btnResetADdat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnResetADdat->UseVisualStyleBackColor = false;
		this->btnResetADdat->Click += gcnew System::EventHandler(this, &Form2::btnResetADdat_Click);
		// 
		// panel12
		// 
		this->panel12->Controls->Add(this->label26);
		this->panel12->Controls->Add(this->txtTelephone);
		this->panel12->Controls->Add(this->label18);
		this->panel12->Controls->Add(this->txtEmail);
		this->panel12->Controls->Add(this->txtLocation);
		this->panel12->Controls->Add(this->txtPassword);
		this->panel12->Controls->Add(this->txtSurname);
		this->panel12->Controls->Add(this->txtNamef);
		this->panel12->Controls->Add(this->txtUsername);
		this->panel12->Controls->Add(this->txtID);
		this->panel12->Controls->Add(this->label23);
		this->panel12->Controls->Add(this->label27);
		this->panel12->Controls->Add(this->label29);
		this->panel12->Controls->Add(this->label28);
		this->panel12->Controls->Add(this->label44);
		this->panel12->Controls->Add(this->label42);
		this->panel12->Location = System::Drawing::Point(3, 5);
		this->panel12->Name = L"panel12";
		this->panel12->Size = System::Drawing::Size(579, 311);
		this->panel12->TabIndex = 35;
		// 
		// label26
		// 
		this->label26->AutoSize = true;
		this->label26->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label26->Location = System::Drawing::Point(72, 256);
		this->label26->Name = L"label26";
		this->label26->Size = System::Drawing::Size(126, 24);
		this->label26->TabIndex = 41;
		this->label26->Text = L"Telephone";
		// 
		// txtTelephone
		// 
		this->txtTelephone->BackColor = System::Drawing::Color::White;
		this->txtTelephone->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtTelephone->Location = System::Drawing::Point(363, 254);
		this->txtTelephone->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtTelephone->Name = L"txtTelephone";
		this->txtTelephone->Size = System::Drawing::Size(189, 32);
		this->txtTelephone->TabIndex = 40;
		this->txtTelephone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label18
		// 
		this->label18->AutoSize = true;
		this->label18->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label18->Location = System::Drawing::Point(93, 219);
		this->label18->Name = L"label18";
		this->label18->Size = System::Drawing::Size(72, 24);
		this->label18->TabIndex = 39;
		this->label18->Text = L"Email";
		// 
		// txtEmail
		// 
		this->txtEmail->BackColor = System::Drawing::Color::White;
		this->txtEmail->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtEmail->Location = System::Drawing::Point(363, 219);
		this->txtEmail->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtEmail->Name = L"txtEmail";
		this->txtEmail->Size = System::Drawing::Size(189, 32);
		this->txtEmail->TabIndex = 38;
		this->txtEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtLocation
		// 
		this->txtLocation->BackColor = System::Drawing::Color::White;
		this->txtLocation->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtLocation->Location = System::Drawing::Point(363, 183);
		this->txtLocation->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtLocation->Name = L"txtLocation";
		this->txtLocation->Size = System::Drawing::Size(189, 32);
		this->txtLocation->TabIndex = 37;
		this->txtLocation->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtPassword
		// 
		this->txtPassword->BackColor = System::Drawing::Color::White;
		this->txtPassword->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtPassword->Location = System::Drawing::Point(363, 147);
		this->txtPassword->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtPassword->Name = L"txtPassword";
		this->txtPassword->PasswordChar = '.';
		this->txtPassword->Size = System::Drawing::Size(189, 32);
		this->txtPassword->TabIndex = 36;
		this->txtPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->txtPassword->UseSystemPasswordChar = true;
		// 
		// txtSurname
		// 
		this->txtSurname->BackColor = System::Drawing::Color::White;
		this->txtSurname->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtSurname->Location = System::Drawing::Point(363, 110);
		this->txtSurname->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtSurname->Name = L"txtSurname";
		this->txtSurname->Size = System::Drawing::Size(189, 32);
		this->txtSurname->TabIndex = 35;
		this->txtSurname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtNamef
		// 
		this->txtNamef->BackColor = System::Drawing::Color::White;
		this->txtNamef->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtNamef->Location = System::Drawing::Point(363, 74);
		this->txtNamef->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtNamef->Name = L"txtNamef";
		this->txtNamef->Size = System::Drawing::Size(189, 32);
		this->txtNamef->TabIndex = 34;
		this->txtNamef->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtUsername
		// 
		this->txtUsername->BackColor = System::Drawing::Color::White;
		this->txtUsername->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtUsername->Location = System::Drawing::Point(363, 38);
		this->txtUsername->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtUsername->Name = L"txtUsername";
		this->txtUsername->Size = System::Drawing::Size(189, 32);
		this->txtUsername->TabIndex = 33;
		this->txtUsername->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// txtID
		// 
		this->txtID->BackColor = System::Drawing::Color::White;
		this->txtID->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->txtID->Location = System::Drawing::Point(363, 3);
		this->txtID->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
		this->txtID->Name = L"txtID";
		this->txtID->Size = System::Drawing::Size(189, 32);
		this->txtID->TabIndex = 32;
		this->txtID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label23
		// 
		this->label23->AutoSize = true;
		this->label23->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label23->Location = System::Drawing::Point(78, 186);
		this->label23->Name = L"label23";
		this->label23->Size = System::Drawing::Size(107, 24);
		this->label23->TabIndex = 23;
		this->label23->Text = L"Location";
		// 
		// label27
		// 
		this->label27->AutoSize = true;
		this->label27->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label27->Location = System::Drawing::Point(71, 150);
		this->label27->Name = L"label27";
		this->label27->Size = System::Drawing::Size(127, 26);
		this->label27->TabIndex = 19;
		this->label27->Text = L"Password";
		// 
		// label29
		// 
		this->label29->AutoSize = true;
		this->label29->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label29->Location = System::Drawing::Point(78, 113);
		this->label29->Name = L"label29";
		this->label29->Size = System::Drawing::Size(109, 24);
		this->label29->TabIndex = 15;
		this->label29->Text = L"Surname";
		// 
		// label28
		// 
		this->label28->AutoSize = true;
		this->label28->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label28->Location = System::Drawing::Point(70, 77);
		this->label28->Name = L"label28";
		this->label28->Size = System::Drawing::Size(130, 24);
		this->label28->TabIndex = 17;
		this->label28->Text = L"First Name";
		// 
		// label44
		// 
		this->label44->AutoSize = true;
		this->label44->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label44->Location = System::Drawing::Point(71, 40);
		this->label44->Name = L"label44";
		this->label44->Size = System::Drawing::Size(135, 27);
		this->label44->TabIndex = 13;
		this->label44->Text = L"Username";
		// 
		// label42
		// 
		this->label42->AutoSize = true;
		this->label42->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label42->Location = System::Drawing::Point(104, 5);
		this->label42->Name = L"label42";
		this->label42->Size = System::Drawing::Size(38, 27);
		this->label42->TabIndex = 2;
		this->label42->Text = L"ID";
		// 
		// printDocument1
		// 
		this->printDocument1->DocumentName = L"Receipt";
		this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form2::printDocument1_PrintPage);
		// 
		// printPreviewDialog1
		// 
		this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
		this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
		this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
		this->printPreviewDialog1->Document = this->printDocument1;
		this->printPreviewDialog1->Enabled = true;
		this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"printPreviewDialog1.Icon")));
		this->printPreviewDialog1->Name = L"printPreviewDialog1";
		this->printPreviewDialog1->Visible = false;
		// 
		// timer1
		// 
		this->timer1->Tick += gcnew System::EventHandler(this, &Form2::timer1_Tick);
		// 
		// printDocument2
		// 
		this->printDocument2->DocumentName = L"Records";
		this->printDocument2->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form2::printDocument2_PrintPage);
		// 
		// printPreviewDialog2
		// 
		this->printPreviewDialog2->AutoScrollMargin = System::Drawing::Size(0, 0);
		this->printPreviewDialog2->AutoScrollMinSize = System::Drawing::Size(0, 0);
		this->printPreviewDialog2->ClientSize = System::Drawing::Size(400, 300);
		this->printPreviewDialog2->Document = this->printDocument2;
		this->printPreviewDialog2->Enabled = true;
		this->printPreviewDialog2->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"printPreviewDialog2.Icon")));
		this->printPreviewDialog2->Name = L"printPreviewDialog2";
		this->printPreviewDialog2->Visible = false;
		// 
		// serialPort1
		// 
		this->serialPort1->PortName = L"COM6";
		this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form2::serialPort1_DataReceived);
		// 
		// timer2
		// 
		this->timer2->Interval = 300;
		this->timer2->Tick += gcnew System::EventHandler(this, &Form2::timer2_Tick_1);
		// 
		// panel6
		// 
		this->panel6->BackColor = System::Drawing::Color::Transparent;
		this->panel6->Controls->Add(this->labelMainSystem5);
		this->panel6->Controls->Add(this->panelMainSystem1);
		this->panel6->Controls->Add(this->panelMainSystem2);
		this->panel6->Location = System::Drawing::Point(1, 3);
		this->panel6->Name = L"panel6";
		this->panel6->Size = System::Drawing::Size(1443, 126);
		this->panel6->TabIndex = 14;
		// 
		// labelMainSystem5
		// 
		this->labelMainSystem5->AutoSize = true;
		this->labelMainSystem5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->labelMainSystem5->ForeColor = System::Drawing::Color::White;
		this->labelMainSystem5->Location = System::Drawing::Point(365, 19);
		this->labelMainSystem5->Name = L"labelMainSystem5";
		this->labelMainSystem5->Size = System::Drawing::Size(622, 55);
		this->labelMainSystem5->TabIndex = 0;
		this->labelMainSystem5->Text = L"ZIFA TICKETING SYSTEM";
		// 
		// panelMainSystem1
		// 
		this->panelMainSystem1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panelMainSystem1.BackgroundImage")));
		this->panelMainSystem1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panelMainSystem1->Location = System::Drawing::Point(157, 15);
		this->panelMainSystem1->Name = L"panelMainSystem1";
		this->panelMainSystem1->Size = System::Drawing::Size(103, 78);
		this->panelMainSystem1->TabIndex = 1;
		// 
		// panelMainSystem2
		// 
		this->panelMainSystem2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panelMainSystem2.BackgroundImage")));
		this->panelMainSystem2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->panelMainSystem2->Location = System::Drawing::Point(1084, 15);
		this->panelMainSystem2->Name = L"panelMainSystem2";
		this->panelMainSystem2->Size = System::Drawing::Size(103, 78);
		this->panelMainSystem2->TabIndex = 2;
		// 
		// Form2
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->AutoScroll = true;
		this->AutoScrollMargin = System::Drawing::Size(5, 5);
		this->AutoScrollMinSize = System::Drawing::Size(5, 5);
		this->BackColor = System::Drawing::SystemColors::Desktop;
		this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->ClientSize = System::Drawing::Size(1220, 549);
		this->Controls->Add(this->panel6);
		this->Controls->Add(this->groupBox5);
		this->DoubleBuffered = true;
		this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
		this->Name = L"Form2";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"ZIFA TICKETING SYSTEM";
		this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
		this->groupBox5->ResumeLayout(false);
		this->tbcntrAdmin->ResumeLayout(false);
		this->tabPage1->ResumeLayout(false);
		this->tabPage1->PerformLayout();
		this->panel4->ResumeLayout(false);
		this->panel4->PerformLayout();
		this->panel7->ResumeLayout(false);
		this->panel7->PerformLayout();
		this->groupBox4->ResumeLayout(false);
		this->groupBox4->PerformLayout();
		this->panel3->ResumeLayout(false);
		this->panel3->PerformLayout();
		this->groupBox2->ResumeLayout(false);
		this->groupBox2->PerformLayout();
		this->panel5->ResumeLayout(false);
		this->panel5->PerformLayout();
		this->panel2->ResumeLayout(false);
		this->panel2->PerformLayout();
		this->groupBox3->ResumeLayout(false);
		this->groupBox3->PerformLayout();
		this->panel1->ResumeLayout(false);
		this->panel1->PerformLayout();
		this->panel8->ResumeLayout(false);
		this->panel8->PerformLayout();
		this->panel9->ResumeLayout(false);
		this->panel9->PerformLayout();
		this->tabPage2->ResumeLayout(false);
		this->tabPage2->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
		this->tabPage3->ResumeLayout(false);
		this->panel15->ResumeLayout(false);
		this->panel15->PerformLayout();
		this->panel14->ResumeLayout(false);
		this->panel14->PerformLayout();
		this->panel11->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
		this->tabPage4->ResumeLayout(false);
		this->panel21->ResumeLayout(false);
		this->panel21->PerformLayout();
		this->dataGridView->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
		this->panel10->ResumeLayout(false);
		this->panel10->PerformLayout();
		this->panel22->ResumeLayout(false);
		this->panel13->ResumeLayout(false);
		this->panel12->ResumeLayout(false);
		this->panel12->PerformLayout();
		this->panel6->ResumeLayout(false);
		this->panel6->PerformLayout();
		this->ResumeLayout(false);

	}
#pragma endregion


	int checker;
	Bitmap^ bitmap;
		
	double US_Dollar;
	double POUND;
	double EURO;  
	double RAND;
	double KWACHA;
	double PULA;

	void ConnectionCI()
	{
			try
			{
				OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb");
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "select * from cinfo";
			cmd->ExecuteNonQuery();

			conn->Close();
			
			}
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,MessageBoxIcon::Error);
			}
	}

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

			DataTable^ dt = gcnew DataTable();
			OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
			dp->Fill(dt);
		    dataGridView1->DataSource = dt;

			conn->Close();

			}
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,MessageBoxIcon::Error);
			}
	}
	void ConnectionQV()
	{
			try
			{
				OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb");
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "select * from rinfo";
			cmd->ExecuteNonQuery();

			DataTable^ ds = gcnew DataTable();
			OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
			dp->Fill(ds);
		    dataGridView2->DataSource = ds;

			conn->Close();
			  
			}
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,MessageBoxIcon::Error);
			}

			
	}
	
	
private: System::Void btnPrintReceipt_Click(System::Object^  sender, System::EventArgs^  e) {


			System::Windows::Forms::DialogResult iReset;
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync(lblUserin->Text + ", Print Receipt");
			iReset = MessageBox::Show("Print Receipt","ZIFA Ticketing System",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				  


		if (iReset == System::Windows::Forms::DialogResult::Yes)
				{

			printPreviewDialog1->Document = printDocument1;
			printPreviewDialog1->ShowDialog();


	    try
			{
				OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb"); 
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand(); 
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "insert into rinfo (Event,Timed,Child,Adult,Price,Reference, Dates,"+
				" Class,Other)values('"+ 

				txtEventicket->Text + "','" + 
				txtTime->Text + "','" + 
				txtChild->Text + "','" + 
				txtAdult->Text + "','" +
				txtPrice->Text +  "','" + 
				txtRefno->Text + "','" + 
				txtDate->Text + "','" +
				txtTicketype->Text + "','" +
				"')";

			cmd->ExecuteNonQuery();
			 
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Transaction Successful"); 
			MessageBox::Show("Transaction Successful","Zifa Ticketing System",
				MessageBoxButtons::OK,MessageBoxIcon::Error);
			ConnectionQV();
			conn->Close();
			}
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}

			try
			{
				OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb"); 
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand(); 
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "update rinfo set Stadium =  '" + txtStadium->Text + "' , V_A_T = '" + lblVAT->Text + "', Sitting_Position = '" + lblSit->Text + "', Holder_Name = '" + txtHolder->Text + "' , Type = '" + txtClass->Text + "', Author = '" + lblUserin->Text + "' Where Reference = '" + txtRefno->Text + "' and Dates = '" + txtDate->Text  + "'"; 
			cmd->ExecuteNonQuery();
			 
			ConnectionQV();
			conn->Close();

			
		    serialPort1->Open();
			}
				 
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}
				}

		   Sapi->SpeakAsync("Dear Fan" + ", Please Check In");


		}
private: System::Void btnCC_Click(System::Object^  sender, System::EventArgs^  e) {

			btnCC->Visible = false;
		}
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {

			btnCC->Visible = true;
			cmbCC->Text = "Select One";
			txtCC->Text = "";
			lblCC->Text = "";
		}
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
	
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Welcome, " + lblUserin->Text);
			//Sapi->SpeakAsync("Dear Fan, Please confirm your name at the start of the beep sound");

			DateTime iDate = DateTime::Now;
			txtDate->Text = iDate.ToShortDateString();
			
			OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb");

			try {
			 
				ConnectionDB();
				ConnectionQV();
			}

			catch (Exception^ ex)

			{
			MessageBox::Show(ex->Message,"Access Database Connection", MessageBoxButtons::OK,MessageBoxIcon::Error);
			}
		}



private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			DateTime iTime = DateTime::Now;
			txtTime->Text = iTime.ToLongTimeString();
		}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			btnCC->Visible = false;
			cmbCC->Text = "Select One";
			txtCC->Text = "";
			lblCC->Text = "";
		}
private: System::Void btnCO_Click(System::Object^  sender, System::EventArgs^  e) {

			try{

	        EURO = 0.0001428571;
	        US_Dollar = 0.000125;
	        POUND = 0.0001333333;
	        RAND = 0.0002857143;
	        KWACHA = 0.00025;
	        PULA = 0.0005;
		   
							
	        double ZIM_Dollar = Convert::ToInt32(txtCC->Text);

	        if (cmbCC->Text == "United States")
	        {

		    lblCC->Text = "US$ " + System::Convert::ToString(US_Dollar * ZIM_Dollar);
	        
			}

	        if (cmbCC->Text == "EUROPE")
	        {

		    lblCC->Text = "E " + System::Convert::ToString(US_Dollar * EURO);
	        
			}

	        if (cmbCC->Text == "BRITAIN")
	        {

		    lblCC->Text = "P " + System::Convert::ToString(US_Dollar* POUND);
	        
			}

	       if (cmbCC->Text == "RSA")
	       {

		   lblCC->Text = "R " + System::Convert::ToString(US_Dollar * RAND);
	       
		   }

	       if (cmbCC->Text == "ZAMBIA")
	       {

		   lblCC->Text = "KWACHA " + System::Convert::ToString(US_Dollar * KWACHA);
	       
		   }

	       if (cmbCC->Text == "BOTSWANA")
	       
		   {
		   
			lblCC->Text = "PULA " + System::Convert::ToString(US_Dollar * PULA);
	       
		   }
			
		}

		   catch (Exception^ ex)
		   
		   {

			MessageBox::Show(ex->Message,"Currency Converter", MessageBoxButtons::OK,MessageBoxIcon::Error);
			
		   }
		}
private: System::Void btnTotal_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->timer2->Start();

		SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		Sapi->SpeakAsync(lblUserin->Text + ", Please verify your entries before proceeding");
		Sapi->SpeakAsync(txtHolder->Text + ", Please Verify your Ticket");
			 
			const double Rufaro = 24000;
		    const double VIRufaro = 80000;
		    const double VVRufaro = 120000;
		    const double Gwanzura = 24000;
		    const double VIGwanzura = 80000;
		    const double VVGwanzura = 120000;
		    const double National_Sports = 32000;
		    const double VINational_Sports = 88000;
		    const double VVNational_Sports = 128000;
		    const double Babourfields = 24000;
		    const double VIBabourfields = 80000;
		    const double VVBabourfields = 120000;
		    const double VAT = 2;
		    double Totalcost;

			Random ^ random_1 = gcnew Random;
			int iRand = random_1->Next(10000, 999900);
			txtRefno->Text = Convert::ToString(iRand);
			txtBarcode->Text = Convert::ToString(iRand);
			Random ^ random_2 = gcnew Random;
			int iRandd = random_2->Next(1, 999);
			 

//1

			if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{1:C2}", (Rufaro));
				Totalcost = (Rufaro * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Rufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "East " + Convert::ToString(iRandd);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIRufaro));
				Totalcost = (VIRufaro * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIRufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVRufaro));
				Totalcost = (VVRufaro * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVRufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);
			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Gwanzura));
				Totalcost = (Gwanzura * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Gwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "West " + Convert::ToString(iRandd);
			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIGwanzura));
				Totalcost = (VIGwanzura * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIGwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVGwanzura));
				Totalcost = (VVGwanzura * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVGwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);
			}

		if((cmbStadium->Text == "National_Sports") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (National_Sports));
				Totalcost = (National_Sports * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (National_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "South " + Convert::ToString(iRandd);
			}

		if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VINational_Sports));
				Totalcost = (VINational_Sports * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VINational_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "National_Sports") && (rbVVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVNational_Sports));
				Totalcost = (VVNational_Sports * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVNational_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Babourfields));
				Totalcost = (Babourfields * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Babourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "East " + Convert::ToString(iRandd);

			}

						  
		if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIBabourfields));
				Totalcost = (VIBabourfields * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIBabourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);
			}

						    
		if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVBabourfields));
				Totalcost = (VVBabourfields * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVBabourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}
//2

		if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Rufaro/2));
				Totalcost = (Rufaro/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Rufaro/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "West " + Convert::ToString(iRandd);
			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIRufaro/2));
				Totalcost = (VIRufaro/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIRufaro/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVRufaro/2));
				Totalcost = (VVRufaro/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVRufaro/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);
			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Gwanzura/2));
				Totalcost = (Gwanzura/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Gwanzura/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "West " + Convert::ToString(iRandd);
			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIGwanzura/2));
				Totalcost = (VIGwanzura/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIGwanzura/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);
			}

			    if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVGwanzura/2));
				Totalcost = (VVGwanzura/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVGwanzura/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "National_Sports") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (National_Sports/2));
				Totalcost = (National_Sports/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (National_Sports/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "South " + Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VINational_Sports/2));
				Totalcost = (VINational_Sports/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VINational_Sports/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "National_Sports") && (rbVVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVNational_Sports/2));
				Totalcost = (VVNational_Sports/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVNational_Sports/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Babourfields/2));
				Totalcost = (Babourfields/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Babourfields/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "East " + Convert::ToString(iRandd);

			}

						  
		if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIBabourfields/2));
				Totalcost = (VIBabourfields/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIBabourfields/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);

			}

						    
		if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVBabourfields/2));
				Totalcost = (VVBabourfields/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVBabourfields/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = Convert::ToString(iRandd);
			}
//3

			if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((Rufaro * 1.7) + (Rufaro / 1.7)));
				Totalcost = (((Rufaro * 1.7) + (Rufaro / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((Rufaro * 1.7) + (Rufaro / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "East " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);
			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VIRufaro * 1.7) + (VIRufaro / 1.7)));
				Totalcost = (((VIRufaro * 1.7) + (VIRufaro / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VIRufaro * 1.7) + (VIRufaro / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);
			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VVRufaro * 1.7) + (VVRufaro / 1.7)));
				Totalcost = (((Rufaro * 1.7) + (VVRufaro / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VVRufaro * 1.7) + (VVRufaro / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((Gwanzura * 1.7) + (Gwanzura / 1.7)));
				Totalcost = (((Gwanzura * 1.7) + (Gwanzura / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((Gwanzura * 1.7) + (Gwanzura / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "West " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);
			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VIGwanzura * 1.7) + (VIGwanzura / 1.7)));
				Totalcost = (((VIGwanzura * 1.7) + (VIGwanzura / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VIGwanzura * 1.7) + (VIGwanzura / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

			    if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VVGwanzura * 1.7) + (VVGwanzura / 1.7)));
				Totalcost = (((VVGwanzura * 1.7) + (VVGwanzura / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VVGwanzura * 1.7) + (VVGwanzura / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

		if((cmbStadium->Text == "National_Sports")  && (rbStandard->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((National_Sports * 1.7) + (National_Sports / 1.7)));
				Totalcost = (((National_Sports * 1.7) + (National_Sports / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((National_Sports * 1.7) + (National_Sports / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "East " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

		if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VINational_Sports * 1.7) + (VINational_Sports / 1.7)));
				Totalcost = (((VINational_Sports * 1.7) + (VINational_Sports / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VINational_Sports * 1.7) + (VINational_Sports / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

		if((cmbStadium->Text == "National_Sports")  && (rbVVip->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VVNational_Sports * 1.7) + (VVNational_Sports / 1.7)));
				Totalcost = (((VVNational_Sports * 1.7) + (VVNational_Sports / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VVNational_Sports * 1.7) + (VVNational_Sports / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

				if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((Babourfields * 1.7) + (Babourfields / 1.7)));
				Totalcost = (((Babourfields * 1.7) + (Babourfields / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((Babourfields * 1.7) + (Babourfields / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "South " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

						  
			if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VIBabourfields * 1.7) + (VIBabourfields / 1.7)));
				Totalcost = (((VIBabourfields * 1.7) + (VIBabourfields / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VIBabourfields * 1.7) + (VIBabourfields / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);
			}

						    
			if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbGroup->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VVBabourfields * 1.7) + (VVBabourfields / 1.7)));
				Totalcost = (((VVBabourfields * 1.7) + (VVBabourfields / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VVBabourfields * 1.7) + (VVBabourfields / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}
//4

			if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Rufaro * 2));
				Totalcost = ((Rufaro * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Rufaro * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
			    lblSit->Text = "East " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);
			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIRufaro * 2));
				Totalcost = ((VIRufaro * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIRufaro * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVRufaro * 2));
				Totalcost = ((VVRufaro * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVRufaro * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Gwanzura * 2));
				Totalcost = ((Gwanzura * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Gwanzura * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "North " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIGwanzura * 2));
				Totalcost = ((VIGwanzura * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIGwanzura * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVGwanzura * 2));
				Totalcost = ((VVGwanzura * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVGwanzura * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

		if((cmbStadium->Text == "National_Sports") && (rbStandard->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (National_Sports * 2));
				Totalcost = ((National_Sports * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((National_Sports * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "West " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

		if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VINational_Sports * 2));
				Totalcost = ((VINational_Sports * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VINational_Sports * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

		if((cmbStadium->Text == "National_Sports") && (rbVVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))
			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVNational_Sports * 2));
				Totalcost = ((VVNational_Sports * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVNational_Sports * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);
			}

		if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Babourfields * 2));
				Totalcost = ((Babourfields * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Babourfields * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "East " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);
			}

						  
		if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIBabourfields * 2));
				Totalcost = ((VIBabourfields * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIBabourfields * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

						    
		if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVBabourfields * 2));
				Totalcost = ((VVBabourfields * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVBabourfields * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}
//5

		if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Rufaro/2) + Rufaro);
				Totalcost = (((Rufaro/2) + Rufaro) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Rufaro/2) + Rufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "East " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIRufaro/2) + VIRufaro);
				Totalcost = (((VIRufaro/2) + VIRufaro) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIRufaro/2) + VIRufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVRufaro/2) + VVRufaro);
				Totalcost = (((VVRufaro/2) + VIRufaro) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVRufaro/2) + VVRufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Gwanzura/2) + Gwanzura);
				Totalcost = (((Gwanzura/2) + Gwanzura) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Gwanzura/2) + Gwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "West " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIGwanzura/2) + VIGwanzura);
				Totalcost = (((VIGwanzura/2) + VIGwanzura) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIGwanzura/2) + VIGwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			    if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVGwanzura/2) + VVGwanzura);
				Totalcost = (((VVGwanzura/2) + VVGwanzura) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVGwanzura/2) + VVGwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

				if((cmbStadium->Text == "National_Sports") && (rbStandard->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (National_Sports/2) + National_Sports);
				Totalcost = (((National_Sports/2) + National_Sports) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((National_Sports/2) + National_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "South " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VINational_Sports/2) + VINational_Sports);
				Totalcost = (((VINational_Sports/2) + VINational_Sports) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VINational_Sports/2) + VINational_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "National_Sports") && (rbVVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVNational_Sports/2) + VVNational_Sports);
				Totalcost = (((VVNational_Sports/2) + VVNational_Sports) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVNational_Sports/2) + VVNational_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Babourfields/2) + Babourfields);
				Totalcost = (((Babourfields/2) + Babourfields) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Babourfields/2) + Babourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "West " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

						  
			if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbDouble->Checked) && (rbChild->Checked)&& (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIBabourfields/2) + VIBabourfields);
				Totalcost = (((VIBabourfields/2) + VIBabourfields) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIBabourfields/2) + VIBabourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "1 Adult";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

						    
		if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbFootball->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVBabourfields/2) + VVBabourfields);
				Totalcost = (((VVBabourfields/2) + VVBabourfields) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVBabourfields/2) + VVBabourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbFootball->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "1 Adult";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

				
			}	
//6

			if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Rufaro));
				Totalcost = (Rufaro * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Rufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIRufaro));
				Totalcost = (VIRufaro * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIRufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVRufaro));
				Totalcost = (VVRufaro * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVRufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd);
			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Gwanzura));
				Totalcost = (Gwanzura * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Gwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd);
			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIGwanzura));
				Totalcost = (VIGwanzura * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIGwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVGwanzura));
				Totalcost = (VVGwanzura * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVGwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd);
			}

		if((cmbStadium->Text == "National_Sports") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (National_Sports));
				Totalcost = (National_Sports * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (National_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd);
			}

		if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VINational_Sports));
				Totalcost = (VINational_Sports * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VINational_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "National_Sports") && (rbVVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVNational_Sports));
				Totalcost = (VVNational_Sports * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVNational_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Babourfields));
				Totalcost = (Babourfields * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Babourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd);

			}

						  
		if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIBabourfields));
				Totalcost = (VIBabourfields * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIBabourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd);
			}

						    
		if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbSingle->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVBabourfields));
				Totalcost = (VVBabourfields * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVBabourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbAdult->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd);

			}
//7

		if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Rufaro/2));
				Totalcost = (Rufaro/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Rufaro/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd);


			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIRufaro/2));
				Totalcost = (VIRufaro/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIRufaro/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVRufaro/2));
				Totalcost = (VVRufaro/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVRufaro/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd);
			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Gwanzura/2));
				Totalcost = (Gwanzura/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Gwanzura/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd);
			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIGwanzura/2));
				Totalcost = (VIGwanzura/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIGwanzura/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd);
			}

			    if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVGwanzura/2));
				Totalcost = (VVGwanzura/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVGwanzura/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "National_Sports") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (National_Sports/2));
				Totalcost = (National_Sports/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (National_Sports/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd);
			}

		if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VINational_Sports/2));
				Totalcost = (VINational_Sports/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VINational_Sports/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "National_Sports") && (rbVVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVNational_Sports/2));
				Totalcost = (VVNational_Sports/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVNational_Sports/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "National Sports";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd);

			}

		if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Babourfields/2));
				Totalcost = (Babourfields/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (Babourfields/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd);
			}

						  
		if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIBabourfields/2));
				Totalcost = (VIBabourfields/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VIBabourfields/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd);

			}

						    
		if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbSingle->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVBabourfields/2));
				Totalcost = (VVBabourfields/2 * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (VVBabourfields/2 + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = rbChild->Text;
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbSingle->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd);
			}
//8

			if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((Rufaro * 1.7) + (Rufaro / 1.7)));
				Totalcost = (((Rufaro * 1.7) + (Rufaro / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((Rufaro * 1.7) + (Rufaro / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VIRufaro * 1.7) + (VIRufaro / 1.7)));
				Totalcost = (((VIRufaro * 1.7) + (VIRufaro / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VIRufaro * 1.7) + (VIRufaro / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);
			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VVRufaro * 1.7) + (VVRufaro / 1.7)));
				Totalcost = (((Rufaro * 1.7) + (VVRufaro / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VVRufaro * 1.7) + (VVRufaro / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|"+ Convert::ToString(iRandd+2);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((Gwanzura * 1.7) + (Gwanzura / 1.7)));
				Totalcost = (((Gwanzura * 1.7) + (Gwanzura / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((Gwanzura * 1.7) + (Gwanzura / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VIGwanzura * 1.7) + (VIGwanzura / 1.7)));
				Totalcost = (((VIGwanzura * 1.7) + (VIGwanzura / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VIGwanzura * 1.7) + (VIGwanzura / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

			    if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VVGwanzura * 1.7) + (VVGwanzura / 1.7)));
				Totalcost = (((VVGwanzura * 1.7) + (VVGwanzura / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VVGwanzura * 1.7) + (VVGwanzura / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);


			}

				if((cmbStadium->Text == "National_Sports") && (rbStandard->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((National_Sports * 1.7) + (National_Sports / 1.7)));
				Totalcost = (((National_Sports * 1.7) + (National_Sports / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((National_Sports * 1.7) + (National_Sports / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

				if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VINational_Sports * 1.7) + (VINational_Sports / 1.7)));
				Totalcost = (((VINational_Sports * 1.7) + (VINational_Sports / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VINational_Sports * 1.7) + (VINational_Sports / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);
			}

					if((cmbStadium->Text == "National_Sports")  && (rbVVip->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VVNational_Sports * 1.7) + (VVNational_Sports / 1.7)));
				Totalcost = (((VVNational_Sports * 1.7) + (VVNational_Sports / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VVNational_Sports * 1.7) + (VVNational_Sports / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);


			}

				if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((Babourfields * 1.7) + (Babourfields / 1.7)));
				Totalcost = (((Babourfields * 1.7) + (Babourfields / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((Babourfields * 1.7) + (Babourfields / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);

			}

						  
			if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VIBabourfields * 1.7) + (VIBabourfields / 1.7)));
				Totalcost = (((VIBabourfields * 1.7) + (VIBabourfields / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VIBabourfields * 1.7) + (VIBabourfields / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);
			}

						    
			if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbGroup->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", ((VVBabourfields * 1.7) + (VVBabourfields / 1.7)));
				Totalcost = (((VVBabourfields * 1.7) + (VVBabourfields / 1.7)) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", (((VVBabourfields * 1.7) + (VVBabourfields / 1.7)) + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbGroup->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1) + "|" + Convert::ToString(iRandd+2);


			}
//9

			if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Rufaro * 2));
				Totalcost = ((Rufaro * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Rufaro * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);
			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIRufaro * 2));
				Totalcost = ((VIRufaro * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIRufaro * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);
			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVRufaro * 2));
				Totalcost = ((VVRufaro * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVRufaro * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Gwanzura * 2));
				Totalcost = ((Gwanzura * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Gwanzura * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIGwanzura * 2));
				Totalcost = ((VIGwanzura * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIGwanzura * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVGwanzura * 2));
				Totalcost = ((VVGwanzura * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVGwanzura * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

		if((cmbStadium->Text == "National_Sports") && (rbStandard->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (National_Sports * 2));
				Totalcost = ((National_Sports * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((National_Sports * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

		if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VINational_Sports * 2));
				Totalcost = ((VINational_Sports * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VINational_Sports * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);


			}

		if((cmbStadium->Text == "National_Sports") && (rbVVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVNational_Sports * 2));
				Totalcost = ((VVNational_Sports * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVNational_Sports * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);
			}

		if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Babourfields * 2));
				Totalcost = ((Babourfields * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Babourfields * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);
			}

						  
		if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIBabourfields * 2));
				Totalcost = ((VIBabourfields * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIBabourfields * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);
			}

						    
		if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbDouble->Checked) && (rbAdult->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVBabourfields * 2));
				Totalcost = ((VVBabourfields * 2) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVBabourfields * 2 )+ Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "2 Adults";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);
			}
//10

		if((cmbStadium->Text == "Rufaro") && (rbStandard->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Rufaro/2) + Rufaro);
				Totalcost = (((Rufaro/2) + Rufaro) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Rufaro/2) + Rufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIRufaro/2) + VIRufaro);
				Totalcost = (((VIRufaro/2) + VIRufaro) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIRufaro/2) + VIRufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Rufaro") && (rbVVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVRufaro/2) + VVRufaro);
				Totalcost = (((VVRufaro/2) + VIRufaro) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVRufaro/2) + VVRufaro + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Rufaro";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbStandard->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Gwanzura/2) + Gwanzura);
				Totalcost = (((Gwanzura/2) + Gwanzura) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Gwanzura/2) + Gwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Gwanzura") && (rbVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIGwanzura/2) + VIGwanzura);
				Totalcost = (((VIGwanzura/2) + VIGwanzura) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIGwanzura/2) + VIGwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			    if((cmbStadium->Text == "Gwanzura") && (rbVVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVGwanzura/2) + VVGwanzura);
				Totalcost = (((VVGwanzura/2) + VVGwanzura) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVGwanzura/2) + VVGwanzura + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Gwanzura";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

				if((cmbStadium->Text == "National_Sports") && (rbStandard->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (National_Sports/2) + National_Sports);
				Totalcost = (((National_Sports/2) + National_Sports) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((National_Sports/2) + National_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "National_Sports") && (rbVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VINational_Sports/2) + VINational_Sports);
				Totalcost = (((VINational_Sports/2) + VINational_Sports) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VINational_Sports/2) + VINational_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "National_Sports") && (rbVVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVNational_Sports/2) + VVNational_Sports);
				Totalcost = (((VVNational_Sports/2) + VVNational_Sports) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVNational_Sports/2) + VVNational_Sports + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "National Sports";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

			if((cmbStadium->Text == "Babourfields") && (rbStandard->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (Babourfields/2) + Babourfields);
				Totalcost = (((Babourfields/2) + Babourfields) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((Babourfields/2) + Babourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;;
				txtTicketype->Text = rbStandard->Text;
				txtAdult->Text = "1 Adult ";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "O " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

						  
			if((cmbStadium->Text == "Babourfields") && (rbVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VIBabourfields/2) + VIBabourfields);
				Totalcost = (((VIBabourfields/2) + VIBabourfields) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VIBabourfields/2) + VIBabourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVip->Text;
				txtAdult->Text = "1 Adult";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);

			}

						    
		else if((cmbStadium->Text == "Babourfields") && (rbVVip->Checked) && (rbDouble->Checked) && (rbChild->Checked) && (rbOther->Checked))

			{
				lblSubtotal->Text = String::Format("{0:C2}", (VVBabourfields/2) + VVBabourfields);
				Totalcost = (((VVBabourfields/2) + VVBabourfields) * VAT) / 100;
				lblVAT->Text = String::Format("{0:C2}", (Totalcost));
				lblTotal->Text =String::Format("{0:C2}", ((VVBabourfields/2) + VVBabourfields + Totalcost));
				txtPrice->Text= lblTotal->Text;
				txtEventicket->Text = rbOther->Text;
				txtTicketype->Text = rbVVip->Text;
				txtAdult->Text = "1 Adult";
				txtChild->Text = "1 Child";
				txtStadium->Text = "Babourfields";
				txtClass->Text = rbDouble->Text;
				lblSit->Text = "VVIP " + Convert::ToString(iRandd) + "|" + Convert::ToString(iRandd+1);	
			}


			rtbReceipt->Text="";
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("ZIFA"+ "\t\t\t\t\t\t" + "Tel:263-789809|890526"  + Environment::NewLine);
			rtbReceipt->AppendText("19 Fourth Avenue"+ "\t\t\t\t" + "Email:info@zifa.com"  + Environment::NewLine);
			rtbReceipt->AppendText("Box 8906,Mbare,Harare"+ "\t\t\t\t" + "Web:www.zifa.org"  + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t" + "EVENT  TICKET" + Environment::NewLine);
			rtbReceipt->AppendText("   ________________________________________________________" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label8->Text +"\t\t"+ txtRefno->Text + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label11->Text +"\t\t\t\t" + txtEventicket->Text + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label1->Text +"\t\t\t\t" + txtStadium->Text + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label2->Text + "\t\t\t\t" + txtTicketype->Text + Environment::NewLine);
			rtbReceipt->AppendText("   ________________________________________________________" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label5->Text + "\t\t\t" + lblSubtotal->Text + "->"+ txtAdult->Text + txtChild->Text + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label6->Text + "\t\t\t\t" + lblVAT->Text + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label16->Text + "\t\t\t\t" + txtPrice->Text + Environment::NewLine);
			rtbReceipt->AppendText( "\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label25->Text + "\t\t\t" + txtClass->Text + Environment::NewLine);
			rtbReceipt->AppendText( "\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + "Sitting Position" + "\t\t\t" + lblSit->Text + Environment::NewLine);
			rtbReceipt->AppendText( "\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + lblHolder->Text + "\t\t\t" + txtHolder->Text + Environment::NewLine);
			rtbReceipt->AppendText( "\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("   ________________________________________________________");
			rtbReceipt->AppendText( "\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label15->Text + "\t\t\t\t" + txtDate->Text + Environment::NewLine);
			rtbReceipt->AppendText( "\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + label9->Text +"\t\t\t\t"+ txtTime->Text + Environment::NewLine);
			rtbReceipt->AppendText( "\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t" + "Cashier" + "\t\t\t\t"  + lblUserin->Text + Environment::NewLine);
			rtbReceipt->AppendText("   _________________________________________________________" + Environment::NewLine);
			rtbReceipt->AppendText( "\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t\t" + "     END OF FISCAL TICKET" + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t" + "THANK YOU !!!" + Environment::NewLine);
			rtbReceipt->AppendText("\t\t\t\t\t\t" + Environment::NewLine);
			rtbReceipt->AppendText( "\t\t\t" + Environment::NewLine);		
		}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {

			String^ drawString = rtbReceipt->Text;
			String^ drawBarcode = txtBarcode->Text;
			//String^ drawQR = "zifa.org";
			System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial Rounded MT",16);
			System::Drawing::Font^ drawFont2 = gcnew System::Drawing::Font("CCode39",22);
			//System::Drawing::Font^ drawFont3 = gcnew System::Drawing::Font("QR font tfb",87);
			SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
			PointF drawPoint = PointF(50.50F, 50.50F);
			PointF drawPoints = PointF(12.0F, 1085.0F);
			//PointF drawPoints2 = PointF(690.0F, 1050.0F);
			e->Graphics->DrawString(drawString, drawFont, drawBrush,drawPoint);
			e->Graphics->DrawString(drawBarcode, drawFont2, drawBrush,drawPoints);
			//e->Graphics->DrawString(drawQR, drawFont3, drawBrush,drawPoints2);
		    System::Drawing::Graphics^ g = this->CreateGraphics();
		    e->Graphics->DrawImage(pictureBox1->Image,330,10);
		    e->Graphics->DrawImage(pictureBox2->Image,712,1050);

		}
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {

			    lblSubtotal->Text = "";
				lblVAT->Text = "";
				lblTotal->Text = "";
				txtPrice->Text= "";
				txtEventicket-> Text = "";
				txtTicketype-> Text = "";
				txtChild->Text = "";
				txtAdult->Text = "";
				txtRefno->Text = "";
				lblCC->Text = "";
				txtCC->Text = "";
				cmbStadium->Text = "Select Stadium";
				rtbReceipt->Text = "";
				txtStadium->Text = "";
				txtClass->Text = "";
				txtBarcode->Text = "Barcode";
				lblSit->Text = "Sitting Position";
				txtHolder->Text = "";

				this->progressBar1->Increment(-1000);
			   timer2->Enabled = false;
		}
private: System::Void btnAddData_Click(System::Object^  sender, System::EventArgs^  e) {

			try
			{
				OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb"); 
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "insert into ainfo (ID,UserName,Namef,Surname,Privacy,Area,Email,"+
				" Telephone,Other)values('" +
				txtID->Text + "','" + 
				txtUsername->Text + "','" + 
				txtNamef->Text + "','" + 
				txtSurname->Text + "','" + 
				txtPassword->Text + "','" + 
				txtLocation->Text + "','" + 
				txtEmail->Text + "','" + 
				txtTelephone->Text + "','" +

				"')";

			System::Windows::Forms::DialogResult iReset;
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Add User");
			iReset = MessageBox::Show("Add User","Zifa Ticketing System",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 

			if (iReset == System::Windows::Forms::DialogResult::Yes)
				{
			cmd->ExecuteNonQuery();
			conn->Close();
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Record is Successful");
			MessageBox::Show("Record is Successful","Zifa Ticketing System",
				MessageBoxButtons::OK,MessageBoxIcon::Error);
			ConnectionDB();
			}
			}
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Form2", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}
		}
private: System::Void btnResetADdat_Click(System::Object^  sender, System::EventArgs^  e) {

			try
			{
			System::Windows::Forms::DialogResult iReset;
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Reset");
			iReset = MessageBox::Show("Reset","Zifa Ticketing System",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				  


			if (iReset == System::Windows::Forms::DialogResult::Yes)
				{
				txtID->Text = "";
				txtUsername->Text = "";
				txtNamef->Text = "";
				txtSurname->Text = "";
				txtPassword->Text = "";
				txtLocation->Text = "";
				txtEmail->Text = "";
				txtTelephone->Text = "";
				 
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Reset is Successful");
			MessageBox::Show("Reset is Successful","Zifa Ticketing System",
				MessageBoxButtons::OK,MessageBoxIcon::Error);
			  

			ConnectionDB();
			}
				}
			  
				
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}
		}
private: System::Void btnSearchAdmin_Click(System::Object^  sender, System::EventArgs^  e) {

			checker = 0;
			try
			{
			OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb");  
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "Select * from ainfo where ID = '" + txtSearch->Text + "' or Username = '" + txtSearch->Text + "'";
			cmd->ExecuteNonQuery();
			DataTable^ dt = gcnew DataTable();
			OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
			dp->Fill(dt);
			checker = Convert::ToInt32(dt->Rows->Count.ToString());
			dataGridView1->DataSource = dt;
			conn->Close();

			if (checker == 0)
			{
				SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Record Not Found");
			MessageBox::Show("Record Not Found!","Database Connection",
				MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			
			txtSearch->Text = "";
			ConnectionDB();
			}
			}
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			 
			}
		}
private: System::Void btnUpdateAdmin_Click(System::Object^  sender, System::EventArgs^  e) {

			try
			{
				 
			OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb"); 
			conn->Open();
		    OleDbCommand^ cmd  = conn->CreateCommand();
		    cmd->CommandType = CommandType::Text;
		    cmd->CommandText = "Update ainfo set Area = '" + txtLocation->Text + "', Privacy = '" + txtPassword->Text + "', Email = '" + txtEmail->Text + "', Telephone = '" + txtTelephone->Text + "' where Username = '" 
			+ txtUsername->Text + "' and Namef = '" + txtNamef->Text + "'";

			

		    System::Windows::Forms::DialogResult iReset;
		    SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Update User");
			iReset = MessageBox::Show("Update User","Zifa Ticketing System",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 
			if (iReset == System::Windows::Forms::DialogResult::Yes)
				{ 
		    cmd->ExecuteNonQuery();
		    conn->Close();
			
		    SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Update is successful");
		    MessageBox::Show("Update is Successful","Zifa Ticketing System",
				MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			


			ConnectionDB();
				}
			   
			}
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			
			}
		}

private: System::Void printDocument2_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {

		    e->Graphics->DrawImage(bitmap,1,1);  
		}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

			DateTime iTime = DateTime::Now;
			
		}
private: System::Void btnSearchRec_Click(System::Object^  sender, System::EventArgs^  e) {

			checker = 0;
			try
			{
			OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb");  
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "Select * from rinfo where Reference = '" + textBox1->Text + "' or Dates = '" + textBox1->Text + "'";
			cmd->ExecuteNonQuery();
			DataTable^ dt = gcnew DataTable();
			OleDbDataAdapter^ dp = gcnew OleDbDataAdapter(cmd);
			dp->Fill(dt);
			checker = Convert::ToInt32(dt->Rows->Count.ToString());
			dataGridView2->DataSource = dt;
			conn->Close();


			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Record not found");
			if (checker == 0)
			{

			
			MessageBox::Show("Record Not Found!","Zifa Ticketing System",
				MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			txtSearch->Text = "";
			  
			}

			else if (checker > 0)
			{
			
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
			
			}
			}
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			
			}
		}
private: System::Void btnResetRec_Click(System::Object^  sender, System::EventArgs^  e) {

			try
			{

			System::Windows::Forms::DialogResult iReset;
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Reset");
			iReset = MessageBox::Show("Reset","Zifa Ticketing System",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (iReset == System::Windows::Forms::DialogResult::Yes)

			{
			
				textBox1->Text = "";
				
				 
				SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		        Sapi->SpeakAsync("Reset is Successful");
			    MessageBox::Show("Reset is Successful","Zifa Ticketing System",
				MessageBoxButtons::OK,MessageBoxIcon::Error);

				ConnectionQV();
			}
				}
			catch (Exception^ ex)
			{
			    MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}

			
		}
private: System::Void btnBackAd_Click(System::Object^  sender, System::EventArgs^  e) {

			    tabPage1->Visible = true;
		}
private: System::Void btnDelAd_Click(System::Object^  sender, System::EventArgs^  e) {


			   System::Windows::Forms::DialogResult iReset;
			   SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		       Sapi->SpeakAsync("Delete User");
			   iReset = MessageBox::Show("Delete User","Zifa Ticketing System",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 

				if (iReset == System::Windows::Forms::DialogResult::Yes)

				{ 

			try
			{
			OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb");  
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "delete * from ainfo where ID = '" + txtID->Text + "'";
			cmd->ExecuteNonQuery();
			conn->Close();

			Sapi->SpeakAsync("User deleted");
			MessageBox::Show("User Deleted","Zifa Ticketing System",
				MessageBoxButtons::OK);
			

			 
			    txtID->Text = "";
				txtUsername->Text = "";
				txtNamef->Text = "";
				txtSurname->Text = "";
				txtPassword->Text = "";
				txtLocation->Text = "";
				txtEmail->Text = "";
				txtTelephone->Text = "";
				ConnectionDB();
			}
			catch (Exception^ ex)
			{

			MessageBox::Show(ex->Message,"Zifa Ticketing System", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}
				}
		}
private: System::Void btnBackRec_Click_1(System::Object^  sender, System::EventArgs^  e) {
			//records back
			tabPage1->Visible = true;
			
		}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			System::Windows::Forms::DialogResult iReset;
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Logout");
			iReset = MessageBox::Show("Logout","ZIFA Ticketing System",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				  
			if (iReset == System::Windows::Forms::DialogResult::Yes)

			{
				this->Hide();
				SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		        Sapi->SpeakAsync(lblUserin->Text + "Logged off");

			}

		}
private: System::Void btbBackRec_Click(System::Object^  sender, System::EventArgs^  e) {
			   //print back
			   tabPage1->Visible = true;

			   lblSubtotal->Text = "";
			   lblVAT->Text = "";
			   lblTotal->Text = "";
			   txtPrice->Text= "";
			   txtEventicket-> Text = "";
			   txtTicketype-> Text = "";
			   txtChild->Text = "";
			   txtAdult->Text = "";
			   txtRefno->Text = "";
			   lblCC->Text = "";
			   txtCC->Text = "";
			   cmbStadium->Text = "Select Stadium";
			   rtbReceipt->Text = "";
			   txtStadium->Text = "";
			   txtClass->Text = "";
			   txtBarcode->Text = "Barcode";
			   lblSit->Text = "Sitting Position";
			   txtHolder->Text = "";
			  
			   serialPort1->Close();
			   
			   this->progressBar1->Increment(-1000);
			   timer2->Enabled = false;
		}

		

private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
			 
			 
		Console::Beep();
			 
			 System::Windows::Forms::DialogResult iReset;

			 try
			{
				iReset= MessageBox::Show(serialPort1->ReadLine(),"Serial Connection",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			
			}
				 
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Serial Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}

		if (iReset == System::Windows::Forms::DialogResult::Yes)

			{ 
				SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
				Sapi->SpeakAsync("Check In Approved");

				int counted = 3;
			
			  lblCount->Text = counted.ToString();
			  counted++;
		
				try
			{
				OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb"); 
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand(); 
			cmd->CommandType = CommandType::Text;
		

			cmd->CommandText = "insert into cinfo (Event,Timed,Type,Check_Status,Stadium,Reference, Dates,"+
				" Class,Other)values('"+ 

				txtEventicket->Text + "','" + 
				txtTime->Text + "','" + 
				txtClass->Text + "','" + 
				txtApproved->Text + "','" +
				txtStadium->Text +  "','" + 
				txtRefno->Text + "','" + 
				txtDate->Text + "','" +
				txtTicketype->Text + "','" +
				
				"')";
			cmd->ExecuteNonQuery();
			 
			
			ConnectionCI();
			conn->Close();

			
			}
				 
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}

			try
			{
				OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb"); 
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand(); 
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "update cinfo set Author = '" + lblUserin->Text + "' Where Reference = '" + txtRefno->Text + "' and Dates = '" + txtDate->Text  + "'"; 
			cmd->ExecuteNonQuery();
			

			ConnectionCI();
			conn->Close();
			}
				 
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}

				try
			{
				OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=N:\\FEKA@#4\\kudha\\Visual Studio 2010\\Projects\\FADZAI ERICK AISAM DISSERTATION\\Fadzai_Erick_Aisam_Project.mdb"); 
			conn->Open();
			OleDbCommand^ cmd  = conn->CreateCommand(); 
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "update rinfo set Check_Status =  '" + txtApproved->Text + "' , Check_Date = '" + txtDate->Text + "', Check_Time = '" + txtTime->Text + "', Check_Approver = '" + lblUserin->Text + "'  Where Reference = '" + txtRefno->Text + "' and Dates = '" + txtDate->Text  + "'"; 
			cmd->ExecuteNonQuery();
			 

			ConnectionQV();
			conn->Close();
			}
				 
			catch (Exception^ ex)
			{
			MessageBox::Show(ex->Message,"Database Connection", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}
				}
 
		 }
private: System::Void timer2_Tick_1(System::Object^  sender, System::EventArgs^  e) {

			 this->progressBar1->Increment(1);
		 }

private: System::Void btnAudio_Click(System::Object^  sender, System::EventArgs^  e) {

			 SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
			 Sapi->SpeakAsync("Dear Fan, Please say your name");
			 
			 SpeechRecognitionEngine^ recognition = gcnew SpeechRecognitionEngine();
			 Grammar^ word = gcnew  DictationGrammar();
			 recognition->LoadGrammar(word);

			 try
			 {
				 
				 txtHolder->Text = "Listening Now...";
				 recognition->SetInputToDefaultAudioDevice();
				 RecognitionResult^ result = recognition->Recognize();
				 Console::Beep();
				 txtHolder->Clear();
				 txtHolder->Text = result->Text;
			 }

			 

			 catch (Exception^ ex)
			{
				txtHolder->Text = "";
			MessageBox::Show(ex->Message,"Speach Assistant", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			}

			 finally
			 {
				 recognition->UnloadAllGrammars();
			 }

			 //private: System::Void recognition_SpeechRecognized(System::Object^  sender, SpeechHypothesizedEventArgs^  e,Form2 ^ form) {
			 //txtHolder->Text += e->Result->Text + Environment::NewLine;
			 //SpeechRecognitionEngine^ recognition = gcnew SpeechRecognitionEngine();
			 //recognition->LoadGrammar(gcnew DictationGrammar);
			 //recognition->SetInputToDefaultAudioDevice();
			 //recognition->RecognizeAsync(RecognizeMode::Multiple);
			 //recognition->SpeechRecognized += gcnew recognition_SpeechRecognized(this->&Form2::recognition_SpeechRecognized);
		 //}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 txtSearch->Text = "";
		 }
private: System::Void btnRecordsPrint_Click(System::Object^  sender, System::EventArgs^  e) {

			 System::Windows::Forms::DialogResult iReset;
			SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer();
		    Sapi->SpeakAsync("Print Records");
			iReset = MessageBox::Show("Print Records","Zifa Ticketing System",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 

			if (iReset == System::Windows::Forms::DialogResult::Yes)
				{ 

			try
			{

			int height = dataGridView2->Height;
			dataGridView2->Height = dataGridView2-> RowCount * dataGridView2->RowTemplate->Height * 1;
			bitmap = gcnew Bitmap(dataGridView2->Width,dataGridView1->Height);
			dataGridView2->DrawToBitmap(bitmap, System::Drawing::Rectangle(1,1, dataGridView2->Width, dataGridView2->Height));
			printPreviewDialog2->PrintPreviewControl->Zoom = 1;
			printPreviewDialog2->ShowDialog();
			dataGridView2->Height = height;

			printPreviewDialog2->Document = printDocument2;
			
			}

		    catch (Exception^ ex)

		    {
			MessageBox::Show(ex->Message);
		    }
		}
		 }

};
}