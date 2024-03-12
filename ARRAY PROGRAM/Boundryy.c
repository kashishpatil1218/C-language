#include<stdio.h>
main()
{
	//Write a Program to print and find the 
	//sum of all boundary elements from a given 5x5 2D array.
	
	int n,m;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter value of m :");
	scanf("%d",&m);
	
	int a[n][m];
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("Enter value of a[%d][%d] :",i,j);
			scanf(" %d",&a[i][j]);
		}
		printf("\n");
	}
	int sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if (i==0 || i==n-1 || j==0 || j==m-1)
			{

               printf(" %d",a[i][j]);
               sum=sum+a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("sum is %d",sum);
}
