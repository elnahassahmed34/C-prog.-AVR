#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , y ;
	//ask the user to enter two numbers 
	printf("plz enter your two numbers: ") ;
	scanf("%d%d" , &x , &y) ;
	
	if(x==y)
		printf("the two numbers are equal = %d" , x) ;
	else if (x>y)
		printf("x is bigger and = %d" , x);
	else if
		printf("y is bigger and = %d" , y) ;
	else
		printf("wrong i/p");
	
	return 0 ;
	
}