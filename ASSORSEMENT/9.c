#include<stdio.h>
main()
{
	//Wap to find the sum of diagonal elements in a 2d array.
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	
	int a[n][n];
	
	int i,j,sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter value of a[%d][%d] :",i,j);
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
	printf("Ans :%d",sum);
}
