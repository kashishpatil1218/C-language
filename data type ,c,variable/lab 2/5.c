#include<stdio.h>
main()
{
	int SI,P,R,T;
	
	printf("enter the value of P,R,T :");
	scanf("%d%d%d",&P,&R,&T);
	
	SI=P*R*T/100;
	printf("SI is %d",SI);
}
