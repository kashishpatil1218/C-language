#include<stdio.h>
main()
{
	//Write a program to get two arrays and create an addition of array position-wise.
    //ex: A= 1,2,3 B=5,6,7 answer = 6,8,10
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
    int i,sum=0;
    
    for(i=0; i<n; i++)
    {
    	printf("Enter the value of a[%d] :",i);
    	scanf("%d",&a[i]);
	}
	 for(i=0; i<n; i++)
    {
    	printf("%d\n",a[i]);
    	
	}
	
	for(i=0; i<n; i++)
    {
    	printf("Enter the value of b[%d] :",i);
    	scanf("%d",&b[i]);
	}
	 for(i=0; i<n; i++)
    {
    	printf("%d\n",b[i]);
    	
	}
	 printf("sum is :\n");
	 
	 for(i=0; i<n; i++)
    {
    	sum=a[i]+b[i];
    	printf("%d\n",sum);
    	
	}
	
}
