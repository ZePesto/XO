//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
int x=0,y=0,a[8];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image3Click(TObject *Sender)
{
Panel1->Visible=false;
Image18->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image6Click(TObject *Sender)
{
Image6->Bitmap=Image7->Bitmap;Image16->Visible=true;Timer1->Enabled=true;a[0]=1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image8Click(TObject *Sender)
{
Image8->Bitmap=Image7->Bitmap;Image16->Visible=true;Timer1->Enabled=true;a[1]=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
Image9->Bitmap=Image7->Bitmap;Image16->Visible=true;Timer1->Enabled=true;a[2]=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12Click(TObject *Sender)
{
Image12->Bitmap=Image7->Bitmap;Image16->Visible=true;Timer1->Enabled=true;a[3]=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image11Click(TObject *Sender)
{
Image11->Bitmap=Image7->Bitmap;Image16->Visible=true;Timer1->Enabled=true;a[4]=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10Click(TObject *Sender)
{
Image10->Bitmap=Image7->Bitmap;Image16->Visible=true;Timer1->Enabled=true;a[5]=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13Click(TObject *Sender)
{
Image13->Bitmap=Image7->Bitmap;Image16->Visible=true;Timer1->Enabled=true;a[6]=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image14Click(TObject *Sender)
{
Image14->Bitmap=Image7->Bitmap;Image16->Visible=true;Timer1->Enabled=true;a[7]=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image15Click(TObject *Sender)
{
Image15->Bitmap=Image7->Bitmap;Image16->Visible=true;Timer1->Enabled=true;a[8]=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
if (x==2) {if (a[6]==0) {Image15->Bitmap=Image17->Bitmap;}else
		 {if (a[7]==0) {Image14->Bitmap=Image17->Bitmap;}else
		 {if (a[8]==0) {Image13->Bitmap=Image17->Bitmap;}}}}

if (x==1) {if (a[3]==0) {x=2;Image12->Bitmap=Image17->Bitmap;}else
		 {if (a[4]==0) {Image11->Bitmap=Image17->Bitmap;}else
		 {if (a[5]==0) {Image10->Bitmap=Image17->Bitmap;}}}}

if (x==0) {if (a[0]==0) {x=1;Image6->Bitmap=Image17->Bitmap;}else
		 {if (a[1]==0) {Image8->Bitmap=Image17->Bitmap;}else
		 {if (a[2]==0) {Image9->Bitmap=Image17->Bitmap;}}}}

Image16->Visible=false;Timer1->Enabled=False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
x=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
Image18->Visible=true;
Panel1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image19Click(TObject *Sender)
{
Image19->Bitmap=Image7->Bitmap;
if (y=0) {y=1;Image19->Bitmap=Image7->Bitmap;} else {y=0;Image19->Bitmap=Image8->Bitmap;}
}
//---------------------------------------------------------------------------

