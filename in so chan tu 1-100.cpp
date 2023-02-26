// in cac so chan tu 1-100
#include<stdio.h>
main(){
	int i;
	printf("\n in so chan tu 1-100");
	for (i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			continue;
		}
		printf("%5d",i);
	}
	
}
