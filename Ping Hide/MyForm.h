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
	private: System::Windows::Forms::Button^  button1;
	private: System::Diagnostics::ProcessStartInfo Process;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
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
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Hide";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Show";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(138, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Create Rule";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(100, 151);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Location = System::Drawing::Point(97, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Result";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(138, 79);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Check";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
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
			this->ClientSize = System::Drawing::Size(230, 198);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ping Hide";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			MessageBox::Show("Run The Program with Admin Rights.");
		}
#pragma endregion

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

		System::Diagnostics::Process::Start("https://github.com/pratyush997");
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
	//	System::Diagnostics::Process::Start("hide.bat");
	
		System::Diagnostics::Process^ process = gcnew System::Diagnostics::Process();
		process->StartInfo->WindowStyle = System::Diagnostics::ProcessWindowStyle::Hidden;
		process->StartInfo->FileName = "cmd.exe";
		process->StartInfo->Arguments = "/C  netsh advfirewall firewall set rule name=\"ping\" new enable=yes";
		process->Start();
		this->label1->Text = "DONE!";

		//http://stackoverflow.com/questions/10071762/executing-a-batch-file-from-windows-forms-application
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	System::Diagnostics::Process^ process = gcnew System::Diagnostics::Process();
	process->StartInfo->WindowStyle = System::Diagnostics::ProcessWindowStyle::Hidden;
	process->StartInfo->FileName = "cmd.exe";
	process->StartInfo->Arguments = "/C  netsh advfirewall firewall set rule name=\"ping\" new enable=no";
	process->Start();
	this->label1->Text = "DONE!";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("RULE NEEDS TO BE CREATED JUST ONCE!");
	System::Diagnostics::Process^ process = gcnew System::Diagnostics::Process();
	process->StartInfo->WindowStyle = System::Diagnostics::ProcessWindowStyle::Hidden;
	process->StartInfo->FileName = "cmd.exe";
	process->StartInfo->Arguments = "/C  netsh advfirewall firewall add rule name=\"ping\" protocol=icmpv4:any,any dir=out action=block";
	process->Start();
	this->label1->Text = "Rule Created!";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("Ping is Blocked if \"General Failure\"");
	System::Diagnostics::Process^ process = gcnew System::Diagnostics::Process();
	//process->StartInfo->WindowStyle = System::Diagnostics::ProcessWindowStyle::Hidden;
	process->StartInfo->FileName = "cmd.exe";
	process->StartInfo->Arguments = "/C  ping 8.8.8.8 -n 10";
	process->Start();
	this->label1->Text = "Checked";

}
};
}
