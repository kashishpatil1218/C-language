#include<stdio.h>
main()
{
  int i,j;
  
  for(i=1; i<=7; i++)
  {
  	for(j=1; j<=7; j++)
  	{
  		if(i==1 && j==1)
  		{
  		   printf("* ");	
		}
		if(i==1 && j==7)
  		{
  		   printf("* ");	
		}
		if(i==2 && j==2)
  		{
  		   printf("* ");	
		}
		if(i==2 && j==6)
  		{
  		   printf("* ");	
		}
		if(i==3 && j==3)
  		{
  		   printf("* ");	
		}
		if(i==3 && j==5)
  		{
  		   printf("* ");	
		}
		if(i==4 && j==4)
  		{
  		   printf(" * ");	
		}
		if(i==5 && j==4)
  		{
  		   printf(" * ");	
		}
		if(i==6 && j==4)
  		{
  		   printf(" * ");	
		}
		if(i==7 && j==4)
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
