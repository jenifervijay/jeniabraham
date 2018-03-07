#include <iostream.h>
#include<conio.h>
void main()
{
char s[10];
int i;
clrscr();
cout<<"\n enter the string:";
cin>>s;
for(i=0;s[i]!='\0';i++)
{	
if(s[i]>='0' && s[i]<='9')
{
cout<<s[i];
}
}
getch();
}
