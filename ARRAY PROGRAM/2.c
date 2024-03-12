#include<stdio.h>
main()
{
	//2. Write a C program to find the second largest number in the array.
     
    int a[]={10,200,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    
    int lar=a[0];
    int seclar=a[1];
    int i;
    for(i=0; i<n; i++)
    {
    	if(a[i]>lar)
    	{
    		seclar=lar;
    		lar=a[i];
		}
		else if(a[i]>seclar && a[i]!=lar)
		{
			seclar=a[i];
		}
	}
 	printf("%d",seclar);
}
