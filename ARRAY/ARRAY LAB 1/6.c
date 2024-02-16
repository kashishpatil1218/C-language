#include<stdio.h>
main()
{
//	/WAP to find the average of the 1D array.

     int n;
     printf("Enter the value of n :");
     scanf("%d",&n);
     
     int a[n];
     int sum,avg ,i;
     
     for(i=0; i<n; i++)
     {
     	printf("Enter the value a[%d] :",i);
     	scanf("%d",&a[i]);
	 }
	 for(i=0; i<n; i++)
     {
     	 sum=sum+a[i];
	 }
	 printf("avg is : %d ",sum/n);
}
