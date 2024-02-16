//Write a program in C to read n number of values in an array and display them in reverse order.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the num a[%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("Reverese num :");
	for(i=n-1; i>=0; i--)
	{
		printf("%d",a[i]);
		
	}
	printf("\n");
}
