//Q.4 Wap to find maximum from the 1d array.
#include<stdio.h>
main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    int a[n];
    int i,max=1;
    for(i=0; i<n; i++)
    {
        printf("enter valueof a[%d] :",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}
