#include<stdio.h>
main()
{
	//WAP to find sum of 2D array.
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	int m;
	printf("enter the value of m :");
	scanf("%d",&m);
	
	int a[n][m];
	
	int sum=0;
	
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("enter the valuye of a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
			for(j=0; j<m; j++)
			{
				sum=sum-a[i][j];
			}
	}
		printf("%d",sum);
	
	
}


