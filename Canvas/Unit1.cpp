//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Image1->Picture=NULL;
if (RadioButton1->Checked) {
	int j;
	j=StrToInt(InputBox("Insira um n�mero", "Pode ser qualquer um", "2"));
	j=
	j=j+1;
	ShowMessage("O seu n�mero mais um � " +IntToStr(j));
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Image1->Canvas->Pen->Color=clBlack;
Image1->Canvas->Ellipse(100,100,200,200);
Image1->Canvas->Pen->Color=clBlue;
Image1->Canvas->Ellipse(125,125,145,145);
Image1->Canvas->Ellipse(175,125,155,105);
Image1->Canvas->Pen->Color=clRed;
Image1->Canvas->MoveTo(150,175);
Image1->Canvas->LineTo(175,150);
Image1->Canvas->Pen->Color=clBlack;
Image1->Canvas->MoveTo(150,200);
Image1->Canvas->LineTo(150,350);
Image1->Canvas->MoveTo(75,250);
Image1->Canvas->LineTo(225,250);
Image1->Canvas->MoveTo(150,350);
Image1->Canvas->LineTo(80,450);
Image1->Canvas->MoveTo(150,350);
Image1->Canvas->LineTo(220,450);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
float i, xm, ym;
xm=Image1->Width;
ym=Image1->Height;
Image1->Canvas->Pen->Color=clBlack;
Image1->Canvas->MoveTo(0,(ym/2));
Image1->Canvas->LineTo(xm,(ym/2));
Image1->Canvas->MoveTo((xm/2),0);
Image1->Canvas->LineTo((xm/2),ym);
for(i=-275;i<=275;i++)
{
	Image1->Canvas->Pixels[i+(xm/2)][(sin(i/40)*80+(ym/2))]=clGreen;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
int i, xm, ym;
xm=Image1->Width;
ym=Image1->Height;
Image1->Canvas->Pen->Color=clBlack;
Image1->Canvas->MoveTo(0,(ym/2));
Image1->Canvas->LineTo(xm,(ym/2));
Image1->Canvas->MoveTo((xm/2),0);
Image1->Canvas->LineTo((xm/2),ym);
for(i=-180;i<=180;i++)
{
	Image1->Canvas->Pixels[i+(xm/2)][(i*i/100)+(ym/2)]=clGreen;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
 Image1->Canvas->Font->Size=20;
 Image1->Canvas->Font->Name="Arial";
 Image1->Canvas->TextOut(260, 5, "Y");
 Image1->Canvas->TextOut(480, 255, "X");

}
//---------------------------------------------------------------------------
