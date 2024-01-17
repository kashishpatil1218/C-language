#include<stdio.h>
main()
{
	
	int x,y,ans;
	printf("enter the value of x,y :");
	scanf("%d%d",&x,&y);
	
	
	ans=(x*x) - (2*x*y) + (y*y);
	printf("(x-y)^2=%d",ans);
	
}
