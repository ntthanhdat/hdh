#include <dos.h>
void main(){
 union REGS val1,val2,val3;
 val1.h.ah=1;
 int86(0x21,&val1,&val2);
 val1.h.ah=2;
 val1.h.dl=13;
 int86(0x21,&val1,&val3);
 val1.h.dl=10;
 int86(0x21,&val1,&val3);
 val1.h.dl=val2.h.al;
 int86(0x21,&val1,&val2);
}