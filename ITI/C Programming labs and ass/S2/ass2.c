#include <stdio.h>
#include <stdlib.h>

int main()
{

	int ID = 1234 , pass = 0000 ;
	int UserID , UserPass ;
	
	//ask the user to enter his ID
	printf("plz enter your four digits ID ") ;
	scanf("%d" , &UserID) ;
	if(UserID==ID)
	{
		//Ask user to enter the password
		printf("plz enter your four digits password");
		scanf("%d" , &UserPass) ;
		
		if(UserPass==pass)
			printf("your username is Ahmed_Nahass98") ;
		else
			printf("wrong password") ;
	}
	else
		printf("wrong ID") ;
	return 0 ;
	
}