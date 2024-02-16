#include <stdio.h>
 main()
{
    int n;
    int i;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    int a[n];
	int b[n];
    

    for (i=0; i<n; i++) 
	{
		printf("Enter the value a[%d]:", i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++) 
	 {
        b[i]=a[i];
     }
    printf("Copy num :");
    for(i=0; i<n; i++)  
	{
        printf("%d ",b[i]);
    }
    printf("\n");
    
    
}
