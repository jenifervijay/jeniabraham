#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char n[10];
clrscr();
printf("enter the number:");
scanf("%s",&n);
strrev(n);
printf("\n reversed string is:%s",n);
getch();
}
