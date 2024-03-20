//Write a Program to read content from one file & write it to another file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	FILE *op;
	
	fp=fopen("file 1.txt","r");
	op=fopen("file.txt","w");
	int i;
	char ch;
	
	ch=fgetc(fp);
  	while(ch!=EOF)
  	{
  		fputc(ch,op);
  		ch=fgetc(fp);
	  }

	
	return 0;
}
