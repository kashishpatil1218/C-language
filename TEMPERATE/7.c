#include<stdio.h>
main()
{
	int n,sum=0,i;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		
	}
	printf("sum is %d",sum);
}
