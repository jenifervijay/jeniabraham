#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
rem=n%10;
rem1=n/10;
rem2=rem1%10;
rem3=rem1/10;
printf("%d %d %d ",rem3,rem2,rem);
getch();
}
