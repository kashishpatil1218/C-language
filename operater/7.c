#include<stdio.h>
main()
{
	
	int x,y,z,ans;
	printf("enter the value of x,y,z :");
	scanf("%d%d%d",&x,&y,&z);
	
	ans= (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	printf("(x+y+z)^2=%d",ans);
}
