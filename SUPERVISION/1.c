#include<stdio.h>

main()
{
	FILE *fp;
	fp=fopen("odd even.txt","w");
	int i;
	for(i=50; i<=70; i++)
	{
		if(i%2==0)
		{
			fprintf(fp,"3 : %d\n\n",i);
		}
	}
	for(i=50; i<=70; i++)
	{
		if(i%2==1)
		{
			fprintf(fp,"5 : %d\n",i);
		}
	}
}
