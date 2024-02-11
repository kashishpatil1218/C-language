#include<stdio.h>
main()
{
	        //A
		  //B A
	    //C B A
	  //D C B A
	//E D C B A	
	
	char i,j,k;
	
	
	for(i='A'; i<='E'; i++)
	{
		for(k=i; k<='E'; k++)
		{
			printf("  ");
		}
		for(j=i; j>='A'; j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
