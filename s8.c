#include<stdio.h>
#include<conio.h>
void main()
{
int a[60],n;
printf("\n enter the limit");
scanf("%d",&n);
printf("\n enter the elements");
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
b=a[0];
for(i=1;i<=n;i++)
{
if(b<a[i])
{
b=a[i];
}
}
printf("highest element:%d",b);

s=a[0];
for(i=1;i<=n;i++)
{
if(s>a[i])
{
s=a[i];
}
}
printf("smallest element:%d",s);

getch();
}
