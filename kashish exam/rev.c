#include<stdio.h>
main()
{
	char str[10];
	int n;
	printf("enter n :");
	scanf("%d",&n);
	int a[n];
	int i,rev=0;

	for(i=0; i<n; i++)
	{
		printf("Enter string :");
		scanf("%d",&a[i]);
	}
	for(i=n-1; i<n; i++)
	{
		printf("%d",a[i]);
    } 
}