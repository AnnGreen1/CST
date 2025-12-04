#pragma once

namespace EmpSystemWinform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmMain 摘要
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  员工管理ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiAddEmp;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiEmpList;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiExit;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查看帮助ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关于我们ToolStripMenuItem;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->员工管理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiAddEmp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiEmpList = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsmiExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于我们ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->员工管理ToolStripMenuItem,
					this->帮助ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(776, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 员工管理ToolStripMenuItem
			// 
			this->员工管理ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tsmiAddEmp,
					this->tsmiEmpList, this->toolStripMenuItem1, this->tsmiExit
			});
			this->员工管理ToolStripMenuItem->Name = L"员工管理ToolStripMenuItem";
			this->员工管理ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->员工管理ToolStripMenuItem->Text = L"员工管理";
			// 
			// tsmiAddEmp
			// 
			this->tsmiAddEmp->Name = L"tsmiAddEmp";
			this->tsmiAddEmp->Size = System::Drawing::Size(181, 26);
			this->tsmiAddEmp->Text = L"添加员工";
			this->tsmiAddEmp->Click += gcnew System::EventHandler(this, &FrmMain::tsmiAddEmp_Click);
			// 
			// tsmiEmpList
			// 
			this->tsmiEmpList->Name = L"tsmiEmpList";
			this->tsmiEmpList->Size = System::Drawing::Size(181, 26);
			this->tsmiEmpList->Text = L"员工列表";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(178, 6);
			// 
			// tsmiExit
			// 
			this->tsmiExit->Name = L"tsmiExit";
			this->tsmiExit->Size = System::Drawing::Size(181, 26);
			this->tsmiExit->Text = L"退出";
			// 
			// 帮助ToolStripMenuItem
			// 
			this->帮助ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->查看帮助ToolStripMenuItem,
					this->关于我们ToolStripMenuItem
			});
			this->帮助ToolStripMenuItem->Name = L"帮助ToolStripMenuItem";
			this->帮助ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->帮助ToolStripMenuItem->Text = L"帮助";
			// 
			// 查看帮助ToolStripMenuItem
			// 
			this->查看帮助ToolStripMenuItem->Name = L"查看帮助ToolStripMenuItem";
			this->查看帮助ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->查看帮助ToolStripMenuItem->Text = L"查看帮助";
			// 
			// 关于我们ToolStripMenuItem
			// 
			this->关于我们ToolStripMenuItem->Name = L"关于我们ToolStripMenuItem";
			this->关于我们ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->关于我们ToolStripMenuItem->Text = L"关于我们";
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 450);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FrmMain";
			this->Text = L"员工管理系统-winform版";
			this->Load += gcnew System::EventHandler(this, &FrmMain::FrmMain_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FrmMain_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tsmiAddEmp_Click(System::Object^  sender, System::EventArgs^  e) {
		//MessageBox::Show("点击了菜单项");
	}
};
}
