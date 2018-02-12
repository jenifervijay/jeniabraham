#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("\n enter the two numbers:");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n after swapping:%d %d",a,b);
getch();
}
