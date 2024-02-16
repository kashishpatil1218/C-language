#include<stdio.h>
main()
{
	int n;
	printf("Enter the size :");
	scanf("%d",&n);
	
	int i;
	int a[n];
	int b[n];
	int sum;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value b[%d] :",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("b[%d] : %d\n",i,b[i]);
	}
	
	printf("Sum is : ");
	for(i=0; i<n; i++)
	{
		sum=a[i]+b[i];
	    printf("%d ",sum);
	}
	}

