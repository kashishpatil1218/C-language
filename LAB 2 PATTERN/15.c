#include<stdio.h>
main()
{
	//A B C D E
	  //A B C D
		//A B C
		  //A B
			//A	
			
	char i,j,k;
	
	
	for(i='E'; i>='A'; i--)
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
