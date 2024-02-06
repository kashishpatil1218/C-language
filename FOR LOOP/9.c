#include<stdio.h>
main()
{
	int x=1,n,sum=1;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(x=1; x<=n; x++)
	{
		sum=sum*x;
	
	}
	printf("%d ",sum);
}
