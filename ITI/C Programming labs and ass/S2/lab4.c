#include <stdio.h>
#include <stdlib.h>

int main()
{

	int grade ;
	//ask the user to enter the grade 
	printf("plz enter your grade : ") ;
	scanf("%d" , &grade) ;
	
	if((0 <= grade) && (grade < 50))
		printf("yout rating is failed") ;
	else if((50 <= grade) && (grade < 65))
		printf("yout rating is Normal") ;
	else if((65 <= grade) && (grade < 75))
		printf("yout rating is Good") ;
	else if((75 <= grade) && (grade < 85))
		printf("yout rating is Very Good") ;
	else if ((85 <= grade) && (grade < 100))
		printf("yout rating is Exellent") ;
	else
		printf("Wrong degree") ;
	return 0 ;
	
}