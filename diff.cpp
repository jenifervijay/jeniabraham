#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"\nenter a and b values:";
cin>>a>>b;
c=a-b;
cout<<"sum="<<c;
if(c%2==0)
{
cout<<"\n even";
}
else
{
cout<<"\nodd";
}
getch();
}
