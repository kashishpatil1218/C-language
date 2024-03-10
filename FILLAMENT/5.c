#include<string.h>
#include<string.h>
main()
{
	//4 .WAP check string is numeric or not.
	char a[100];
	int i,digit=0;
	
	printf("ENter the value :");
	gets(a);
	int n=strlen(a);
	
	for(i=0; i<n; i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			digit++;
		}
	}
	if(digit==1)
	{
		printf("value is numeric");
	}
	else
	{
		printf("value not  is numeric ");
	}
}
