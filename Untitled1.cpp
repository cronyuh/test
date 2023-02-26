#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i,giatri,j, sohang,socot, vthang,vtcot;
printf("Kich thuoc: n= "); scanf("%d",&n);
int a[n][n];
sohang = socot =n;
vthang =vtcot =0;
giatri =1 ;
while(giatri <= n*n){
    for(i=vtcot;i<socot;i++) { a[vthang][i] = giatri; giatri++; }
    for(i=vthang+1;i<sohang;i++) { a[i][socot-1]=giatri; giatri++; }
    for(i=socot-2;i>=vtcot;i--) { a[sohang-1][i] =giatri; giatri++; }
    for(i=sohang-2;i>vthang;i--) { a[i][vtcot]=giatri;giatri++; }
    vthang++; vtcot++; sohang--; socot--;
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++) printf("%7d ",a[i][j]);
    printf("\n\n");
}
return 0;
}

