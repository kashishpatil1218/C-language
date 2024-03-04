#include<stdio.h>
#include<string.h>
main()
{
	//4. WAP to reverse string.
	int n;
	char name[30],rev[30];
	printf("Enter Name :");
	gets(name);
	
	n=strlen(name);
	puts(name);
	int i,j;
	for(i=0,j=n-1; i<n,j>=0; i++,j--)
	{
		rev[i]=name[j];
	}
	puts(rev);
}
