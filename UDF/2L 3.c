#include<stdio.h>
#include<string.h>
	//3. Fcatorial and sum using recusrion.
	int sum(int n)
	{
		if(n<=0)
		{
			return n;
		}
		else if (n>0)
		{
			return n+sum(n-1);
		
		}
		
	}
		int fac(int a)
	{
		if(a<=1)
		{
			return a;
		}
		else if (a>0)
		{
			return a*fac(a-1);
		
		}
		
	}
main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
		printf("sum is: %d\n",sum(n));
		
		int a;
	printf("Enter a:");
	scanf("%d",&a);
		printf("factoria is: %d ",fac(a));
		
}
	

