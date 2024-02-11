#include<stdio.h>
main()
{
	//1
	//1 2
	//1 2 3
	//1 2 3 4
	//1 2 3 4 5
	//1 2 3 4
	//1 2 3
	//1 2
	//1	
	
	int i,j,k,l;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
	for(i=4; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(k=4; k>=1; k--)
		{
			printf(" ");
		}
		printf("\n");
	}
}
