#include<stdio.h>
main()
{
	//Wap to find the sum of the anti-diagonal elements in a 2d array.
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
	
	int x=n-1;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(j==i)
			{
				sum=sum+a[x][i];
				x--;
			}
		}
	}
	printf("Ans :%d",sum);
}
