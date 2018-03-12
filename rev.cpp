#include<iostream.h>
#include<conio.h>
void main()
{
int n,a=0,r;
clrscr();
cout<<"\n enter the number(given<=1000):";
cin>>n;
while(n!=0)
{
r=n%10;
a=a*10+r;
n=n/10;
cout<<"reverse number is"<<a;
}
getch();
}
