#include <stdio.h>
#include<conio.h>
 void main()
 {
   int i,count=0;
clrscr();
   char b[100];
   gets(b);
   for(i=0 ; b[i]!='\0' ; i++)
     {
     	if(b[i]==' ')
     	{
             count++;
     	}
     }
   printf("%d\n",count);
 getch();
 }
