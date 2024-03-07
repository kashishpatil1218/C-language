#include<stdio.h>

//Q.1 Write a Program to find the cube of a given number using UDF
void cube()
{
	int n,a;
	printf("Enter value of n :");
	scanf("%d",&n);
	
	a=n*n*n;
	printf("cube is :%d",a);
	return ;
}
main()
{
	cube();
}
