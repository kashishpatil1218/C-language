#include<stdio.h>
main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	int count=0;
	int last=n%10;
	int first;
	while(n>9)
	{
		n=n/10;
	}
	first=n;
	printf("\n%d",first+last);
}
