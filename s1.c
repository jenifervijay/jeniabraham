#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char str[50];
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
printf("\n enter the string:");
scanf("%s",str);
for(i=1;i<=n;i++)
{
printf("\n %s",str);
}
getch();
}
