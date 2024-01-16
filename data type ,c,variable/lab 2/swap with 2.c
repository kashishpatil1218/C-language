#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter the value of a,b:");
	scanf("%d%d",&a,&b);

	c=a;
	a=b;
	b=c;
	printf("a is %d\n",a);
	printf("b is %d\n",b);
	
}
