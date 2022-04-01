//---------------------------------------------------------------------------


#pragma hdrstop

#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TdmConexao *dmConexao;
//---------------------------------------------------------------------------
__fastcall TdmConexao::TdmConexao(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
