#include<iostream.h>
#include<conio.h>
void main()
{
int n,count=0;
clrscr();
cout<<"\n enter the number:";
cin>>n;
while(n!=0)
{
n=n/10;
count++;
}
cout<<count;
getch();
}
