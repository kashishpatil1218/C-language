//3. Write a C program to Insert, Delete, and 
//update operations of the element into the array.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int a[n];
	int i;
	//Insert
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	//update
	
	
	int k;
	printf("Enter the Index of k :");
	scanf("%d",&k);
	
	for(i=0; i<=k; i++)
	{
		if(i==k)
		{
			printf("Enter update value :");
			scanf("%d",&a[i]);
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	//delete
	int x;
	printf("Enter the Index of x :");
	scanf("%d",&x);
	
	for(i=x; i<n; i++)
	{
		a[i]=a[i+1];
	}
	 a[n-1]='\0';
	for(i=0; i<n-1; i++)
	{
		printf("%d ",a[i]);
	}
	
	
	
	
}
