#include <iostream.h>
#include<conio.h>
void main()
 {
char str[10];
int n,i;
clrscr();
cout<<"enter the string:";
cin>>str;
n=strlen(str);
for(i=n-1;i>=0;i--)
{
cout<<str[i];
}	
getch();
}
