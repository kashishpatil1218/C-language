#include<stdio.h>
#include<string.h>
main()
{
	//5.WAP to convert given string in Toggal Case.
	int i,n;
	char name[20];
	printf("Enter the name :");
	gets(name);
	
	if(name[0]>=97 && name[0]<=122)
	{
		name[0]-=32;
	}
	puts(name);
}
