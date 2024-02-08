#include<stdio.h>
main()
{
	
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int i;
	for(i=10;  i>=1; i--)
	{
		printf("%d x %d= %d\n",n,i,n*i);
	}
}
