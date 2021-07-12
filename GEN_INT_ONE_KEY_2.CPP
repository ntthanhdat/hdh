#include <dos.h>
void main(){
 //in thong bao
 union REGS b1,b2;
struct SREGS b3;
char *s= "Nhap 1 ki tu: $";
b1.h.ah=9;
b3.ds=FP_SEG(s);
b1.x.dx=FP_OFF(s);
int86x(0x21,&b1,&b2,&b3);
 //nhap ky tu
 union REGS val1,val2,val3;
 val1.h.ah=1;
 int86(0x21,&val1,&val2);
 char bien=val2.h.al;
 //xuong dong
 val1.h.ah=2;
 val1.h.dl=13; //cr=13
 int86(0x21,&val1,&val3);
 val1.h.dl=10; //lf=10
 int86(0x21,&val1,&val3);

//in thong bao
 char *s2= "Ki tu vua nhap la: $";
  b3.ds=FP_SEG(s2);
b1.x.dx=FP_OFF(s2);
int86x(0x21,&b1,&b2,&b3);
//in ra bien
 val1.h.dl=bien;
 int86(0x21,&val1,&val2);

}