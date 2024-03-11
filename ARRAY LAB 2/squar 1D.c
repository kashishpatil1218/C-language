//Q.3 Write a Program to find square of each element from the given array.

#include<stdio.h>
main()
{
    int i,n,squar=1;
    printf("Enter your value of n :");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter your value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("squar is :");
    for(i=0;i<n;i++)
    {
        squar=a[i]*a[i];
        printf(" %d",squar);
    }
}
