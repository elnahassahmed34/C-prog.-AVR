#include <stdio.h>
#include <stdlib.h>

int main()
{

	int WorkRate = 40 ;
	int User_WorkRate , Salary ;
	
	
	//ask the user to enter his work rate
	printf("plz enter your work rate : ") ;
	scanf("%d" , &User_WorkRate) ;
	
	//Calc the salary
	if(User_WorkRate >= WorkRate)
	{
		printf("Your salary : %d" , User_WorkRate*50) ;
	}
	else
	{
		int s = ((User_WorkRate*50)-(User_WorkRate*50*0.1));
		printf("your salary : %d" , s) ;
	}
	
	return 0 ;
	
}