#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,l,x,i;
char a[100];
clrscr();
printf("\n enter the string:");
gets(a);
printf("\n enter the number:");
scanf("%d",&n);
l=strlen(a);
x=l-n;
for(i=x;i<l;i++)
{
printf("%c ",a[i]);
}
getch();	
}
