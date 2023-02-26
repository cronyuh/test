#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n == 1) return 1;
    return sum(n - 1) + n;
}
int main(){
    double n;
    cin>>n;

    double tong=sum(n)/n;

    printf("%.2f",tong);


    return 0;

}