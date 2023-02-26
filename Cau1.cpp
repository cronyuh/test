#include<bits/stdc++.h>
using namespace std;

int check(int n){
    int tong=0;
    for(int i=1;i<=n/2;++i){
        if(n%i==0) tong+=i;
    }
    return (tong==n) ? 1 : 0;
}
int main(){
    int n;
    cin>>n;

    
    if(check(n)) printf("%d la so hoan chinh",n);
    else printf("%d khong la so hoan chinh",n);

    printf("\n");

    for(int i=1;i<=1000;++i){
        if(check(i)) printf("%d ",i);
    }

    return 0;

}