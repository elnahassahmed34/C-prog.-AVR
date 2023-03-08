#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x[10] , y;
	
	
	//ask the user to enter 10 numbers 
	
	for(int i = 0 ; i<10 ; i++)
	{
		printf("plz enter number %d: " , i) ;
		scanf("%d" , &x[i]) ;
	}
	//enter the num to search
	printf("Enter the number to search : ") ;
	scanf("%d" , &y) ;
	for(int i = 0 ; i<10 ; i++)
	{
		
		if(y==x[i])
		{
			printf("value is exist at element %d" , i );
			break ;
		}
		else if(y!=x[i] && i==9)
		{
			printf("number no exist") ;
		}
	}

	return 0 ;
	
}