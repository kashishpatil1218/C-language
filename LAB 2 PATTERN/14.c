#include<stdio.h>
main()
{
			//A
		  //A B
		//A B C
	  //A B C D
	//A B C D E
	
	
	char i,j,k;
	
	
	for(i='A'; i<='E'; i++)
	{
		for(k=i; k<='E'; k++)
		{
			printf("  ");
		}
		for(j='A'; j<=i; j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}	
}
