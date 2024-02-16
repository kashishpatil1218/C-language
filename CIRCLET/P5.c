#include<stdio.h>
main()
{
	char i,j,k='A';
	
	for(i='A'; i<='E'; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
}
