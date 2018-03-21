#include<iostream.h>
#include<conio.h>
void main()
{
int n,t=1;
clrscr();
cout<<"\n enter the number:";
cin>>n;
for(int i=1;i<=n;i++)
{
t=t*i;
}
cout<<"\n factorial of a given number is:"<<t;
getch();
}
