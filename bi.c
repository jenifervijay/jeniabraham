#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[20];
int m,i,temp=0;
printf("\n enter the string:");
scanf("%s",s);
m=strlen(s);
for(i=0;i<m;i++)
{
if(s[i]=='0' || s[i]=='1')
{
temp=1;
}
else
{
temp=0;
}
}
if(temp==1)
{
printf("\n binary representation");
}
else
{
printf("\n not binary representation");
}
getch();
}
