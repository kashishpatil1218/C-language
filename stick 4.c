#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
    int sum=0;
    int avg,i;
    int a[5]={12,42,18,50,26};
    
    for(i=0; i<n; i++)
    {
    	printf("enter the value of a[%d] :",i);
    	scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
    	sum=sum/a[i];
	}
	printf("avg is %d",sum/n);
}
