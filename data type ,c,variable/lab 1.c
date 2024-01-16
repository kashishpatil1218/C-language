#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a,b:");
	scanf("%d%d",&a,&b);
	
	int sum;
	sum=a+b;
	printf("sum is %d\n",sum);
	
	sum=a*b;
	printf("multiplication is %d\n",sum);
	
	sum=a-b;
	printf("dicriment is %d\n",sum);
	
	sum=a/b;
	printf("div is %d\n",sum);
	
	sum=a%b;
	printf("module is %d\n",sum);
}
