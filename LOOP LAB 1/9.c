#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int x=1;
	int sum=1;
	while(x<=n)
	{
		sum=sum*x;
		
		x++;
	}
	printf("sum is %d",sum);
}
