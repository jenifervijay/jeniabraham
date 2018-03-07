#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,mul;
clrscr();
cout<<"\n enter the values of a and b:";
cin>>a>>b;
mul=(a>b)?a:b;
if(mul%a==0 && mul%b==0)
{
cout<<mul;
}
getch();
}

