#include<stdio.h>
main()
{
	int n;
	printf("enter value of n :");
	scanf("%d",&n);
	int a[n];
	
	int i,lar=0;
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	int max;
	for(i=0; i<n; i++)
	{
		if(max<=a[i])
		{
			max=a[i];
			
		}
	}
		printf("%d",max);
}