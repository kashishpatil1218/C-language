#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	int x=1;
	for(x=1; x<=n; x++)
	{
		if(x%2==1)
		{
			printf("%d ",x);
		}
	}
}
