#include<stdio.h>
main()
{
	//7.WAP to perform diagonal and anti diagonal sum of 2D array.
	int n;
	printf("Enter vlaue of n :");
	scanf("%d",&n);
	
	int a[n][n];
	int i,j,sum=0;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter the value of a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("diagonal sum is %d\n",sum);
	sum=0;
	int x=n-1;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			{
				sum=sum+a[i][x];
				x--;
			}
		}
	}
	printf("Antidiagonal sum is %d\n",sum);
	
}
