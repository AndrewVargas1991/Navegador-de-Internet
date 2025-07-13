//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <SHDocVw.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Vcl.Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TEdit *Edit1;
	TWebBrowser *WebBrowser1;
	TMainMenu *MainMenu1;
	TMenuItem *Arquivo1;
	TMenuItem *Arquivo2;
	TMenuItem *Ferramenta1;
	TMenuItem *Mudartema1;
	TMenuItem *Mudartema2;
	TMenuItem *Navegador1;
	TMenuItem *Normal;
	TMenuItem *AmethystKamri;
	TMenuItem *AquaLightSlate;
	TMenuItem *CyanDusk;
	TMenuItem *EmeraldLightSlate;
	TMenuItem *IcebergClassico;
	TMenuItem *OnyxBlue;
	TImage *Image1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Arquivo2Click(TObject *Sender);
	void __fastcall Navegador1Click(TObject *Sender);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall WebBrowser1NavigateComplete2(TObject *ASender, IDispatch * const pDisp,
          const OleVariant &URL);
	void __fastcall NormalClick(TObject *Sender);
	void __fastcall AmethystKamriClick(TObject *Sender);
	void __fastcall AquaLightSlateClick(TObject *Sender);
	void __fastcall CyanDuskClick(TObject *Sender);
	void __fastcall EmeraldLightSlateClick(TObject *Sender);
	void __fastcall IcebergClassicoClick(TObject *Sender);
	void __fastcall OnyxBlueClick(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	private:	// User declarations
	std::vector<String> historico;
	int indiceHistorico;
	public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
