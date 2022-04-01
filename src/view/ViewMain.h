//---------------------------------------------------------------------------

#ifndef ViewMainH
#define ViewMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TDataSource *DataSource1;
	TGroupBox *GroupBox1;
	TEdit *edID;
	TEdit *edDesc;
	TEdit *edTrade;
	TEdit *edPrice;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TButton *btnSave;
	TGroupBox *GroupBox2;
	TSearchBox *Search;
	TDBGrid *DBGrid1;
	TDBNavigator *DBNavigator1;
	TLabel *Label5;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall DBNavigator1Click(TObject *Sender, TNavigateBtn Button);
	void __fastcall SearchChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
	void __fastcall ConnectDB();
	void __fastcall OpenQuery();
	void __fastcall Save(const int id, System::UnicodeString desc, System::UnicodeString mark,  float price);
	void __fastcall ClearFields();
	bool __fastcall ValidateFields();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
