#include<stdio.h>
#include<string.h>
main()
{
	//3.Count No. of digits, alphabets & and special characters.
	char a[100];
	int i,Alpha=0, specialc=0,digit=0;
	
	
	printf("Enter the value of string :");
	gets(a);
	
	int n=strlen(a);
	
	for(i=0; i<n; i++)
	{
		if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
		{
			Alpha++;
		}
		else if(a[i]>=48 && a[i]<=57)
		{
			digit++;
		}
		else
		{
			specialc++;
		}
	}
	printf("Alphabets : %d\n",Alpha);
	printf("Digit : %d\n",digit);
	printf("specialc : %d\n",specialc);

}
