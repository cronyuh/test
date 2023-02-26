#include<stdio.h>
// nhap mot so bat ki xem co phai so nguyen hay khong
main(){
  
  float N;
  printf("\nMoi ban nhap mot so bat ky: "); scanf("%f",&N);
  
  if(N==(int)N)
  {
    printf("\n%g la so nguyen",N);
  }
  else
  {
    printf("\n%g khong phai la so nguyen",N);
  }

}
