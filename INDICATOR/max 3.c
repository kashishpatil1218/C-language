#include<stdio.h>
main()
{
//	/wap to find maximum from array using pointer.
   int a,b;
   printf("Enter value of a,b :");
   scanf("%d%d",&a,&b);
   
   int *c=&a;
   int *d=&b;
   if(*c>*d)
   {
   	printf("max is a",*c);
   }
   else
   {
   	printf("max is b",*d);
   }
}
