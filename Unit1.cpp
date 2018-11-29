//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
int x,y,i,p,p1,p2,a[8],b[8],bot,botrandom;
bool hotbot=true;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
Player1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{
Player2->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image6Click(TObject *Sender)
{
if (x==0) {x=1;Image6->Bitmap=Image15->Bitmap;a[0]=1;} else {x=0;Image6->Bitmap=Image16->Bitmap;a[0]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
x=0;y=0;p=0;p1=0;p2=0;
for (i=0;i<9; i++) {a[i]=0;}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image7Click(TObject *Sender)
{
if (x==0) {x=1;Image7->Bitmap=Image15->Bitmap;a[1]=1;} else {x=0;Image7->Bitmap=Image16->Bitmap;a[1]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image8Click(TObject *Sender)
{
if (x==0) {x=1;Image8->Bitmap=Image15->Bitmap;a[2]=1;} else {x=0;Image8->Bitmap=Image16->Bitmap;a[2]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image9Click(TObject *Sender)
{
if (x==0) {x=1;Image9->Bitmap=Image15->Bitmap;a[3]=1;} else {x=0;Image9->Bitmap=Image16->Bitmap;a[3]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image10Click(TObject *Sender)
{
if (x==0) {x=1;Image10->Bitmap=Image15->Bitmap;a[4]=1;} else {x=0;Image10->Bitmap=Image16->Bitmap;a[4]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image11Click(TObject *Sender)
{
if (x==0) {x=1;Image11->Bitmap=Image15->Bitmap;a[5]=1;} else {x=0;Image11->Bitmap=Image16->Bitmap;a[5]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image12Click(TObject *Sender)
{
if (x==0) {x=1;Image12->Bitmap=Image15->Bitmap;a[6]=1;} else {x=0;Image12->Bitmap=Image16->Bitmap;a[6]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image13Click(TObject *Sender)
{
if (x==0) {x=1;Image13->Bitmap=Image15->Bitmap;a[7]=1;} else {x=0;Image13->Bitmap=Image16->Bitmap;a[7]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image14Click(TObject *Sender)
{
if (x==0) {x=1;Image14->Bitmap=Image15->Bitmap;a[8]=1;} else {x=0;Image14->Bitmap=Image16->Bitmap;a[8]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
//Menu->Visible=true;Player2->Visible=false;
Image17->Visible=false;
Image18->Visible=false;
Image19->Visible=false;
Image20->Visible=false;
Image21->Visible=false;
Image22->Visible=false;
Image23->Visible=false;
Image24->Visible=false;
//
Image6->Bitmap=NULL;
Image7->Bitmap=NULL;
Image8->Bitmap=NULL;
Image9->Bitmap=NULL;
Image10->Bitmap=NULL;
Image11->Bitmap=NULL;
Image12->Bitmap=NULL;
Image13->Bitmap=NULL;
Image14->Bitmap=NULL;
//
x=0;y=0;
//XXX
for (i=0;i<9; i++) {a[i]=0;}
if (p1==1) {Score_p1->Visible=true;Score_p1->Bitmap=Image25->Bitmap;}
if (p1==2) {Score_p1->Bitmap=Image26->Bitmap;}
if (p1==3) {Score_p1->Bitmap=Image27->Bitmap;}
if (p1==4) {Score_p1->Bitmap=Image28->Bitmap;}
if (p1==5) {Score_p1->Bitmap=Image29->Bitmap;}
if (p1==6) {Score_p1->Visible=false;WinnerXXX->Visible=true;}
//OOO
for (i=0;i<9; i++) {a[i]=0;}
if (p2==1) {Score_p2->Visible=true;Score_p2->Bitmap=Image25->Bitmap;}
if (p2==2) {Score_p2->Bitmap=Image26->Bitmap;}
if (p2==3) {Score_p2->Bitmap=Image27->Bitmap;}
if (p2==4) {Score_p2->Bitmap=Image28->Bitmap;}
if (p2==5) {Score_p2->Bitmap=Image29->Bitmap;}
if (p2==6) {Score_p2->Visible=false;WinnerOOO->Visible=true;}
Timer1->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
//XXX
if (a[0]==1&&a[1]==1&&a[2]==1) {Timer1->Enabled=true;Image17->Visible=true;p1++;}
if (a[3]==1&&a[4]==1&&a[5]==1) {Timer1->Enabled=true;Image18->Visible=true;p1++;}
if (a[6]==1&&a[7]==1&&a[8]==1) {Timer1->Enabled=true;Image19->Visible=true;p1++;}
if (a[0]==1&&a[3]==1&&a[6]==1) {Timer1->Enabled=true;Image20->Visible=true;p1++;}
if (a[1]==1&&a[4]==1&&a[7]==1) {Timer1->Enabled=true;Image21->Visible=true;p1++;}
if (a[2]==1&&a[5]==1&&a[8]==1) {Timer1->Enabled=true;Image22->Visible=true;p1++;}
if (a[0]==1&&a[4]==1&&a[8]==1) {Timer1->Enabled=true;Image23->Visible=true;p1++;}
if (a[2]==1&&a[4]==1&&a[6]==1) {Timer1->Enabled=true;Image24->Visible=true;p1++;}
//OOO
if (a[0]==2&&a[1]==2&&a[2]==2) {Timer1->Enabled=true;Image17->Visible=true;p2++;}
if (a[3]==2&&a[4]==2&&a[5]==2) {Timer1->Enabled=true;Image18->Visible=true;p2++;}
if (a[6]==2&&a[7]==2&&a[8]==2) {Timer1->Enabled=true;Image19->Visible=true;p2++;}
if (a[0]==2&&a[3]==2&&a[6]==2) {Timer1->Enabled=true;Image20->Visible=true;p2++;}
if (a[1]==2&&a[4]==2&&a[7]==2) {Timer1->Enabled=true;Image21->Visible=true;p2++;}
if (a[2]==2&&a[5]==2&&a[8]==2) {Timer1->Enabled=true;Image22->Visible=true;p2++;}
if (a[0]==2&&a[4]==2&&a[8]==2) {Timer1->Enabled=true;Image23->Visible=true;p2++;}
if (a[2]==2&&a[4]==2&&a[6]==2) {Timer1->Enabled=true;Image24->Visible=true;p2++;}
Timer2->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WinnerXXXClick(TObject *Sender)
{
WinnerXXX->Visible=false;
Player1->Visible=false;
Player2->Visible=false;
Menu->Visible=true;
p1=0;p2=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WinnerOOOClick(TObject *Sender)
{
WinnerOOO->Visible=false;
Player1->Visible=false;
Player2->Visible=false;
Menu->Visible=true;
p1=0;p2=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image30Click(TObject *Sender)
{
Image30->Bitmap=Image15->Bitmap;Image39->Visible=true;b[0]=1;Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image31Click(TObject *Sender)
{
Image31->Bitmap=Image15->Bitmap;Image39->Visible=true;b[1]=1;Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image32Click(TObject *Sender)
{
Image32->Bitmap=Image15->Bitmap;Image39->Visible=true;b[2]=1;Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image33Click(TObject *Sender)
{
Image33->Bitmap=Image15->Bitmap;Image39->Visible=true;b[3]=1;Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image34Click(TObject *Sender)
{
Image34->Bitmap=Image15->Bitmap;Image39->Visible=true;b[4]=1;Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image35Click(TObject *Sender)
{
Image35->Bitmap=Image15->Bitmap;Image39->Visible=true;b[5]=1;Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image36Click(TObject *Sender)
{
Image36->Bitmap=Image15->Bitmap;Image39->Visible=true;b[6]=1;Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image37Click(TObject *Sender)
{
 Image37->Bitmap=Image15->Bitmap;Image39->Visible=true;b[7]=1;Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image38Click(TObject *Sender)
{
Image38->Bitmap=Image15->Bitmap;Image39->Visible=true;b[8]=1;Timer3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
hotbot=true;
while (hotbot==true)
{
botrandom=random(8);
switch (botrandom)
{
case 0:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[0]==0)
{
b[0]=2;
Image30->Bitmap=Image16->Bitmap;
hotbot=false;
}
break;
case 1:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[1]==0)
{
b[1]=2;
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
Image31->Bitmap=Image16->Bitmap;
hotbot=false;
}
break;
case 2:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[3]==0)
{
b[2]=2;
Image32->Bitmap=Image16->Bitmap;
hotbot=false;
}
break;
case 3:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[4]==0)
{
b[3]=2;
Image33->Bitmap=Image16->Bitmap;
hotbot=false;
}
break;
case 4:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[4]==0)
{
b[4]=2;
Image34->Bitmap=Image16->Bitmap;
hotbot=false;
}
break;
case 5:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[5]==0)
{
b[5]=2;
Image35->Bitmap=Image16->Bitmap;
hotbot=false;
}
break;
case 6:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[6]==0)
{
b[6]=2;
Image36->Bitmap=Image16->Bitmap;
hotbot=false;
}
break;
case 7:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[7]==0)
{
b[7]=2;
Image37->Bitmap=Image16->Bitmap;
hotbot=false;
}
default:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[8]==0)
{
b[8]=2;
Image38->Bitmap=Image16->Bitmap;
hotbot=false;
}
break;
}
Image39->Visible=false;Timer3->Enabled=false;
{

}
}

}
//---------------------------------------------------------------------------


