 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
void main()
{
char a[30],b[20];
clrscr();
printf("Enter two number:");
 scanf("%s %s",a,b);
 strcat(a,b);
 printf("%s",a);
 getch();
}
