#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
clrscr();
printf("\n enter the number:");
    scanf("%d",&a);
    while(a%10!=0)
    {
        a++;
    }
    printf("%d",a);
getch();
}
