#include<stdio.h>
main()
{
	// Write a C program to left-rotate 
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	
    int a[n];
    int i,j,temp;
    for(i=0; i<n; i++)
    {
    	printf("enter value of a[%d] :",i);
    	scanf("%d",&a[i]);
	}
	int k;
		printf("enter value of k :");
    	scanf("%d",&k);
    	
    for(i=1; i<=k; i++)
    {
    	temp=a[n-1];
    	for(j=n; j>0; j--)
    	{
    		a[j]=a[j-1];
    		
		}
		a[0]=temp;
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
}
