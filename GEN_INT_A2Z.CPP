#include <dos.h>
void main(){
 _AH=2;

for(int i=65; i<=90;i++){  // dat gia tri cho thanh DL tu 65 den 90 (ma ASCII A den Z)
	_DL=i;
	geninterrupt(0x21);
	}
}