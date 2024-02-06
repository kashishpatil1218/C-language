#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int x=1;
	for(x=1; n>=1; n--)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
	}
}
