#include<stdio.h>
main()
{
	//Write a C program to find the largest number in the array.[2D]
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	int m;
	printf("Enter value of m :");
	scanf("%d",&m);
	int a[n][m];
	
	int i,j,max=1;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("Enter value of a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(max<a[i][j]);
			{
				max=a[i][j];
			}
		}
	}
	printf("%d ",max);
	
}
