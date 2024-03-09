#include<stdio.h>
//Q.1 Write a Program to find the sum of all 1D Array elements
// by passing an array as an argument using UDF.
void sum()
{
	int n,i;
	printf("Enter value of n :");
	scanf("%d",&n);
	int a[n];
	int sum=0;
	for(i=0;i <n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i <n; i++)
	{
	    sum=sum+a[i];
	}
	printf("sum is %d ",sum);
	

}
main()
{
	sum();
}
