#include<stdio.h>

main()
{
	int i,j, h;
	do
	{
	printf("Nhap vao so hang:");
	scanf("%d",&i);}
	while(i<2 ||i>24);
	
		for(j=1;j<=i;j++)
		{
			for(h=0; h<j;h++)
			{
				printf(" * ");
			}
			printf("\n");
		}
			
}
