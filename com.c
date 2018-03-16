#include<stdio.h>
#include<conio.h>
void main()
{
int n,k;
clrscr();
int a[50],i,flag=0;
printf("\n enter the two numbers:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
