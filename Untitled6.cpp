#include<stdio.h>
main()
{
char ch;
//nhap ki tu
("\n Yeu cau nhap ki tu tu A-Z hoac a-z");
ch=getchar();
//kiem tra co dung la ki tu khong
if (ch<'A'||ch>'z')
{
printf("\n Ki tu %c khong nam trong bang chu cai",ch);
}
else
{
switch(ch)
{
case 'A':
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':
printf("\n '%c' la nguyen am ",ch);
break;
default: printf("\n '%c' la phu am",ch);

}
}
}
