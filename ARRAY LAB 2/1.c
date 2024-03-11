#include<stdio.h>
main()
{
	int i,x,y,j=0; // x==a, y==b
	
	printf("Enter the size of x :");
	scanf("%d",&x);
	
	printf("enter the size of y :");
	scanf("%d",&y);
	
	int a[x],b[y];
	int z=x+y;
	
	int c[z];
	
	for(i=0; i<x; i++)
	{
	    printf("Enter the value of a[%d] :",i);
		scanf("%d",&a[i]);	
	} 
	for(i=0; i<x; i++)
	{
		c[i]=a[i];
	}
	printf("\n");
	
	for(i=0; i<y; i++)
	{
		printf("Enter the value of b[%d] :",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<y; i++)
	{
		a[i]=b[i];
	}
	for(i=x; i<z; i++)
	{
		c[i]=a[j];
		j++;
	}
	printf("\n");
	
	for(i=0; i<z; i++)
	{
		printf("%d ",c[i]);
	}
}
