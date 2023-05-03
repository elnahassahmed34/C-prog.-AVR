#include <stdio.h>
#include <stdlib.h>

void swap () ;

int x=10 , y=20 ;

int main()
{
	printf("x before swap = %d \n" , x);
	printf("y before swap = %d \n" , y);

	swap();
	
	printf("x after swap = %d \n" , x);
	printf("y after`swap = %d \n" , y);

	return 0 ;
	
}

void swap () 
{
	int temp ;
	temp = x ;
	x = y ;
	y = temp ;
	
}