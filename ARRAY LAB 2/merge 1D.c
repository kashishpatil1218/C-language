//// Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep
//   in mind that both array sizes can be different.
#include<stdio.h>
main()
{
	int n,m;	
    printf("Enter value of n :");
    scanf("%d",&n);
    printf("Enter value of m :");
    scanf("%d",&m);
    int i,j=0,o;
    o=n+m;
    int a[n];
	int b[m];
	int c[o];
    
    for(i=0; i<n; i++)
    {
        printf("Enetr value of a[%d] :",i);
        scanf("%d",&a[i]);
        c[j]=a[i];
        j++;
    }
    printf("\n");
    for(i=0;i<m;i++)
    {
        printf("Enetr your value b[%d] :",i);
        scanf("%d",&b[i]);
        c[j]=b[i];
        j++;
    }
    printf("ans is :");
    for(i=0;i<o;i++)
    {
        printf("%d ",c[i]);
    }
}
