#include<stdio.h>
#include<string.h>
main()
{
	//4 .remove all repeat charcters 
	char a[100];
	printf("Enter string :");
	gets(a);
	int n=strlen(a);
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
               	a[j]='\0';
            }
		    
		}
		if(a[i]!='\0')
		{
			printf("%c",a[i]);
		}
	
	}
	

	
}
