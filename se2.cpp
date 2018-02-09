#include<iostream.h>
#include<conio.h>
void main()
{
int a=-1,b=1,c,i;
clrscr();
cout<<"enter the number:";
cin>>n;
cout<<"fibonacci series are:";
for(i=1;i<=n;i++)
{
c=a+b;
cout<<" "<<c;
a=b;
b=c;
}
getch();
}
