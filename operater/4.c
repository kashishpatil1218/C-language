#include<stdio.h>
main()
{
	
	
	int x,y,ans;
	printf("enter the value of x,y :");
	scanf("%d%d",&x,&y);
	
	ans=(x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	printf("(x-y)^3=%d",ans);
}
