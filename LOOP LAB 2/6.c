#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int x=1;
	

	do
	{
		if(n%2==0)
		{
		
			printf("%d ",n);
	
		}
			n--;
		
	}while(n>=x);
}
