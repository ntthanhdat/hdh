#include <dos.h>
void main(){
union REGS b1,b2;
struct SREGS b3;
char *s= "Hello$";
b1.h.ah=9;
b3.ds=FP_SEG(s);
b1.x.dx=FP_OFF(s);
int86x(0x21,&b1,&b2,&b3);
}