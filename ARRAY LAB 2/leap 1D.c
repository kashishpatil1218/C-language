#include<stdio.h>
main()
{
    int start,ending;
    printf("enter stating :");
    scanf("%d",&start);
    printf("enter ending :");
    scanf("%d",&ending);
    
    int i,n,k=0;
    
    n=(ending-start)/4+1;
    int a[n];
    
    for(i=start;i<=ending;i++)
    {
        if(i%2==0)
        {
            a[k]=i;
            k++;
        }
    }
      printf("\nans is :%d",k);
    for(i=0;i<k;i++)
    {
        printf(" %d ",a[i]);
        
    }
}
