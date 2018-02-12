#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
clrscr();
printf("\n enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf(" even no:%d",n);
    }
    else
    {
        printf(" nearest even no:%d",(n-1));
    }
  getch();
}
