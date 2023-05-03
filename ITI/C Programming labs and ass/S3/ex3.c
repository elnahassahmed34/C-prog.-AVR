#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x;
	
	printf("plz eneter month num from 1 to 12 \n") ;
	scanf("%d" , &x) ;
	
	
	switch(x)
	{
		case 1  :
		case 3  :
		case 5  :
		case 7  :
		case 9  :
		case 10 :
		case 12 : printf("It is 31 days"); break ;
		case 2 	   :printf("it is 28 or 29 days")	        ; break ;
		default   : printf("it is 30 days") 				; break ; 
	}
	
	return 0 ;
}