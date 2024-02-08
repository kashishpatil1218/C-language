#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("\nNumber of digit =%d",count);
}
