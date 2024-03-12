#include<stdio.h>
main()
{
	//4. wap to find the address of the chain pointer.
	int x,y,z;
	printf("Enter value of x,y,z:");
	scanf("%d%d%d",&x,&y,&z);
	//single
	int *a=&x;
	int *b=&y;
	int *c=&z;
	printf("Address of x: %d value at *a : %d\n",a,*a);
	printf("Address of y: %d value at *b : %d\n",b,*b);
	printf("Address of z: %d value at *c : %d\n\n",c,*c);
	
	//dobule
	int **p=&a;
	int **q=&b;
	int **r=&c;
	printf("Address of a: %d value at **p : %d\n",p,**p);
	printf("Address of b: %d value at **q : %d\n",q,**q);
	printf("Address of c: %d value at **r : %d\n\n",r,**r);
	
	//chian 
	int ***i=&p;
	int ***j=&q;
	int ***k=&r;
	printf("Address of p: %d value at  ***i: %d\n",i,***i);
	printf("Address of q: %d value at  ***j: %d\n",j,***j);
	printf("Address of r: %d value at  ***k: %d\n\n",k,***k);
}
