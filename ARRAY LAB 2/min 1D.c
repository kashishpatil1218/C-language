//Q.5 Wap to find minimum from the 1d array.
#include<stdio.h>
main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    int a[n];
    int i,mini=10;
    for(i=0;i<n;i++)
    {
        printf("enter valueof a[%d] :",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        if(mini>a[i])
        {
            mini=a[i];
        }
    }
    printf("%d",mini);
}
