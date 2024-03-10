#include<stdio.h>
#include<string.h>
main()
{
	//2 .WAP compares two strings.
	int a1[100],a2[100];
	puts("Enter the a1 :");
	gets(a1);
	puts("Enter the a2 :");
	gets(a2);
	
	int n=strcmp(a1,a2);
	
	if(n==0)
	{
		printf("value is same ");
	}
	else if(n!=0)
	{
		printf("value is not same ");
	}
	
}
