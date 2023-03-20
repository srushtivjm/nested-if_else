#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("Enter vslue of b=");
	scanf("%d",&b);
	printf("Enter vslue of c=");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
		 printf("A is minimum.");
    	}
	
	    else
	    {
	        printf("C is minimum.");
	    }
	}
	else
	{
		if(b<c)
		{
			printf("B is minimum.");
		}
		else
		{
			printf("C is minimum.");
		}
	}    
}
