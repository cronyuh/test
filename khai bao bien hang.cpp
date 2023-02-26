// khai bao hang , bieu thuv
#include<stdio.h>

main(){
   const float x=7.5, y=8.5;
   const int i=3+9;
   #define PI 3.14
   float MIN;
   int MAX=10;
   printf("\n PI= %f",PI);
   printf("\n MAX = %d", MAX--);
   printf("\n MAX moi = %d", ++MAX);
   printf("\n Min= %3.2f",x>y?y:x);
}
