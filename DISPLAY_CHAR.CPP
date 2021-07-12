#include<dos.h>
main(){
char *s;

s=(char *)MK_FP(0xB800,0);
int h=2,c=1,vt;
vt=((h-1)*80+c-1)*2;
s[vt]=0x44;
s[vt+1]=0x3f	;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               													