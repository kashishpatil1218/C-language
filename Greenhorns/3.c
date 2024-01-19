#include<stdio.h>
int main()
{
	float c,fahrenheit;
	
	printf("enter temperature c:");
	scanf("%f",&c);
	
	fahrenheit= (c*9/5)+32;
	
	printf("%.2f c= %.2f",c,fahrenheit);

	
}
