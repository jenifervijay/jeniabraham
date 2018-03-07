#include <iostream.h>
#include<conio.h>
void main()
 {
int n,t,i;
clrscr();
cout<<"\n enter the number:";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
t=1;
break;
}
else
{
t=0;
}
}
if(t==0)
{
cout<<"not a composite no";
}
else
{
cout<<"\ composite no";
}
getch();
}
