#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int x=1;
	while(x<=10)
	{
		printf("%d x %d=%d\n",n,x,n*x);
		x++;
	}
}
