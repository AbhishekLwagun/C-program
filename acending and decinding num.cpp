#include<stdio.h>
#include<conio.h> 
   main()
   {
   	int a,b,c;
   	printf("Enter the numbers: ");
   	scanf("%d%d%d",&a,&b,&c);
   	if((a>=b)&&(a>=c))
   	{
   		if(b>=c)
   		{
   			printf("\nDecending order is: %d%d%d",a,b,c);
   			printf("\nAscending order is: %d%d%d",c,b,a);
   		}
   			
   				else 
   					printf("\nDecending order is: %d%d%d",a,c,b);
   		printf("\Ascending order is: %d%d%d",b,c,a);
   		
			   }
		
	
	else if((b>=a)&&(b>=c))
	{
		if(c>=a)
		{
			printf("\nDecending order is:%d%d%d",b,c,a);
			printf("\nAscending order is: %d%d%d",a,c,b);
		}
				else
				printf("\nDecending order is: %d%d%d",b,a,c);
				printf("\nAscending order is: %d%d%d",c,a,b);
				
			}
			
		
		
	}
	
			   
   			


