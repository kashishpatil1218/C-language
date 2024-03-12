#include<stdio.h>
#include<string.h>
main()
{
	//palidrom or not ?
	char a[100],b[100];
	printf("Enter the string :");
	gets(a);
	int i,j=0,k=0;
	int count=0;
	for(i=0; a[i]!='\0'; i++)
	{
		k++;
	}
	for(i=k-1; i>=0; i--)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0; i<k; i++)
	{
		if(a[i]!=b[i])
		{
			count=1;
			break; 	
		}
	}
	if(count==1)
	{
		printf("string is not palidrome!");
	}
	else
	{
		printf("string is palidrome!");
	}
}
