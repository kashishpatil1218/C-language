#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=4; j++)
		{
			if(i==1 || j==1 || i==4)
			{
				printf("* ");
			}
			else if(i==2 && j==4)
			{
				printf(" * ");
			}
			else if(i==3 && j==4)
			{
				printf(" * ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
