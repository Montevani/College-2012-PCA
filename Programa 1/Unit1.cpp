//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
void queijo ()
{
	ShowMessage("IFUNCIONA!");
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
double a, b, c;
a=StrToFloat(Edit1->Text);
b=StrToFloat(Edit2->Text);
c=(a+b)/2;
queijo();
if (c>5) {
	ShowMessage("A provado, estava gostoso.");
}
else {
	ShowMessage(FloatToStr(c));
}
ListBox1->Items->Add(FloatToStr(c));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
double matriz[3][3];
int i, j;
AnsiString b;
b=" ";
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	matriz[i][j]=StrToFloat(InputBox(i,j,""));
	}

}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	b = b + FloatToStr(matriz[i][j])+ " ";
	}

ListBox1->Items->Add(b);
b=" ";
}
}
//---------------------------------------------------------------------------

