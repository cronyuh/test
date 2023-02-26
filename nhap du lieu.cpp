// nhap xuat du lieu
#include<stdio.h>
#include<conio.h>
main(){
	int sobd;
	char hoten[10];
	float Mon1, Mon2, Mon3, DTB;
	printf("\n Nhap so bao danh:"); 
	scanf("%d",&sobd);
	printf("\n Nhap ho va ten:"); fflush(stdin); gets(hoten);
	printf("\n Diem Mon 1 , Mon 2, Mon 3"); scanf("%f %f %f", &Mon1,&Mon2, &Mon3);
	DTB=(Mon1+Mon2+Mon3)/3;
	printf("\n DL ve SV: %5d %20s %7.2f %7.2f %7.2f %7.2f", sobd,hoten, Mon1, Mon2, Mon3,DTB);
	
}
