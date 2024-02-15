#include<stdio.h>
main()
{
	//11
	//12 13
	//14 15 16
	//17 18 19 20
	//21 22 23 24 25
	
	int i,j,k=11;
	
	for(i=1; i<=5; i++)
	{
        for(j=i; j>=1; j--)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");		
	}	
	
}
