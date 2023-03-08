#include <stdio.h>
#include <stdlib.h>

int main()
{

	int Num , Bit ,z;
	//ask the user to enter two numbers 
	printf("plz enter your number: ") ;
	scanf("%d" , &Num) ;
	printf("plz enter bit number: ") ;
	scanf("%d" , &Bit) ;
	
	//set the wanted Bit
	z = ((Num >> Bit) & 0x01) ;
	printf("%d" , z) ;



	return 0 ;
	
}