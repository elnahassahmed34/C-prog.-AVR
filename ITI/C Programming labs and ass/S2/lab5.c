#include <stdio.h>
#include <stdlib.h>

int main()
{

	int UserID ;
	
	//ask the user to enter his ID
	printf("plz enter your four digits ID ") ;
	scanf("%d" , &UserID) ;
	
	//guess the name
	switch(UserID)
	{
		case    1234 : printf("Welcome Ahmed")   ; break ;
		case    5678 : printf("Welcome Youssef") ; break ;
		case    1145 : printf("Welcome Mina")    ; break ;
		default      : printf("Wrong ID")        ; break ;
	}
	
	return 0 ;
	
}