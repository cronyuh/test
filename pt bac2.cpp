// giai pt bac 2
#include<stdio.h>
#include<math.h>
main()
{
	float a, b, c, x1, x2, delta;
	printf("Nhap he so a= "); scanf("%f,&a");
	printf("Nhap he so b= "); scanf("%f,&b");
	printf("Nhap he so c= "); scanf("%f,&c");
	if (a=0)
	{
		printf("\n Day khong phai la phuong trinh bac 2");
	}
	else{
		delta = b*b-4*a*c;
		if (delta<0)
		{
			printf("\n phuong trinh vo nghiem");
		}
		else
		{
			x1=(-b+sqrt(delta)) / (2*a);
			x2=(-b-sqrt(delta)) / (2*a);
			printf("\n nghiem thu nhat x1 =%g",x1);
			printf("\n nghiem thu hai x2 =%g",x2);
		}
	}
}

