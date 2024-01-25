#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter the value of a,b,c,d,e :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	//a,b,c,d,e
	if(a<b)
	{
		//a,c,d,e
		if(a<c)
		{
			//a,d,e
			if(a<d)
			{
				//a,e
				if(a<e)
				{
					printf("a is min");
				}
				else
				{
					printf("e is min");
				}
			}
			else
			{
				printf("d is min");
			}
		}
		else
		{
			printf("c is min");
		}
	}
	else
	{
		//b,c,d,e
		if(b<c)
		{
			//b,d,e
			if(b<d)
			{
				//b,e
				if(b<e)
				{
					printf("b is min");
				}
				else
				{
					printf("e is min");
				}
	
			}
			else
			{
				printf("d is min");
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//c,e
				if(c<e)
				{
					printf("c is min");
				}
				else
				{
					printf("e is min");
				}
			}
			else
			{
			//d,e
			if(d<e)
			{
				printf("e is min");
			}
			 else
			{
				printf("d is min");
			  }	
			}
		}
	}
}
