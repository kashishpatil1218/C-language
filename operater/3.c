#include<stdio.h>
main()
{
	
	
	int x,y,ans;
	printf("enter the value of x,y :");
	scanf("%d%d",&x,&y);
	
	ans=(x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	printf("(x+y)^3=%d",ans);
}
