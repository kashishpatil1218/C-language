#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || j==5)
			{
				printf("* ");
			}
			else if(j==2 && i==6)
			{
				printf("* ");
			}
			else if(j==3 && i==5)
			{
				printf("* ");
			}
			else if(j==4 && i==6)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
