#include<stdio.h>
main()
{
	//3.Write a program in C to count the frequency of each element of an array.
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
		for(j=0; j<n; j++)
		{
			if(a[i]==a[j])
			{
				a[i]='\0';
				count++;
			}
		}
	}
	printf("%d ",count);
}
