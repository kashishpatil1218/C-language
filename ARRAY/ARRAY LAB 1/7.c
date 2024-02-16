//WAP to print the multiplication table of each element of the array.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	int a[n];
	int  i,j;
	
	for(i=1; i<=n; i++)
	{
		printf("Enter the num a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
		for(i=1; i<=n; i++)
	{
		
		for(j=1; j<=10; j++)
		{
			printf("%d x %d = %d\n\n",a[i],j,a[i]*j);
		}
	}
	
	
}
