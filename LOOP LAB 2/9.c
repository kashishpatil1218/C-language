#include<stdio.h>
main()
{
	int a,sum=1;
	printf("Enter the value of a :");
	scanf("%d",&a);
	int x=1;
	do
	{
		
		sum=sum*x;
		
		x++;
	}while(x<=a);
	{
		printf("%d" ,sum);
	}
	
}
