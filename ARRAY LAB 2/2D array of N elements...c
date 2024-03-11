#include<stdio.h>
main()
{
	//1.WAP to get & print 2D array of N elements.
	
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int a[n][n];
	int i,j;
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
			printf(" %d",a[i][j]);
		}
	
	}

	
	
}
