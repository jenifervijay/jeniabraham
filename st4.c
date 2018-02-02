#include<stdio.h>
#include<conio.h>
void main()
{
 char str[100];
clrscr();
 int count=0,i;
 printf("enter the paragraph:");
 gets(str);
 while(str[i]!='\0')
 {
  if(str[i]='.')
{
 count++;
 }
  i++;
  }
  printf("total lines in paragraph %d",count);
getch();
  }
