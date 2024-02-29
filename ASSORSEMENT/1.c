#include<stdio.h>
main()
{
	//1.WAP to get the array and count & and remove all duplicate values in the array
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	int a[n];
	
	int i,j,count=0;
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				a[i]='\0';
				count++;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		if(a[i]!='\0')
		{
			printf("%d ",a[i]);
		}
	}
	printf("\ntotal Dublicate value :%d",count);

}
