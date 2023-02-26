#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct SV
{
 int mssv;
 char ht[25];
 char lop[10];
float dtb;
};
int main()
{   
//Tao bo nho 
FILE *f;
  SV *sv;
 
int n;
cout<<"\n So thi sinh n= ";
cin>>n;
   sv= new SV[n+1];
if(sv==NULL)
 {     
cout<<"\n Loi cap phat vung nho";
  getch();  
  exit(0);
  }
 //vong lap nhap vao thong tin thi sinh
   for(int i=0;i<n;i++)
   {     
    cout<<"\n Thi sinh thu "<<i+1;
    cout<<"\n Ho ten";    
    cin.ignore(1);       
    cin.get(sv[i].ht,25);      
    cout<<"ma sinh vien";      
    cin>>sv[i].mssv;     
	cout<<"\nLop";
	cin>>sv[i].lop; 
    cout<<"\nDiem trung binh";   
    cin>>sv[i].dtb;        
    }
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(sv[i].dtb<sv[j].dtb)
        {
			SV tg=sv[i];sv[i]=sv[j];sv[j]=tg;        }
    }
    for(int i=0;i<n;i++)
    {
         cout<<"\n"<<setw(8)<<sv[i].mssv<<setw(25)<<sv[i].ht<<setw(10)<<sv[i].lop<<setw(6)<<sv[i].dtb;
    }
}	 f=*sv;
  f = fopen("f:\\test.txt","a+");
    delete sv;
    getch();

}

