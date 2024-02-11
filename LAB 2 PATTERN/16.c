#include<stdio.h>
main()
{
	//A B C D E
	  //B C D E
		//C D E
		  //D E
			//E	
	
	char i,j,k;
	
	
	for(i='A'; i<='E'; i++)
	{
		for(k=i; k>='A'; k--)
		{
			printf("  ");
		}
		for(j=i; j<='E'; j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}	
}
