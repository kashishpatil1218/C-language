#include<stdio.h>
#include<string.h>
///frequancy of each element
main()
{
	char a[100];
	printf("Enter the string :");
	gets(a);
	int n=strlen(a);
	int i,j,k=1;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				k++;
				a[j]=0;
			}
		}
	
		if(a[i]!=0)
		{
			printf("%c : %d\n",a[i],k);
		}
		k=1;
    }
	
}



