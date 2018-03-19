#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,n[20],i;
clrscr();
cout<<"enter the two numbers:";
cin>>a>>b;
for(i=1;i<=a;i++)
{
cin>>n[i];
}
for(i=1;i<=a;i++)
{
if((n[i]%2)!=0)
{
cout<<n[i];
}
}
getch();
}
