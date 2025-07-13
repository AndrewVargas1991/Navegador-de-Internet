//---------------------------------------------------------------------------

#include <vcl.h>
#include <vector>
#include <string>
#pragma hdrstop
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	indiceHistorico = -1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        WebBrowser1->Silent = true;
        //Panel1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Arquivo2Click(TObject *Sender)
{
        this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Navegador1Click(TObject *Sender)
{
        Application->MessageBox(L"Para criar esse navegador de internet foram utilizadas a IDE C++ Builder da Embarcadero e a biblioteca de componentes visuais VCL.", L"Tecnologias usadas", MB_OK);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
    if (Key == VK_RETURN)
    {
        WebBrowser1->Navigate(Edit1->Text);
        Key = 0; // Evita o som de beep
    }
}

void __fastcall TForm1::WebBrowser1NavigateComplete2(TObject *ASender, IDispatch * const pDisp,
          const OleVariant &URL)
{
    String url = URL;
    if (!url.IsEmpty())
    {
        if (historico.empty() || historico.back() != url)
        {
            if (indiceHistorico < historico.size() - 1)
            {
                historico.erase(historico.begin() + indiceHistorico + 1, historico.end());
            }
            historico.push_back(url);
            indiceHistorico++;
        }
        else
        {
            indiceHistorico = historico.size() - 1;
        }
        Edit1->Text = url;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NormalClick(TObject *Sender)
{
        Form1->StyleName = "Windows";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AmethystKamriClick(TObject *Sender)
{
        Form1->StyleName = "Amethyst Kamri";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AquaLightSlateClick(TObject *Sender)
{
        Form1->StyleName = "Aqua Light Slate";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CyanDuskClick(TObject *Sender)
{
        Form1->StyleName = "Cyan Dusk";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EmeraldLightSlateClick(TObject *Sender)
{
        Form1->StyleName = "Emerald Light Slate";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IcebergClassicoClick(TObject *Sender)
{
        Form1->StyleName = "Iceberg Classico";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OnyxBlueClick(TObject *Sender)
{
        Form1->StyleName = "Onyx Blue";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1Click(TObject *Sender)
{
    if (indiceHistorico > 0)
    {
        indiceHistorico--;
        WebBrowser1->Navigate(historico[indiceHistorico]);
    }
}
//---------------------------------------------------------------------------

