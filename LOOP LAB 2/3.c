#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int x=1;
	do
	{
		printf("%d ",x);
		x++;
		
	}while(x<=n);
}
