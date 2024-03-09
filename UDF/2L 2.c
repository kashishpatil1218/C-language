#include<stdio.h>
#include<string.h>
///Q.2 Write a Program to find the length of the String by passing a string 
//as an argument using UDF
int len_str(char name[])
{
	int a=strlen(name);
	return a;
}
main()
{
	char a[100];
	printf("Enter the value :");
	gets(a);
	
	 
    int n = len_str(a);
    printf("%d",n);

}
