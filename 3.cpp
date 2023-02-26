// tinh tien
#include<stdio.h>
#include<conio.h>
main()
{
    float km, tien;
    printf("Nhap vao so km :");
    scanf("%f",&km);
    if(km>=0&&km<1)
	{tien = km*15000; printf("So tien la :%f",tien);}
    else if(km>=2&&6>km)
	{tien=km*13500;  printf("Ban phai tra :%f ",tien);} 
    else if(km>=6)
	{ tien=km*11000; printf("Ban phai tra :%f ",tien);}
    else if(km>=120)
	{tien=km/10; printf("Ban phai tra :%f ",tien);}
		
}
