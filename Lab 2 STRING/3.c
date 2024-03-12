#include<stdio.h>
#include<string.h>
main()
{
	//3. remove blanck and spacse
	char a[100];
    
	printf("Enter value : ");
	gets(a);
	int n=strlen(a);
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]==32)
		{
			continue;
		}
		printf("%c",a[i]);
	}

	
}
