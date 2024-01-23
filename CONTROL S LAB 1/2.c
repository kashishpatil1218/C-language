#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("n is positive");
	}
	else if(n<0)
	{
		printf("n is negative");
	}
	else if(n==0)
	{
		printf("n is neutral");
	}
}
