#include<stdio.h>
main()
{
	int start;
	printf("Enter the First num :");
	scanf("%d",&start);
	int end;
	printf("Enter the Sec num :");
	scanf("%d",&end);

    int n=(end-start)/4+1;
    printf("expected years %d : ",n);
    int leap[n];
	
	
	int i,x=0;
	
	for(i=start; i<=end; i++)
	{
		
		if(i%4==0)
		{
			leap[x]=i;
			x++;
		}
	
	}
	for(i=0; i<x; i++)
	{
		printf("%d ",leap[i]);
	}

}
