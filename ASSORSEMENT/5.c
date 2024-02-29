#include<stdio.h>
main()
{
	// Write a program in C to set the array in ascending order.
	int n;
	printf("enter value of n :");
	scanf("%d",&n);
	
	int a[n];
	int i,j,tem=0;
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j]);
			{
				tem=a[j];
				a[j]=a[i];
				a[j]=tem;
			}
		}	
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
