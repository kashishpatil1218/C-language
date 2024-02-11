#include<stdio.h>
main()
{
	//1 2 3 4 5
	//1 2 3 4
	//1 2 3
	//1 2
	//1
	//1 2
	//1 2 3
	//1 2 3 4
	//1 2 3 4 5	
	
	int i,j,k,l;
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(k=1; k<=5; k++)
		{
			printf(" ");
		}
		printf("\n");
		
	}
	
	for(i=2; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(k=i; k<5; k++)
		{
			printf(" ");
		}
		for(l=i; l<5; l++)
		{
			printf(" ");
		}

		printf("\n");
	}
	
}
