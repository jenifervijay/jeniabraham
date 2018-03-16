#include<stdio.h>
#include<conio.h>
void main() 
    {    
    int a[100], min, size, c;
clrscr();
    printf("Enter the number of elements in array\n");
    scanf("%d",&size); 
    printf("Enter the  integers\n");
    for ( c = 0 ; c < size ; c++ )
{
    scanf("%d", &a[c]);
 }   
    min = a[0];  
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( a[c] < min) 
        {
min = a[c];
	}
    } 
	printf("Minimum element is:%d", min);
    getch();
}
