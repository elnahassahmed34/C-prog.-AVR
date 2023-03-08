#include <stdio.h>
#include <stdlib.h>

int main()
{

	int Num , Bit;
	//ask the user to enter two numbers 
	printf("plz enter your number: ") ;
	scanf("%d" , &Num) ;
	printf("plz enter bit number: ") ;
	scanf("%d" , &Bit) ;
	
	//set the wanted Bit
	Num |= (1 << Bit) ;
	printf("%d" , Num) ;



	return 0 ;
	
}