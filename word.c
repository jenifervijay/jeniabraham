#include <stdio.h>
#include<conio.h>
#include<string.h>
void  main() 
{
	char sen[100];
	int n,i,count=0;
printf("\n enter the sentence:");
	gets(sen);
	n=strlen(sen);
	for(i=0;i<n;i++)
	{
	    if(sen[i]==' ')
	    {   
	        count++;
	    }
	    else
	    {
	        continue;
	    }
	}
    printf("%d",count+1);
getch();
}
