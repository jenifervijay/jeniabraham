#include<iostream.h>
#include<conio.h>
void swap(int*,int *);
void main()
{
int a,b;
cout<<"enter the a value:";
cin>>a;
cout<<"enter the b value:";
cin>>b;
cout<<"after swapping "<<a<<b;
}
void swap(int *,int *)
{
*a=*a ^ *b;
*b=*a ^ *b;
*a=*a ^ *b;
}
