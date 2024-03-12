#include<stdio.h>
main()
{
	//  2 Write a Program to swap two variables using Pointers.
	int a;
	printf("Enter value of a :");
	scanf("%d",&a);
	int b,c;
	printf("Enter value of b :");
	scanf("%d",&b);

	int *m=&a;
	int *n=&b;
	int *q=&c;
	
	*q=*m;
	*m=*n;
	*n=*q;

	printf("a is :%d\n",a);
	printf("b is :%d",b);
  	
}
