#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	int x;
	for(x=1; x<=10; x++)
	{
		printf("%d x %d= %d\n",n,x,n*x);
	}
}
