#include<stdio.h>
main()
{
	//8. find square root of number without using any function.
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++)
	{
		if(i*i==n)
		{
			printf("root is: %d",i);
		}
	}
	
}
