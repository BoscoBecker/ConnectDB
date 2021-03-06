//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "DataModule.h"
#include "ViewMain.h"
#include "System.SysUtils.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner): TForm(Owner){}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConnectDB(){
	try {
		dmConexao->Connect();

	} catch (const Exception& e) {
		Application->MessageBox(e.Message.c_str(),L"Can't connect to Databas, See details below.");
	}
	this->OpenQuery();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormShow(TObject *Sender){
	this->ConnectDB();
}

//---------------------------------------------------------------------------
void __fastcall TForm2::OpenQuery(){
	dmConexao->query->Active = False;
	dmConexao->query->Active = True;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Save(const int id, System::UnicodeString desc, System::UnicodeString mark,  float price){
	try {
		dmConexao->SaveProducts(id,desc,mark,price);
	} catch (const Exception& e ) {
		Application->MessageBox(e.Message.c_str(),L"Can't Save the Product, See details below.");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::btnSaveClick(TObject *Sender)
{
	if (this->ValidateFields()){
		this->Save(StrToInt(edID->Text),edDesc->Text,edTrade->Text,StrToFloat(edPrice->Text));
        this->ClearFields();
	}
	this->OpenQuery();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DBNavigator1Click(TObject *Sender, TNavigateBtn Button)
{
    this->OpenQuery();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SearchChange(TObject *Sender)
{
	dmConexao->SearchProducts(Search->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ClearFields()
{
	this->edID->Clear();
	this->edDesc->Clear();
	this->edTrade->Clear();
	this->edPrice->Clear();
}

//---------------------------------------------------------------------------
bool __fastcall TForm2::ValidateFields()
{
	if (Trim(edID->Text.c_str()) == L"") {
		Application->MessageBox(L"The Field ID can't be Empty",L"Information", MB_OK);
		return False;
	} else
	if (Trim(edDesc->Text.c_str()) == L"") {
		Application->MessageBox(L"The Field DESCRIPTION can't be Empty",L"Information", MB_OK);
		return False;
	} else
	if (Trim(edTrade->Text.c_str()) == L"") {
		Application->MessageBox(L"The Field TRADE can't be Empty",L"Information", MB_OK);
		return False;
	} else
	if (Trim(edPrice->Text.c_str()) == L"") {
		Application->MessageBox(L"The Field PRICE can't be Empty",L"Information", MB_OK);
		return False;
	} else return True;
}



