#include<stdio.h>
main()
{
	int i[5]={3,7,1,8,6};
	int b= sizeof (i)/sizeof i[0];
	printf("%d",b);
}
