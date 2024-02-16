#include<stdio.h>
main()
{
	//AP to get & print 1D array of N elements.
	
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter the value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
		
	}
}
