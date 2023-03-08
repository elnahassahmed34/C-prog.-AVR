#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , y ;
	
	//ask the user to enter two numbers 
	printf("plz enter your two numbers: ") ;
	scanf("%d %d" , &x , &y) ;
	
	//Apply Operations
	printf("a + b = %d \n" , x+y ) ;
	printf("a - b = %d \n" , x-y ) ;
	printf("a & b = %d \n" , x&y ) ;
	printf("a | b = %d \n" , x|y ) ;
	printf("a ^ b = %d \n" , x^y ) ;
	
	
	
	return 0 ;
	
}