// nhap so a va in ra man hinh

#include<stdio.h>


int main (){
	int a;
	printf("Nhap so a:");
	scanf("%d", &a);
	if(a<0) {
		printf("\n so a nho hon 0");
	}
	else if(a>0) {
		printf("\n so a lon hon 0");
	}
	else {printf("\n so a bang 0");
	}
	return 0;
	
}
