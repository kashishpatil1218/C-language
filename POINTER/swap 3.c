#include<stdio.h>
main()
{
	//3. wap to swap two variables without using the third variable and using a pointer.
	int a;
	printf("Enter value of a :");
	scanf("%d",&a);
	int b,c;
	printf("Enter value of b :");
	scanf("%d",&b);

	int *m=&a;
	int *n=&b;

	*m=*m+*n;
	*n=*m-*n;
	*m=*m-*n;

	printf("a is :%d\n",a);
	printf("b is :%d",b);
}
