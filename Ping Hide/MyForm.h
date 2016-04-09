#pragma once


namespace PingHide {

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
	private: System::Windows::Forms::Button^  btn_hide;
	protected:

	private: System::Diagnostics::ProcessStartInfo Process;
	private: System::Windows::Forms::Button^  btn_show;
	private: System::Windows::Forms::Button^  btn_create;
	protected:


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_check;

	private: System::Windows::Forms::Label^  label2;


			 /// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_hide = (gcnew System::Windows::Forms::Button());
			this->btn_show = (gcnew System::Windows::Forms::Button());
			this->btn_create = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_check = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_hide
			// 
			this->btn_hide->Location = System::Drawing::Point(135, 46);
			this->btn_hide->Name = L"btn_hide";
			this->btn_hide->Size = System::Drawing::Size(75, 23);
			this->btn_hide->TabIndex = 0;
			this->btn_hide->Text = L"Hide";
			this->btn_hide->UseVisualStyleBackColor = true;
			this->btn_hide->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_show
			// 
			this->btn_show->Location = System::Drawing::Point(18, 46);
			this->btn_show->Name = L"btn_show";
			this->btn_show->Size = System::Drawing::Size(75, 23);
			this->btn_show->TabIndex = 1;
			this->btn_show->Text = L"Show";
			this->btn_show->UseVisualStyleBackColor = true;
			this->btn_show->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btn_create
			// 
			this->btn_create->Location = System::Drawing::Point(177, 171);
			this->btn_create->Name = L"btn_create";
			this->btn_create->Size = System::Drawing::Size(39, 23);
			this->btn_create->TabIndex = 2;
			this->btn_create->Text = L"Rule";
			this->btn_create->UseVisualStyleBackColor = true;
			this->btn_create->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(100, 163);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(92, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Result";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_check
			// 
			this->btn_check->Location = System::Drawing::Point(78, 86);
			this->btn_check->Name = L"btn_check";
			this->btn_check->Size = System::Drawing::Size(75, 23);
			this->btn_check->TabIndex = 14;
			this->btn_check->Text = L"Check";
			this->btn_check->UseVisualStyleBackColor = true;
			this->btn_check->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"This Program Hides / Shows Pings.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(229, 207);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_check);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_create);
			this->Controls->Add(this->btn_show);
			this->Controls->Add(this->btn_hide);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ping Hide";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void cmds(int id)
	{
		System::Diagnostics::Process^ process = gcnew System::Diagnostics::Process();
		
		process->StartInfo->FileName = "cmd.exe";
		process->StartInfo->UseShellExecute = true;
		process->StartInfo->Verb = "runas";

		switch (id)
		{
		case 1:			//Hide
		{
			process->StartInfo->WindowStyle = System::Diagnostics::ProcessWindowStyle::Hidden;
			process->StartInfo->Arguments = "/C  netsh advfirewall firewall set rule name=\"PingHide\" new enable=yes";
			break;			
		}

		case 2:			// Show
		{
			process->StartInfo->WindowStyle = System::Diagnostics::ProcessWindowStyle::Hidden;
			process->StartInfo->Arguments = "/C  netsh advfirewall firewall set rule name=\"PingHide\" new enable=no";
			break;
		}

		case 3:			//Creates Rule
		{
			process->StartInfo->WindowStyle = System::Diagnostics::ProcessWindowStyle::Hidden;
			process->StartInfo->Arguments = "/C  netsh advfirewall firewall add rule name=\"PingHide\" protocol=icmpv4:any,any dir=out action=block";
			break;
		}

		case 4:			//Checks the status
		{
			process->StartInfo->Arguments = "/C  ping 8.8.8.8 -n 10";
			break;
		}
		}

		process->Start();
	
	}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

		System::Diagnostics::Process::Start("https://github.com/pratyush997");
		System::Diagnostics::Process::Start("http://pratyush997.xyz/");

		MessageBox::Show("Version 1.5");
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
		int id = 1;
		cmds(id);
		this->label1->Text = "Hidden!";
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	int id = 2;
	cmds(id);
	this->label1->Text = "Shown!";

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("RULE NEEDS TO BE CREATED JUST ONCE!\nManual Fix is needed otherwise.");
	int id = 3;
	cmds(id);
	this->label1->Text = "Created!";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("Ping is Hidden if \"General Failure\"");
	int id = 4;
	cmds(id);
	this->label1->Text = "Checked";
}
};
}
