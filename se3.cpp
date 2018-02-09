#include<iostream.h>
#include<conio.h>
void main()
{
int a[50],n,i;
clrscr();
cout<<"enter the limit:";
cin>>n;
cout<<"enter the numbers:";
for(i=1;i<=n;i++)
{
cin>>a[i];
}
for(i=0;i<=n;i++)
{
 if(a[0] < a[i])
           a[0] = a[i];
    }
cout<<"maximum number is"<<a[0];
getch();
}
