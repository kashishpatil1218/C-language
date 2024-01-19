#include<stdio.h>
main()
{
	
	int gs,da,ta,basic;
     
     printf("enter basic salary:");
     scanf("%d",&basic);
     
     da=(10 * basic) / 100;
     ta=(12 * basic) / 100;
     
     gs=basic + da + ta;
     
     printf("gs: %d\n",gs);
     
	
}

