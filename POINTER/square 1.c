#include<stdio.h>
main()
{
	//1.Write a Program to find the square of each element of a given 1D array using a Pointer.
	int n;
	printf("Enter value of n:");
	scanf("%d",&n);
	int a[n];
	int i;
	int *sq=a;
	
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		*sq = (*sq) * (*sq);
		sq++;
		sq==a[i];
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	
	
}
