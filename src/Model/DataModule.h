//---------------------------------------------------------------------------

#ifndef DataModuleH
#define DataModuleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.FB.hpp>
#include <FireDAC.Phys.FBDef.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <System.hpp>
//---------------------------------------------------------------------------
class TdmConexao : public TDataModule
{
__published:	// IDE-managed Components
		TFDConnection *Connection;
		TFDQuery *query;
	TFDCommand *Commands;
private:	// User declarations
public:		// User declarations
	__fastcall TdmConexao(TComponent* Owner);
	void __fastcall SaveProducts(const int id, System::UnicodeString desc, System::UnicodeString mark,  float price);
	void __fastcall SearchProducts(const System::UnicodeString text);
	void __fastcall Connect();


};
//---------------------------------------------------------------------------
extern PACKAGE TdmConexao *dmConexao;
//---------------------------------------------------------------------------
#endif
