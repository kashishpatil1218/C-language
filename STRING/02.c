#include<stdio.h>
#include<string.h>
main()
{
	//2. WAP to convert given string in too uppercase.
	
    char name[20];
    int i,n;
    printf("Enter name :");
    gets(name);
    n=strlen(name);
   
    for(i=0; i<n; i++)
    {
    	if(name[i]>=97 && name[i]<=122)
    	{
    		name[i]-=32;
		}
	}
		puts(name);
}
