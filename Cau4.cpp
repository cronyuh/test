#include<bits/stdc++.h>
using namespace std;

double sum(double n) {
    if(n==1) return sqrt(3);
    else return sqrt(sum(n-1)+3);
}
int main(){
    double n;
    cin>>n;

    double tong=sum(n);

    printf("%.3f",tong);


    return 0;

}