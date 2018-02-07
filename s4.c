#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("\n enter the number:");
scanf("%d",&n);
if(n>=1 && n<=9)
{
printf("it is a range of[1,10]");
}
else
{
printf("it is not a range of[1,10]");
}
getch();
}
