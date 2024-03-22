#include<stdio.h>
main()
{
	int n;
	printf("enter value of n :");
	scanf("%d",&n);
	int a[n];
	
	int i,sqr=1;
	for(i=0; i<n; i++)
	{
		printf("enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
		
	}
	for(i=0; i<n; i++)
	{
		sqr=a[i]*a[i];
	    printf("sqr is : %d\n ",sqr);
    }
}