#include<stdio.h>
//Q.2 Write a Program to create a new file and write all numbers that are divisible by both 3 & 5 between 1 to 50 into that file.
main()
{
	FILE *fp;
	fp=fopen("3,5.txt","w");
	int i;
	for(i=0; i<50; i++)
	{
		if(i%3==0)
		{
			fprintf(fp,"3 : %d\n\n",i);
		}
	}
	for(i=0; i<50; i++)
	{
		if(i%5==0)
		{
			fprintf(fp,"5 : %d\n",i);
		}
	}
}
