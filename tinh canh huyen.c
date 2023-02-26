#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	// khai bao 3 bien thuc la canh cua tam giac vuong
	int n;
	float a,b,c;
	a = 4 ,b = 3; // gia tri cho hai canh vuong
	c= sqrt(a*a +b*b); // do dai canh huyen
	printf("canh huyen cua tam giac vuong la: %.3f \n",c);
	return 0;	
}
