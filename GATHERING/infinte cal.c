#include<stdio.h>

int sum(int a,int b)
{
	int ans;
	ans=a+b;
	return ans;
}
int dic(int a, int b)
{
	int ans;
	ans=a-b;
	return ans;
}
int multi(int a,int b)
{
	int ans;
	ans=a*b;
	return ans;
}
int module(int a, int b)
{
	int ans;
	ans=a%b;
	return ans;
}
int divide(int a,int b)
{
	int ans;
	ans=a/b;
	return ans;
}
main()
{
	int i;
	for(i=1; i<=1; i++)
	{
		printf("press 1for +\n");
		printf("press 2for -\n");
		printf("press 3for *\n");
		printf("press 4for %\n");
		printf("press 5for /\n");
		printf("press 0for Exit\n\n");
		
		int a,b;
		printf("Enter value of a :");
		scanf("%d",&a);
		printf("Enter value of b: ");
		scanf("%d",&b);
		
		char n;
		printf("Enter value 1 2 3 4 5 0 :");
		scanf(" %c",&n);
		
		switch(n)
		{
			case '1':
				{
					int x=sum(a,b);
					printf("sum is : %d\n\n",x);
					i--;
				}
				break;
			case '2':
				{
					int x=dic(a,b);
					printf("dic is : %d\n\n",x);
					i--;
				}
				break;
			case '3':
				{
					int x=multi(a,b);
					printf("Multiple is : %d\n\n",x);
					i--;
				}
				break;
			case '4':
				{
					int x=module(a,b);
					printf("Module is : %d\n\n",x);
					i--;
				}
				break;
			case '5':
				{
					int x=divide(a,b);
					printf("Divide is : %d\n\n",x);
					i--;
				}
				break;
			case '0':
				{
					printf("Thank you so much !");
					i++;
				}
				break;
			default : printf("Exiting the code!\n\n");
		}
	}
}

