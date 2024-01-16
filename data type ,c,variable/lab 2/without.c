#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a,b :");
	scanf("%d%d",&a,&b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("a is %d\n",a);
	printf("b is %d",b);
}
