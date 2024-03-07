#include<stdio.h>
main()
{
	int a;
	printf("Enter the First num :");
	scanf("%d",&a);
	int b;
	printf("Enter the Sec num :");
	scanf("%d",&b);

	int x[a];
	
	
	int i;
	
	for(i=a; i<=b; i++)
	{
		
		if(i%2==0)
		{
			printf("%d ",i);
		}
		else
		{
			printf("  ");
		}
	
	}

}
