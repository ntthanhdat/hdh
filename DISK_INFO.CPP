#include<dos.h>
#include<iostream.h>

main(){
 char A[512];
 union REGS b1, b2;
 struct SREGS b3;
 b1.h.ah=2;
 b1.h.al=1;
 b1.h.ch=0;
 b1.h.cl=1;
 b1.h.dh=0;
 b1.h.dl=0x80;
 b3.es=FP_SEG(A);
 b1.x.bx=FP_OFF(A);
 int86x(0x13, &b1, &b2, &b3);
 cout<<"vi tri bat dau\n"<<"head="<<(int)A[0x1BF]<<endl;
 cout<<"sector= " <<(int)A[0x1C0]<<endl;
 cout<<"cylinder = " <<(int)A[0x1c1];
}