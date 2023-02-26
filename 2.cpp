#include<stdio.h>
#include<math.h>

main()
{
	float a,b,c, delta;
	printf("Nhap vao a, b, c :"); scanf("%f%f%f",&a,&b,&c);
	if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else
            printf("Phuong trinh co nghiem duy nhat la: %f",-c/b);
    }
    else
    {
        delta=b*b-4*a*c;
        if (delta<0)
            printf("\n Phuong trinh vo nghiem!!!");
        else if (delta==0)
            printf("\n Phuong trinh co nghiem kep la: %f",-b/(2*a));
        else
            printf("\n Phuong trinh co 2 nghiem phan biet la: %f,%f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));    
    }    
		
}
