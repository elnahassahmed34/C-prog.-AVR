#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , y;
	//ask the user to enter two numbers 
	printf("plz enter your two numbers: ") ;
	scanf("%d" , &x) ;
	
	//get LSB
	y = x & 0x01 ;
	printf("%d" , y) ;



	return 0 ;
	
}