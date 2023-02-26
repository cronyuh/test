#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=2) return 1;
    else return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin>>n;

    int sofibonaccithun=fibo(n);

    printf("So Fibonacci thu %d la %d",n,sofibonaccithun);

    printf("\n");

    int tong=0;

    if(n%2==0){
        for(int i=2;i<=n;i+=2) tong+=fibo(i);
        printf("Tong S khi n chan la %d", tong);
    }
    else{
        for(int i=1;i<=n;i+=2) tong+=fibo(i);
        printf("Tong S khi n le la %d", tong);
    }

    


    return 0;

}