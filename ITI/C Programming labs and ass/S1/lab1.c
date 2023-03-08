#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , y ;
	
	//ask the user to enter two numbers 
	printf("plz enter your two numbers: ") ;
	scanf("%d %d" , &x , &y) ;
	
	//Apply arthimtic Operation
	printf("the summation of the two numbers = %d \n" , x+y ) ;
	printf("the subtraction of the two numbers = %d \n" , x-y ) ;
	printf("the multipication of the two numbers = %d \n" , x*y ) ;
	printf("the division of the two numbers = %d \n" , x/y ) ;
	printf("the remaining of the two numbers = %d \n" , x%y ) ;
	
	return 0 ;
	
}