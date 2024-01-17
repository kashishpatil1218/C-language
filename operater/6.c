#include<stdio.h>
main()
{

	int x,y,z,ans;
	printf("enter the value of x,y,z :");
	scanf("%d%d%d",&x,&y,&z);
	
	ans=(x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z))+(3*(z+x));
	printf("(x-y-z)^3=%d",ans);
}
