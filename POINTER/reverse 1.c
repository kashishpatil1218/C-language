#include<stdio.h>
main()
{
	//Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	int a[n];
	int *k=&a[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1; i>=0; i--)
	{
	   printf("%d ",*&a[i]);
	}
}
