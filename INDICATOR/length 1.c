#include<stdio.h>
#include<string.h>
main()
{
//	/Q.1 Write a Program to find the length of a string using a Pointer.

        char name[100];
        printf("Enter name :");
        gets(name);
        int x=0;
		int i;
		for(i=0; name[i]!='\0'; i++)
		{
			x++;
		}
        int *k=&x;
        printf("%d ",*k);
        
		
		
	
}
