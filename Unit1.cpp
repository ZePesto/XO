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
void __fastcall TForm1::Button_Player2Click(TObject *Sender)
{
Player2->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::P2Place_0Click(TObject *Sender)
{
if (x==0) {x=1;P2Place_0->Bitmap=krest->Bitmap;a[0]=1;} else {x=0;P2Place_0->Bitmap=nol->Bitmap;a[0]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P2Place_1Click(TObject *Sender)
{
if (x==0) {x=1;P2Place_1->Bitmap=krest->Bitmap;a[1]=1;} else {x=0;P2Place_1->Bitmap=nol->Bitmap;a[1]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P2Place_2Click(TObject *Sender)
{
if (x==0) {x=1;P2Place_2->Bitmap=krest->Bitmap;a[2]=1;} else {x=0;P2Place_2->Bitmap=nol->Bitmap;a[2]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P2Place_3Click(TObject *Sender)
{
if (x==0) {x=1;P2Place_3->Bitmap=krest->Bitmap;a[3]=1;} else {x=0;P2Place_3->Bitmap=nol->Bitmap;a[3]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P2Place_4Click(TObject *Sender)
{
if (x==0) {x=1;P2Place_4->Bitmap=krest->Bitmap;a[4]=1;} else {x=0;P2Place_4->Bitmap=nol->Bitmap;a[4]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P2Place_5Click(TObject *Sender)
{
if (x==0) {x=1;P2Place_5->Bitmap=krest->Bitmap;a[5]=1;} else {x=0;P2Place_5->Bitmap=nol->Bitmap;a[5]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P2Place_6Click(TObject *Sender)
{
if (x==0) {x=1;P2Place_6->Bitmap=krest->Bitmap;a[6]=1;} else {x=0;P2Place_6->Bitmap=nol->Bitmap;a[6]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P2Place_7Click(TObject *Sender)
{
if (x==0) {x=1;P2Place_7->Bitmap=krest->Bitmap;a[7]=1;} else {x=0;P2Place_7->Bitmap=nol->Bitmap;a[7]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P2Place_8Click(TObject *Sender)
{
if (x==0) {x=1;P2Place_8->Bitmap=krest->Bitmap;a[8]=1;} else {x=0;P2Place_8->Bitmap=nol->Bitmap;a[8]=2;}
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
//XXX
if (a[0]==1&&a[1]==1&&a[2]==1) {Timer1->Enabled=true;line4->Visible=true;p1++;}
if (a[3]==1&&a[4]==1&&a[5]==1) {Timer1->Enabled=true;line5->Visible=true;p1++;}
if (a[6]==1&&a[7]==1&&a[8]==1) {Timer1->Enabled=true;line6->Visible=true;p1++;}
if (a[0]==1&&a[3]==1&&a[6]==1) {Timer1->Enabled=true;line1->Visible=true;p1++;}
if (a[1]==1&&a[4]==1&&a[7]==1) {Timer1->Enabled=true;line2->Visible=true;p1++;}
if (a[2]==1&&a[5]==1&&a[8]==1) {Timer1->Enabled=true;line3->Visible=true;p1++;}
if (a[0]==1&&a[4]==1&&a[8]==1) {Timer1->Enabled=true;line7->Visible=true;p1++;}
if (a[2]==1&&a[4]==1&&a[6]==1) {Timer1->Enabled=true;line8->Visible=true;p1++;}
//OOO
if (a[0]==2&&a[1]==2&&a[2]==2) {Timer1->Enabled=true;line4->Visible=true;p2++;}
if (a[3]==2&&a[4]==2&&a[5]==2) {Timer1->Enabled=true;line5->Visible=true;p2++;}
if (a[6]==2&&a[7]==2&&a[8]==2) {Timer1->Enabled=true;line6->Visible=true;p2++;}
if (a[0]==2&&a[3]==2&&a[6]==2) {Timer1->Enabled=true;line1->Visible=true;p2++;}
if (a[1]==2&&a[4]==2&&a[7]==2) {Timer1->Enabled=true;line2->Visible=true;p2++;}
if (a[2]==2&&a[5]==2&&a[8]==2) {Timer1->Enabled=true;line3->Visible=true;p2++;}
if (a[0]==2&&a[4]==2&&a[8]==2) {Timer1->Enabled=true;line7->Visible=true;p2++;}
if (a[2]==2&&a[4]==2&&a[6]==2) {Timer1->Enabled=true;line8->Visible=true;p2++;}
//XO
if (a[0]!=0&&a[1]!=0&&a[2]!=0&&a[3]!=0&&a[4]!=0&&a[5]!=0&&a[6]!=0&&a[7]!=0&&a[8]!=0) {Timer1->Enabled=true;}
Timer2->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
//Menu->Visible=true;Player2->Visible=false;
line1->Visible=false;
line2->Visible=false;
line3->Visible=false;
line4->Visible=false;
line5->Visible=false;
line6->Visible=false;
line7->Visible=false;
line8->Visible=false;
//
P2Place_0->Bitmap=NULL;
P2Place_1->Bitmap=NULL;
P2Place_2->Bitmap=NULL;
P2Place_3->Bitmap=NULL;
P2Place_4->Bitmap=NULL;
P2Place_5->Bitmap=NULL;
P2Place_6->Bitmap=NULL;
P2Place_7->Bitmap=NULL;
P2Place_8->Bitmap=NULL;
//
for (i=0;i<9; i++) {a[i]=0;}
//
x=0;y=0;
//XXX
if (p1==1) {Score_p1->Visible=true;Score_p1->Bitmap=Number1->Bitmap;}
if (p1==2) {Score_p1->Bitmap=Number2->Bitmap;}
if (p1==3) {Score_p1->Bitmap=Number3->Bitmap;}
if (p1==4) {Score_p1->Bitmap=Number4->Bitmap;}
if (p1==5) {Score_p1->Bitmap=Number5->Bitmap;}
if (p1==6) {Score_p1->Visible=false;Score_p2->Visible=false;WinnerXXX->Visible=true;}
//OOO
for (i=0;i<9; i++) {a[i]=0;}
if (p2==1) {Score_p2->Visible=true;Score_p2->Bitmap=Number1->Bitmap;}
if (p2==2) {Score_p2->Bitmap=Number2->Bitmap;}
if (p2==3) {Score_p2->Bitmap=Number3->Bitmap;}
if (p2==4) {Score_p2->Bitmap=Number4->Bitmap;}
if (p2==5) {Score_p2->Bitmap=Number5->Bitmap;}
if (p2==6) {Score_p1->Visible=false;Score_p2->Visible=false;WinnerOOO->Visible=true;}
Timer1->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
x=0;y=0;p=0;p1=0;p2=0;
for (i=0;i<9; i++) {a[i]=0;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WinnerOOOClick(TObject *Sender)
{
Menu->Visible=true;
Player2->Visible=false;
Player1->Visible=false;
WinnerOOO->Visible=false;
p1=0;p2=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WinnerXXXClick(TObject *Sender)
{
Menu->Visible=true;
Player2->Visible=false;
Player1->Visible=false;
WinnerXXX->Visible=false;
p1=0;p2=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P1Place_0Click(TObject *Sender)
{
P1Place_0->Bitmap=krest->Bitmap;barrier->Visible=true;b[0]=1;Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P1Place_1Click(TObject *Sender)
{
P1Place_1->Bitmap=krest->Bitmap;barrier->Visible=true;b[1]=1;Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P1Place_2Click(TObject *Sender)
{
P1Place_2->Bitmap=krest->Bitmap;barrier->Visible=true;b[2]=1;Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P1Place_3Click(TObject *Sender)
{
P1Place_3->Bitmap=krest->Bitmap;barrier->Visible=true;b[3]=1;Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P1Place_4Click(TObject *Sender)
{
P1Place_4->Bitmap=krest->Bitmap;barrier->Visible=true;b[4]=1;Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P1Place_5Click(TObject *Sender)
{
P1Place_5->Bitmap=krest->Bitmap;barrier->Visible=true;b[5]=1;Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P1Place_7Click(TObject *Sender)
{
P1Place_7->Bitmap=krest->Bitmap;barrier->Visible=true;b[7]=1;Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P1Place_6Click(TObject *Sender)
{
P1Place_6->Bitmap=krest->Bitmap;barrier->Visible=true;b[6]=1;Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::P1Place_8Click(TObject *Sender)
{
P1Place_8->Bitmap=krest->Bitmap;barrier->Visible=true;b[8]=1;Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
//Menu->Visible=true;Player2->Visible=false;
line1->Visible=false;
line2->Visible=false;
line3->Visible=false;
line4->Visible=false;
line5->Visible=false;
line6->Visible=false;
line7->Visible=false;
line8->Visible=false;
//
P1Place_0->Bitmap=NULL;
P1Place_1->Bitmap=NULL;
P1Place_2->Bitmap=NULL;
P1Place_3->Bitmap=NULL;
P1Place_4->Bitmap=NULL;
P1Place_5->Bitmap=NULL;
P1Place_6->Bitmap=NULL;
P1Place_7->Bitmap=NULL;
P1Place_8->Bitmap=NULL;
//
for (i=0;i<9; i++) {b[i]=0;}
//XXX
if (p1==1) {Score_p1->Visible=true;Score_p1->Bitmap=Number1->Bitmap;}
if (p1==2) {Score_p1->Bitmap=Number2->Bitmap;}
if (p1==3) {Score_p1->Bitmap=Number3->Bitmap;}
if (p1==4) {Score_p1->Bitmap=Number4->Bitmap;}
if (p1==5) {Score_p1->Bitmap=Number5->Bitmap;}
if (p1==6) {Score_p1->Visible=false;Score_p2->Visible=false;WinnerXXX->Visible=true;}
//OOO
for (i=0;i<9; i++) {a[i]=0;}
if (p2==1) {Score_p2->Visible=true;Score_p2->Bitmap=Number1->Bitmap;}
if (p2==2) {Score_p2->Bitmap=Number2->Bitmap;}
if (p2==3) {Score_p2->Bitmap=Number3->Bitmap;}
if (p2==4) {Score_p2->Bitmap=Number4->Bitmap;}
if (p2==5) {Score_p2->Bitmap=Number5->Bitmap;}
if (p2==6) {Score_p2->Visible=false;Score_p1->Visible=false;WinnerOOO->Visible=true;}
Timer3->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer4Timer(TObject *Sender)
{
//XXX
if (b[0]==1&&b[1]==1&&b[2]==1) {Timer3->Enabled=true;line4->Visible=true;p1++;}else{Timer5->Enabled=true;}
if (b[3]==1&&b[4]==1&&b[5]==1) {Timer3->Enabled=true;line5->Visible=true;p1++;}else{Timer5->Enabled=true;}
if (b[6]==1&&b[7]==1&&b[8]==1) {Timer3->Enabled=true;line6->Visible=true;p1++;}else{Timer5->Enabled=true;}
if (b[0]==1&&b[3]==1&&b[6]==1) {Timer3->Enabled=true;line1->Visible=true;p1++;}else{Timer5->Enabled=true;}
if (b[1]==1&&b[4]==1&&b[7]==1) {Timer3->Enabled=true;line2->Visible=true;p1++;}else{Timer5->Enabled=true;}
if (b[2]==1&&b[5]==1&&b[8]==1) {Timer3->Enabled=true;line3->Visible=true;p1++;}else{Timer5->Enabled=true;}
if (b[0]==1&&b[4]==1&&b[8]==1) {Timer3->Enabled=true;line7->Visible=true;p1++;}else{Timer5->Enabled=true;}
if (b[2]==1&&b[4]==1&&b[6]==1) {Timer3->Enabled=true;line8->Visible=true;p1++;}else{Timer5->Enabled=true;}
//XO
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0) {Timer3->Enabled=true;}
Timer4->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer5Timer(TObject *Sender)
{
hotbot=true;
while (hotbot==true)
{
botrandom=random()%8;
switch (botrandom)
{
case 0:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[0]==0)
{
b[0]=2;
P1Place_0->Bitmap=nol->Bitmap;
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
P1Place_1->Bitmap=nol->Bitmap;
hotbot=false;
}
break;
case 2:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[3]==0)
{
b[2]=2;
P1Place_2->Bitmap=nol->Bitmap;
hotbot=false;
}
break;
case 3:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[4]==0)
{
b[3]=2;
P1Place_3->Bitmap=nol->Bitmap;
hotbot=false;
}
break;
case 4:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[4]==0)
{
b[4]=2;
P1Place_4->Bitmap=nol->Bitmap;
hotbot=false;
}
break;
case 5:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[5]==0)
{
b[5]=2;
P1Place_5->Bitmap=nol->Bitmap;
hotbot=false;
}
break;
case 6:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[6]==0)
{
b[6]=2;
P1Place_6->Bitmap=nol->Bitmap;
hotbot=false;
}
break;
case 7:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[7]==0)
{
b[7]=2;
P1Place_7->Bitmap=nol->Bitmap;
hotbot=false;
}
default:
if (b[0]!=0&&b[1]!=0&&b[2]!=0&&b[3]!=0&&b[4]!=0&&b[5]!=0&&b[6]!=0&&b[7]!=0&&b[8]!=0)
{hotbot=false;}
if (b[8]==0)
{
b[8]=2;
P1Place_8->Bitmap=nol->Bitmap;
hotbot=false;
}
break;
}
//OOO
if (b[0]==2&&b[1]==2&&b[2]==2) {Timer3->Enabled=true;line4->Visible=true;p2++;}
if (b[3]==2&&b[4]==2&&b[5]==2) {Timer3->Enabled=true;line5->Visible=true;p2++;}
if (b[6]==2&&b[7]==2&&b[8]==2) {Timer3->Enabled=true;line6->Visible=true;p2++;}
if (b[0]==2&&b[3]==2&&b[6]==2) {Timer3->Enabled=true;line1->Visible=true;p2++;}
if (b[1]==2&&b[4]==2&&b[7]==2) {Timer3->Enabled=true;line2->Visible=true;p2++;}
if (b[2]==2&&b[5]==2&&b[8]==2) {Timer3->Enabled=true;line3->Visible=true;p2++;}
if (b[0]==2&&b[4]==2&&b[8]==2) {Timer3->Enabled=true;line7->Visible=true;p2++;}
if (b[2]==2&&b[4]==2&&b[6]==2) {Timer3->Enabled=true;line8->Visible=true;p2++;}
barrier->Visible=false;Timer5->Enabled=false;Timer4->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button_Player1Click(TObject *Sender)
{
Player1->Visible=true;
}
//---------------------------------------------------------------------------

