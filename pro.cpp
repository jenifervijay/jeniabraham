#include<iostream.h>
#include<conio.h>
void main()
{
int n,r,a=1;
clrscr();
cout<<"\n enter the number:";
cin>>n;
while(n!=0)
{
r=n%10;
a=a*r;
n=n/10;
}
cout<<"product of digits:\n"<<a;
getch();
}
