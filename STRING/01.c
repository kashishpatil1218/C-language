#include<stdio.h>
#include<string.h>
main()
{
	//1. WAP to convert given string into lowercase.
	
    char name[20];
    int i,n;
    printf("Enter name :");
    gets(name);
    n=strlen(name);
   
    for(i=0; i<n; i++)
    {
    	if(name[i]>=65 && name[i]<=90)
    	{
    		name[i]+=32;
		}
	}
		puts(name);
}
