//---------------------------------------------------------------------------


#pragma hdrstop

#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TdmConexao *dmConexao;
//---------------------------------------------------------------------------
__fastcall TdmConexao::TdmConexao(TComponent* Owner): TDataModule(Owner){}
//---------------------------------------------------------------------------

void __fastcall TdmConexao::SaveProducts(const int id, System::UnicodeString desc, System::UnicodeString mark,  float price){
	this->Commands->Close();
	this->Commands->ParamByName("ID")->AsInteger = id;
	this->Commands->ParamByName("DESCRIPTION")->AsString = desc;
	this->Commands->ParamByName("TRADEMARK")->AsString = mark;
	this->Commands->ParamByName("PRICE")->AsFloat = price;
	this->Commands->Execute();
}
//---------------------------------------------------------------------------
void __fastcall TdmConexao::Connect()
{
	Connection->Connected = True;
}
//---------------------------------------------------------------------------

void __fastcall TdmConexao::SearchProducts(const System::UnicodeString text){
	this->query->Filtered =  false;
	this->query->Filter = "DESCRIPTION LIKE "+QuotedStr(text+"%");
	this->query->Filtered =  True;
}

