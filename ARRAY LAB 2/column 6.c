#include<stdio.h>
main()
{
	//6.WAP to perform coulmn-wise sum of 2D array.
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	int m;
	printf("Enter value of m :");
	scanf("%d",&m);
	
	int a[n][m];
	int i,j;
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
	int sum=0,x;
	
	for(x=0; x<m; x++)
	{
		for(i=0; i<n; i++)
			{
				for(j=0; j<n; j++)
				{
					if(j==x)
					{
						sum=sum+a[i][j];
						
					}
					
				}
		
        	}
        	printf("sum of column: %d ",sum);
        	sum=0;
		
	}
}
