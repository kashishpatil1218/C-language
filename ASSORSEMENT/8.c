#include<stdio.h>
main()
{
	//Wap to find the reverse array without using another array.
	int n;
	printf("enter value of n :");
	scanf("%d",&n);
	int a[n];
	
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("Reverese num :");
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
