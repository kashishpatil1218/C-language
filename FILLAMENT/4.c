#include<stdio.h>
#include<string.h>
main()
{
	//4. Copy one string into another - strcpy()
	char a[50],b[50];
	printf("Enter value of a :");
	gets(a);
	strcpy(b,a);
	puts(b);
}
