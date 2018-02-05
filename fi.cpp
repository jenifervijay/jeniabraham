#include<iostream>
#include<conio.h>
 void main()
{
   int n, i, f = 0, s = 1, next;
 clrscr();
   cout << "Enter the number of terms of Fibonacci series you want" ;
   cin >> n;
   cout<< "Fibonacci series are : ";
 
   for ( i = 0 ; i < n ; i++ )
   {
      if ( i <= 1 )
         next = i;
      else
      {
         next = f + s;
         f = s;
         s = next;
      }
      cout << next ;
   }
 
getch();
}
