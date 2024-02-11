#include<stdio.h>
main()
{
	//1 0 1 0 1
	  //0 1 0 1
	    //1 0 1
	      //0 1
	        //1
			
	int i,j,k;
	for(i=5; i>=1; i--)
	{
		for(k=i; k<=5; k++)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
			if(j%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}	
}
