#include<stdio.h>
#include<string.h>
//1. WAP check string is palindrome or not.
main()
{
	char a[100],b[100];
	printf("Enter value of String :");
    gets(a);
    int i,j=0,len=0,
    count=0;
    
    for(i=0; a[i]!='\0'; i++)
    {
    	len++;
	}
	for(i=len-1; i>=0; i--)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<len;i++)
    {
        if(a[i]!=b[i])
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("This value is not palindrom ");
    }
    else
    {
        printf("This value is palindrom  ");
    }
}
