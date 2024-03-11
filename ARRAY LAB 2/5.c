//Wap to find minimum from the 1d array.

#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	int x[a];
	int i;

	
	for(i=0; i<a; i++)
	{
		printf("Enter the value of x[%d] :",i);
		scanf("%d",&x[i]);
	}
	
	int min=x[i];
	
	for(i=0; i<a; i++)
	{
		if(x[i]<min)
		{
			min=x[i];
			
		}
	
	}
	printf("%d",min);
	
	
}
