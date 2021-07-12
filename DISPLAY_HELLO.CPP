#include<dos.h>
#include<stdio.h>
#include<conio.h>
void inchu(int chu,int i){

char *s;

s=(char *)MK_FP(0xB800,0);
int h=25/2,c=37,vt;
c+=i;
vt=((h-1)*80+c-1)*2;
s[vt]=chu;
s[vt+1]=0x24	;
}
main(){
clrscr();
int a[]={72,101,108,108,111};
for(int i=0;i<5;i++){
inchu(a[i],i);
}
}