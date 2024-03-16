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
		printf("Enter the value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	 int sum;
	 for(i=0; i<n; i++)
	 {
	 	sum=a[i]*a[i];
	 	printf("%d ",sum);
	 }
}
