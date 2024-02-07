#include<stdio.h>
main()
{
	int i,n,j,sum=0,check=0;

	printf("1\n2");
	for(j=3; j<=50; j++)
	{
		check=0;
		for(i=2; i<j; i++)
		{
			if(j%i==0)
			{
				check=1;
				break;
			}
		}
		if(check==0)
		{
			printf("\n%d ",j);
			sum=sum+j;
		}
	}
	printf("sum is %d",sum);
}
