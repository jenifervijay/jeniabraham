#include<stdio.h>
#include<conio.h>
void main()
{
    int a[45],n,i,sum=0;
clrscr();
printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum/n);
getch();
}
