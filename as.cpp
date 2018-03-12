
#include<iostream.h>
#include<conio.h>
void main()
{

	int a[200],i,n,k,temp,j=0;
	clrscr();
cout<<"\n enter the limit:";
cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	for(k=i+1;k<n;k++)
	{
		if(a[i]>a[k])
		{
	    temp=a[i];
	    a[i]=a[k];
	   a[k]= temp;
	   j++;
	}
	}
	}cout<<j;
	getch();
	}
