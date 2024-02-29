#include<stdio.h>
main()
{
	//6.Write a program in C to find a pair of target values given by the user.
	int target;
	printf("Enter target value   :");
	scanf("%d",&target);
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	int a[n];
	
	int i,j;
	for(i=0; i<n; i++)
	{
		printf("Enter the pair value a[%d] :",i);//value of array
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(target==a[i]+a[j])
			{
				printf("Pair of Index(%d , %d)\n",i,j);
				printf("Pair value (%d+%d)\n",a[i],a[j]);
				
			}
		}
	}
}
