#include <iostream.h>
#include<conio.h>
void main()
 {
int n,sum=0,i,a[20];
clrscr();
cout<<"enter the limit:";
cin>>n;
cout<<"enter the numbers:";
for(i=0;i<=n;i++)
{
cin>>a[i];
}
for(i=0;i<=n;i++)
{
sum=sum+a[i];
}
cout<<"sum:"<<sum;
getch();
}
