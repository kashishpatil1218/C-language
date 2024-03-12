#include<stdio.h>
#include<string.h>
main()
{
	int i,status=0;
	char gmail[32],password[32];
	printf("Enter Gmail Id :");
	gets(gmail);
	int n=strlen(gmail);

    int k=0;
    for(i=0; i<n; i++)
    {
    	if(gmail[i]==64)
    	{
    		break;
		}
		k++;
        
    }
 
     //lenght
	if(n>=10)
	{
		for(i=0; i<n; i++)
		{
			//@
			if(gmail[i]==64)
			{
				status=1;
			}
		}
		if(status==1)
		{
			status=0;
			//gmail
			for(i=k+1; i<n; i++)
			{
			    if(gmail[i]=='g')
			    {
			    	i++;
				   	if(gmail[i]=='m')
					{
			        	i++;
			        	if(gmail[i]=='a')
			            {
			    			i++;
			    			if(gmail[i]=='i')
			          		{
			    				i++;
			    				if(gmail[i]=='l')
						        {
						    		i++;
						    	    if(gmail[i]=='.')
								    {
										i++;
										if(gmail[i]=='c')
								        {
								   			i++;
							    			if(gmail[i]=='o')
								            {
									   			i++;
									   			if(gmail[i]=='m')
										        {
											   		status=1;
											   		break;
											    }
											}
										}     
						     		}
								}
					   		} 
					    }   
					}
				}
			}
		
		
			if(status==1)
			{
				
				status=0;
				//small later and special charcter
				for(i=0; i<n; i++)
				{
					if((gmail[i]>=97 && gmail[i]<=122) || (gmail[i]=='@') || (gmail[i]==32) || (gmail[i]>='0' && gmail[i]<='9'))
					{
						status=1;
					}
				}
				if(status==1)
				{
				   for(i=0; i<n; i++)
				   {
				   	 if(gmail[i]>=65 && gmail[i]<=90)
				   	 {
				   	 	status=0;
				     }
				   }
				   	if(status==1)
				   	{
				   		
					
						printf("Your Gmail is perfect !");
						
						printf("\nEnter your password!");
						gets(password);
						n=strlen(password);
						if(n>=8 && n<=32)
						{
						    for(i=0; i<n; i++)
						    {
						    	if(password[i]>='0' && password[i]<='9');
						    	{
						    		status=1;
								}
							}
							if(status==1)
							{
								status=0;
								for(i=0; i<n; i++)
								{
									//special charcter
									if((password[i]>=33 && password[i]<=47) || (password[i]>=58 && password[i]<=64))
									{
										status=1;
									}
								}
								if(status==1)
								{
									status=0;
									for(i=0; i<n; i++)
									{
										//small
										if((password[i]>=97 && password[i]<=122) || (password[i]>=65 && password[i]<=90))
										{
											status=1;
										}
									}
									if(status==1)
									{
										printf("congratulations!");
									}
									else
									{
										printf("must have samll and capital latter in your password !");
									}
								}
								else
								{
									printf("Please Enter any special charcter !");
								}
							}
							else
							{
								printf("Please enter the one digit !");
							}
						}
				
						else
						{
							printf("must have min 8 and max 32 charcter requaied!");
						}
					}
					else
					{
						printf("capital latter is not requarid");
					}
					
				}
				else
				{
					printf("Please enter the perfect syntx of gmail!");
				}
			}
			else
				{
					printf("please type proper gmail.com!");
				}
	    }
		else
		{
			printf("Please enter the @ !");
		}
	}
	else
	{
		printf("Lenght is not valid !");
	}
}
