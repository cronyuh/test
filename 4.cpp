#include<stdio.h>

main()
{
	float dtb;
	printf ("Nhap vao diem trung binh :");
	scanf ("%f",&dtb);
	if(dtb>=9&&dtb<=10)
	{printf("Hoc luc Xuat xac");}
	else if(dtb>=8&&dtb<9)
	{printf("Hoc luc gioi");}
	else if(dtb>=7&&dtb<8)
	{printf("Hoc luc kha");}
	else if(dtb>=6&&dtb<7)
	{printf("Hoc luc trung binh");}
	else if(dtb>=5&&dtb<6)
	{printf("Hoc luc yeu");}
	else if(dtb<5)
	{printf("hoc luc kem");}
	
	
	
}
