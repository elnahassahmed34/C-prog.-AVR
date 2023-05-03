#include<stdio.h>
#include"STD_TYPES.h"

typedef struct employee
{
	u16 salary ;
	u16 bonus ;
	u16 deduction ;
}Employee ;

Employee Ahmed , Amr , Waled ;

int main()
{

	
	u16 total = 0 ;
	printf("plz enter Salary and Bonus and Deduction of ahmed\n") ;
	scanf("%d %d %d" , &Ahmed.salary , &Ahmed.bonus , &Ahmed.deduction) ;
	
	printf("plz enter Salary and Bonus and Deduction of Amr\n") ;
	scanf("%d %d %d" , &Amr.salary , &Amr.bonus , &Amr.deduction) ;
	
	
	printf("plz enter Salary and Bonus and Deduction of Waled\n") ;
	scanf("%d %d %d" , &Waled.salary , &Waled.bonus , &Waled.deduction) ;
	
	total = (Ahmed.salary + Ahmed.bonus +Amr.salary + Amr.bonus+Waled.salary + Waled.bonus ) -(Ahmed.deduction + Amr.deduction + Waled.deduction) ;
	
	printf("the total = %d" , total) ;
	
	return 0;
}
