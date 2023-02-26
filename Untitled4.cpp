// kiem tra ki tu nhap vao la ki tu khong, neu la ki tu thi xuat ra no la nguyen am hay phu am
#include<stdio.h>
main(){

	
	
	char ch; // nhap ki tu
	("\n yeu cau nhap ki tu A-Z hoac a-z");
	ch=getchar(); // kiem tra cho dung ki tu khong
	if (ch<'A'||ch>'z')
	{
		printf("\n ki tu %c khong nam trong bang chu cai", ch);
	}
	else{
		switch(ch)
		{
			case 'A';
			case 'a';
			case 'E';
			case 'e';
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o';
			case 'U';
			case 'u';
			printd("\n '%c' la nguyen am");
			break;
			default: printf("\n '%c' la phu am, ch");

   
	
}
