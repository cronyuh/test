#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct SV
{
    int masv;
    char hoten[25];
    char lop[10];
    float diemTB; 
};

 int main()
{
    SV *sv;
    int n; float max;
    cout<<"\nSo sinh vien: "; cin>>n;
    sv=new SV[n+1];
    if (sv == NULL)
    {
        cout<<"\n Loi cap phat vung nho";
        getch();
        exit(0);
    }
    for (int i=0;i<n;i++)
    {
        cout<<"\nSinh vien thu "<<i+1;
        cout<<"\nHo ten: ";cin.ignore(1);cin.get(sv[i].hoten,25);
        cout<<"\nLop: ";cin.ignore(1);cin.get(sv[i].lop,10);
        cout<<"Ma sinh vien: "; cin>>sv[i].masv;
        cout<<"Diem trung binh: ";cin>>sv[i].diemTB;
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (sv[i].diemTB<sv[j].diemTB)
            {
                max=sv[j].diemTB;
                SV tg=sv[i];sv[i]=sv[j];sv[j]=tg;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<"\n"<<setw(8)<<sv[i].masv<<setw(25)<<sv[i].hoten<<setw(10)<<sv[i].lop<<setw(6)<<sv[i].diemTB;
    }
    for (int i=0;i<n;i++)
    {
        if(sv[i].diemTB == max)
        cout<<"\nNhung sinh vien co diem cao nhat: "<<setw(8)<<sv[i].masv<<setw(25)<<sv[i].hoten<<setw(10)<<sv[i].lop<<setw(6)<<sv[i].diemTB;
    }
    delete sv;
    getch();
}
