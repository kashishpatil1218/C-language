#include<stdio.h>
main()
{
	int x,y;
	printf("enter the value of x,y :");
	scanf("%d%d",&x,&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	printf("x is %d\n",x);
	printf("y is %d",y);
}
