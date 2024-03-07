#include<stdio.h>
//Write a Program to check if a given number is divisible by
// both 3 & and 5 or not by using UDF.
void cheack()
{
	int n,a;
	printf("Enter value of n :");
	scanf("%d",&n);
	if(n%3==0)
	{
		printf("n is divisible by 3");
	}
	else if(n%5==0)
	{
		printf("n is divisible by 5");
	}
	else
	{
		printf("n is not divisible !");
	}
	
}
main()
{
	cheack();
}
