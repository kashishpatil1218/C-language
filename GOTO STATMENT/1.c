#include<stdio.h>
main()
{
	int x=1;
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(x=1; x<=n; x++)
	{
		printf("%d ",x);
		if(x==n)
		{
			break;
		}
	}
}
