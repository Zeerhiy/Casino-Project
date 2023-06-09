#pragma once
#include "CasinoF.h"
#include "Funcs.h"


namespace CasinoWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CasinoMenu
	/// </summary>
	public ref class CasinoMenu : public System::Windows::Forms::Form
	{
	public:
		CasinoMenu(void)
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
		~CasinoMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backToTheMainMenuToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ exitTheProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ userInfoToolStripMenuItem;


	private: System::Windows::Forms::GroupBox^ Info_groupBox;
	private: System::Windows::Forms::Label^ Cash_label2;
	private: System::Windows::Forms::Label^ Tokens_label1;
	private: System::Windows::Forms::Label^ Cash_label1;
	private: System::Windows::Forms::Label^ Tokens_label;
	private: System::Windows::Forms::Label^ Cash_label;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ TokensToCash_textBox;
	private: System::Windows::Forms::TextBox^ CashToTokens_textBox;
	private: System::Windows::Forms::Button^ TokensToCash_button;
	private: System::Windows::Forms::Button^ CashToTokens_button;
	private: System::Windows::Forms::Label^ TokensToCash_label;
	private: System::Windows::Forms::Label^ CashToTokens_label;
	private: System::Windows::Forms::GroupBox^ Roulette_groupBox;
	private: System::Windows::Forms::RadioButton^ Green_radioButton;

	private: System::Windows::Forms::RadioButton^ Black_radioButton;
	private: System::Windows::Forms::RadioButton^ Red_radioButton;



	private: System::Windows::Forms::Label^ Choice_label;
	private: System::Windows::Forms::TextBox^ Bet_textBox;
	private: System::Windows::Forms::Label^ Bet_label;
	private: System::Windows::Forms::Label^ WinningLot_label;
	private: System::Windows::Forms::Label^ WinningLotText_label;
	private: System::Windows::Forms::Button^ Bet_button;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;




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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backToTheMainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitTheProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userInfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Info_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Cash_label2 = (gcnew System::Windows::Forms::Label());
			this->Tokens_label1 = (gcnew System::Windows::Forms::Label());
			this->Cash_label1 = (gcnew System::Windows::Forms::Label());
			this->Tokens_label = (gcnew System::Windows::Forms::Label());
			this->Cash_label = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TokensToCash_textBox = (gcnew System::Windows::Forms::TextBox());
			this->CashToTokens_textBox = (gcnew System::Windows::Forms::TextBox());
			this->TokensToCash_button = (gcnew System::Windows::Forms::Button());
			this->CashToTokens_button = (gcnew System::Windows::Forms::Button());
			this->TokensToCash_label = (gcnew System::Windows::Forms::Label());
			this->CashToTokens_label = (gcnew System::Windows::Forms::Label());
			this->Roulette_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->WinningLot_label = (gcnew System::Windows::Forms::Label());
			this->WinningLotText_label = (gcnew System::Windows::Forms::Label());
			this->Bet_button = (gcnew System::Windows::Forms::Button());
			this->Green_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Black_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Red_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Choice_label = (gcnew System::Windows::Forms::Label());
			this->Bet_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Bet_label = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->Info_groupBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->Roulette_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->exitToolStripMenuItem,
					this->userInfoToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(645, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->backToTheMainMenuToolStripMenuItem,
					this->exitTheProgramToolStripMenuItem
			});
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(47, 24);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// backToTheMainMenuToolStripMenuItem
			// 
			this->backToTheMainMenuToolStripMenuItem->Name = L"backToTheMainMenuToolStripMenuItem";
			this->backToTheMainMenuToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->backToTheMainMenuToolStripMenuItem->Text = L"Back to main menu";
			this->backToTheMainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &CasinoMenu::backToTheMainMenuToolStripMenuItem_Click);
			// 
			// exitTheProgramToolStripMenuItem
			// 
			this->exitTheProgramToolStripMenuItem->Name = L"exitTheProgramToolStripMenuItem";
			this->exitTheProgramToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->exitTheProgramToolStripMenuItem->Text = L"Exit the program";
			this->exitTheProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &CasinoMenu::exitTheProgramToolStripMenuItem_Click);
			// 
			// userInfoToolStripMenuItem
			// 
			this->userInfoToolStripMenuItem->Name = L"userInfoToolStripMenuItem";
			this->userInfoToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->userInfoToolStripMenuItem->Text = L"User Info";
			this->userInfoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CasinoMenu::userInfoToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &CasinoMenu::aboutToolStripMenuItem_Click);
			// 
			// Info_groupBox
			// 
			this->Info_groupBox->Controls->Add(this->Cash_label2);
			this->Info_groupBox->Controls->Add(this->Tokens_label1);
			this->Info_groupBox->Controls->Add(this->Cash_label1);
			this->Info_groupBox->Controls->Add(this->Tokens_label);
			this->Info_groupBox->Controls->Add(this->Cash_label);
			this->Info_groupBox->Location = System::Drawing::Point(29, 48);
			this->Info_groupBox->Margin = System::Windows::Forms::Padding(4);
			this->Info_groupBox->Name = L"Info_groupBox";
			this->Info_groupBox->Padding = System::Windows::Forms::Padding(4);
			this->Info_groupBox->Size = System::Drawing::Size(599, 117);
			this->Info_groupBox->TabIndex = 1;
			this->Info_groupBox->TabStop = false;
			this->Info_groupBox->Text = L"Info";
			// 
			// Cash_label2
			// 
			this->Cash_label2->AutoSize = true;
			this->Cash_label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cash_label2->Location = System::Drawing::Point(159, 46);
			this->Cash_label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Cash_label2->Name = L"Cash_label2";
			this->Cash_label2->Size = System::Drawing::Size(24, 25);
			this->Cash_label2->TabIndex = 4;
			this->Cash_label2->Text = L"$";
			this->Cash_label2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Tokens_label1
			// 
			this->Tokens_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Tokens_label1->Location = System::Drawing::Point(369, 44);
			this->Tokens_label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Tokens_label1->Name = L"Tokens_label1";
			this->Tokens_label1->Size = System::Drawing::Size(157, 25);
			this->Tokens_label1->TabIndex = 3;
			this->Tokens_label1->Text = L"0";
			this->Tokens_label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Cash_label1
			// 
			this->Cash_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cash_label1->Location = System::Drawing::Point(8, 44);
			this->Cash_label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Cash_label1->Name = L"Cash_label1";
			this->Cash_label1->Size = System::Drawing::Size(157, 25);
			this->Cash_label1->TabIndex = 2;
			this->Cash_label1->Text = L"0";
			this->Cash_label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Tokens_label
			// 
			this->Tokens_label->AutoSize = true;
			this->Tokens_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Tokens_label->Location = System::Drawing::Point(437, 20);
			this->Tokens_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Tokens_label->Name = L"Tokens_label";
			this->Tokens_label->Size = System::Drawing::Size(84, 25);
			this->Tokens_label->TabIndex = 1;
			this->Tokens_label->Text = L"Tokens";
			// 
			// Cash_label
			// 
			this->Cash_label->AutoSize = true;
			this->Cash_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cash_label->Location = System::Drawing::Point(115, 20);
			this->Cash_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Cash_label->Name = L"Cash_label";
			this->Cash_label->Size = System::Drawing::Size(63, 25);
			this->Cash_label->TabIndex = 0;
			this->Cash_label->Text = L"Cash";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->TokensToCash_textBox);
			this->groupBox1->Controls->Add(this->CashToTokens_textBox);
			this->groupBox1->Controls->Add(this->TokensToCash_button);
			this->groupBox1->Controls->Add(this->CashToTokens_button);
			this->groupBox1->Controls->Add(this->TokensToCash_label);
			this->groupBox1->Controls->Add(this->CashToTokens_label);
			this->groupBox1->Location = System::Drawing::Point(29, 181);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(599, 158);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Exchanger";
			// 
			// TokensToCash_textBox
			// 
			this->TokensToCash_textBox->Location = System::Drawing::Point(237, 100);
			this->TokensToCash_textBox->Margin = System::Windows::Forms::Padding(4);
			this->TokensToCash_textBox->Name = L"TokensToCash_textBox";
			this->TokensToCash_textBox->Size = System::Drawing::Size(181, 22);
			this->TokensToCash_textBox->TabIndex = 5;
			this->TokensToCash_textBox->Text = L"0";
			// 
			// CashToTokens_textBox
			// 
			this->CashToTokens_textBox->Location = System::Drawing::Point(237, 42);
			this->CashToTokens_textBox->Margin = System::Windows::Forms::Padding(4);
			this->CashToTokens_textBox->Name = L"CashToTokens_textBox";
			this->CashToTokens_textBox->Size = System::Drawing::Size(181, 22);
			this->CashToTokens_textBox->TabIndex = 4;
			this->CashToTokens_textBox->Text = L"0";
			// 
			// TokensToCash_button
			// 
			this->TokensToCash_button->Location = System::Drawing::Point(448, 94);
			this->TokensToCash_button->Margin = System::Windows::Forms::Padding(4);
			this->TokensToCash_button->Name = L"TokensToCash_button";
			this->TokensToCash_button->Size = System::Drawing::Size(143, 36);
			this->TokensToCash_button->TabIndex = 3;
			this->TokensToCash_button->Text = L"Exchange";
			this->TokensToCash_button->UseVisualStyleBackColor = true;
			this->TokensToCash_button->Click += gcnew System::EventHandler(this, &CasinoMenu::TokensToCash_button_Click);
			// 
			// CashToTokens_button
			// 
			this->CashToTokens_button->Location = System::Drawing::Point(448, 36);
			this->CashToTokens_button->Margin = System::Windows::Forms::Padding(4);
			this->CashToTokens_button->Name = L"CashToTokens_button";
			this->CashToTokens_button->Size = System::Drawing::Size(143, 36);
			this->CashToTokens_button->TabIndex = 2;
			this->CashToTokens_button->Text = L"Exchange";
			this->CashToTokens_button->UseVisualStyleBackColor = true;
			this->CashToTokens_button->Click += gcnew System::EventHandler(this, &CasinoMenu::CashToTokens_button_Click);
			// 
			// TokensToCash_label
			// 
			this->TokensToCash_label->AutoSize = true;
			this->TokensToCash_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TokensToCash_label->Location = System::Drawing::Point(55, 100);
			this->TokensToCash_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TokensToCash_label->Name = L"TokensToCash_label";
			this->TokensToCash_label->Size = System::Drawing::Size(160, 25);
			this->TokensToCash_label->TabIndex = 1;
			this->TokensToCash_label->Text = L"Tokens to cash";
			// 
			// CashToTokens_label
			// 
			this->CashToTokens_label->AutoSize = true;
			this->CashToTokens_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CashToTokens_label->Location = System::Drawing::Point(55, 42);
			this->CashToTokens_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CashToTokens_label->Name = L"CashToTokens_label";
			this->CashToTokens_label->Size = System::Drawing::Size(157, 25);
			this->CashToTokens_label->TabIndex = 0;
			this->CashToTokens_label->Text = L"Cash to tokens";
			// 
			// Roulette_groupBox
			// 
			this->Roulette_groupBox->BackColor = System::Drawing::SystemColors::Control;
			this->Roulette_groupBox->Controls->Add(this->WinningLot_label);
			this->Roulette_groupBox->Controls->Add(this->WinningLotText_label);
			this->Roulette_groupBox->Controls->Add(this->Bet_button);
			this->Roulette_groupBox->Controls->Add(this->Green_radioButton);
			this->Roulette_groupBox->Controls->Add(this->Black_radioButton);
			this->Roulette_groupBox->Controls->Add(this->Red_radioButton);
			this->Roulette_groupBox->Controls->Add(this->Choice_label);
			this->Roulette_groupBox->Controls->Add(this->Bet_textBox);
			this->Roulette_groupBox->Controls->Add(this->Bet_label);
			this->Roulette_groupBox->Location = System::Drawing::Point(29, 352);
			this->Roulette_groupBox->Margin = System::Windows::Forms::Padding(4);
			this->Roulette_groupBox->Name = L"Roulette_groupBox";
			this->Roulette_groupBox->Padding = System::Windows::Forms::Padding(4);
			this->Roulette_groupBox->Size = System::Drawing::Size(597, 207);
			this->Roulette_groupBox->TabIndex = 3;
			this->Roulette_groupBox->TabStop = false;
			this->Roulette_groupBox->Text = L"Roulette";
			// 
			// WinningLot_label
			// 
			this->WinningLot_label->AutoSize = true;
			this->WinningLot_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WinningLot_label->Location = System::Drawing::Point(480, 91);
			this->WinningLot_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->WinningLot_label->Name = L"WinningLot_label";
			this->WinningLot_label->Size = System::Drawing::Size(57, 39);
			this->WinningLot_label->TabIndex = 12;
			this->WinningLot_label->Text = L"__";
			// 
			// WinningLotText_label
			// 
			this->WinningLotText_label->AutoSize = true;
			this->WinningLotText_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->WinningLotText_label->Location = System::Drawing::Point(443, 43);
			this->WinningLotText_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->WinningLotText_label->Name = L"WinningLotText_label";
			this->WinningLotText_label->Size = System::Drawing::Size(143, 29);
			this->WinningLotText_label->TabIndex = 11;
			this->WinningLotText_label->Text = L"Winning lot";
			// 
			// Bet_button
			// 
			this->Bet_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Bet_button->Location = System::Drawing::Point(19, 159);
			this->Bet_button->Margin = System::Windows::Forms::Padding(4);
			this->Bet_button->Name = L"Bet_button";
			this->Bet_button->Size = System::Drawing::Size(241, 42);
			this->Bet_button->TabIndex = 10;
			this->Bet_button->Text = L"BET";
			this->Bet_button->UseVisualStyleBackColor = true;
			this->Bet_button->Click += gcnew System::EventHandler(this, &CasinoMenu::Bet_button_Click);
			// 
			// Green_radioButton
			// 
			this->Green_radioButton->AutoSize = true;
			this->Green_radioButton->Location = System::Drawing::Point(219, 130);
			this->Green_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->Green_radioButton->Name = L"Green_radioButton";
			this->Green_radioButton->Size = System::Drawing::Size(104, 20);
			this->Green_radioButton->TabIndex = 9;
			this->Green_radioButton->TabStop = true;
			this->Green_radioButton->Text = L"GREEN(32x)";
			this->Green_radioButton->UseVisualStyleBackColor = true;
			// 
			// Black_radioButton
			// 
			this->Black_radioButton->AutoSize = true;
			this->Black_radioButton->Location = System::Drawing::Point(19, 130);
			this->Black_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->Black_radioButton->Name = L"Black_radioButton";
			this->Black_radioButton->Size = System::Drawing::Size(91, 20);
			this->Black_radioButton->TabIndex = 8;
			this->Black_radioButton->TabStop = true;
			this->Black_radioButton->Text = L"BLACK(2x)";
			this->Black_radioButton->UseVisualStyleBackColor = true;
			// 
			// Red_radioButton
			// 
			this->Red_radioButton->AutoSize = true;
			this->Red_radioButton->Location = System::Drawing::Point(128, 130);
			this->Red_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->Red_radioButton->Name = L"Red_radioButton";
			this->Red_radioButton->Size = System::Drawing::Size(75, 20);
			this->Red_radioButton->TabIndex = 8;
			this->Red_radioButton->TabStop = true;
			this->Red_radioButton->Text = L"Red(2x)";
			this->Red_radioButton->UseVisualStyleBackColor = true;
			// 
			// Choice_label
			// 
			this->Choice_label->AutoSize = true;
			this->Choice_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Choice_label->Location = System::Drawing::Point(8, 91);
			this->Choice_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Choice_label->Name = L"Choice_label";
			this->Choice_label->Size = System::Drawing::Size(358, 25);
			this->Choice_label->TabIndex = 7;
			this->Choice_label->Text = L"Choose the color you want to bet on";
			// 
			// Bet_textBox
			// 
			this->Bet_textBox->Location = System::Drawing::Point(19, 63);
			this->Bet_textBox->Margin = System::Windows::Forms::Padding(4);
			this->Bet_textBox->Name = L"Bet_textBox";
			this->Bet_textBox->Size = System::Drawing::Size(181, 22);
			this->Bet_textBox->TabIndex = 6;
			this->Bet_textBox->Text = L"0";
			// 
			// Bet_label
			// 
			this->Bet_label->AutoSize = true;
			this->Bet_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Bet_label->Location = System::Drawing::Point(8, 32);
			this->Bet_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Bet_label->Name = L"Bet_label";
			this->Bet_label->Size = System::Drawing::Size(341, 25);
			this->Bet_label->TabIndex = 5;
			this->Bet_label->Text = L"Select the number of tokens to bet";
			// 
			// CasinoMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(645, 567);
			this->Controls->Add(this->Roulette_groupBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Info_groupBox);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"CasinoMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CasinoMenu";
			this->Load += gcnew System::EventHandler(this, &CasinoMenu::CasinoMenu_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Info_groupBox->ResumeLayout(false);
			this->Info_groupBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->Roulette_groupBox->ResumeLayout(false);
			this->Roulette_groupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
void UpdateInfo();
private: System::Void exitTheProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {Application::Exit();}
private: System::Void backToTheMainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CasinoMenu_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void CashToTokens_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TokensToCash_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Bet_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { MessageBox::Show(this, "BLACK GUN CASINO\nDETAILS: https://github.com/Zeerhiy/Casino-Project\n(c) SIGMAS", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); }
private: System::Void userInfoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
