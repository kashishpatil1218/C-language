#include<stdio.h>
main()
{
	char n;
	printf("enter char :");
	scanf(" %c",&n);
	char a,e,i,o,u;

	if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
	{
		printf("its a vowel");
	}
	else
	{
		printf("its a consonant");
	}

	
}