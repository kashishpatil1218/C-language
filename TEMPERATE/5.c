#include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		fact=fact*i;
		
	}
	printf("factorial is %d",fact);
}
