//WAP to find the sum of a 1D array.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	int sum=0;
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value a[i] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];
	}
	printf("sum is %d :",sum);
}

