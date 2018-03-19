#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,n[20],i,cnt=0;
clrscr();
cout<<"enter the two numbers:";
cin>>a>>b;
for(i=0;i<a;i++)
{
cin>>n[i];
}
for(i=0;i<a;i++)
{
if(n[i]==b)
{
cnt++;
}
cout<<cnt;
}
getch();
}
