#include<stdio.h>
main()
{
	char n;
	printf("Enter the value of n :");
	scanf(" %c",&n);
	
	switch(n)
	{
		case 'M':printf("Monday\n");break;
		case 'T':printf("Tuesday\n");break;
		case 'W':printf("Wednesday\n");break;
		case 't':printf("Thuesday\n");break;
		case 'F':printf("Firday\n");break;
		case 's':printf("sturday\n");break;
		case 'S':printf("Sunday\n");break;
		default:printf("Invalid Input! Please try again!");
	}
}
