#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the value of a,b,c,d :");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	//a,b,c,d
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			printf("c is max");
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			//b,d
			if(b>d)
			{
				printf("b is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				printf("c is max");
			}
			else
			{
				printf("d is max");
			}
		}
	}
}
