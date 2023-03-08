#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , y ;
	
	//ask the user to enter two numbers 
	printf("plz enter your two numbers: ") ;
	scanf("%d %d" , &x , &y) ;
	
	//Apply AND OR Operation
	printf("the AND OP of the two numbers = %d \n" , x&y ) ;
	printf("the OR of the two numbers = %d \n" , x|y ) ;
	printf("the XOR of the two numbers = %d \n" , x^y ) ;
	printf("the NOT of the first number = %d \n" , ~x ) ;
	printf("the NOT of the second number = %d \n" , ~y ) ;
	printf("shift left of the first number by 1 = %d \n" , x<<1 ) ;
	printf("shift left of the second number by 1 = %d \n" , y<<1 ) ;
	
	
	return 0 ;
	
}