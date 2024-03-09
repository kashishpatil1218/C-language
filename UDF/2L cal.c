#include<stdio.h>
//1.WAP to create infinite calc using UDF, switch case and Loop.
int sum(int a,int b)
{
	int ans=a+b;
	printf("sum is %d :",ans);
}
int dic(int a,int b)
{
	int ans=a-b;
	printf("dic is %d :",ans);
}
int multi(int a,int b)
{
	int ans=a*b;
	printf("multi is %d :",ans);
}
int div(int a,int b)
{
	int ans=a/b;
	printf("div is %d :",ans);
}
int module(int a,int b)
{
	int ans=a%b;
	printf("module is %d :",ans);
}
void value()
{
    int a,b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    
    char n;
    printf("Enter the sign:");
    scanf(" %c",&n);

switch(n)
{
	case'+':sum(a,b);break;
	case'-':dic(a,b);break;
	case'*':multi(a,b);break;
	case'/':div(a,b);break;
	case'%':module(a,b);break;
	default : printf("Enter only mathmatical sing:");
}
printf("\n\n");
value();
}
main()
{
	value();
}







