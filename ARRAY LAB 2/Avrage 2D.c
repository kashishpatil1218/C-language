#include<stdio.h>
main()
{
	//3.WAP to find average of 2D array.
	int n;
	printf("enter the Row :");
	scanf("%d",&n);
	int m;
	printf("enter the Column :");
	scanf("%d",&m);
	
	int i,j,sum,avg;
	int a[n][m];
	
	
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
				sum=sum+a[i][j];
			}
	}
	int size=sizeof(a)/sizeof(a[0][0]);
	printf("Size of arayy is :%d\n",size);
	
	printf("Total sum : %d\n",sum);
	avg=sum/size;
	printf("avg is %d",avg);
	
	
}


