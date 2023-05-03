#include<stdio.h>
#include"STD_TYPES.h"

typedef struct 
{
	u8 real ;
	u8 img ;
}C_num ;

C_num Sum_f (C_num * n1 , C_num * n2);

int main()
{

	C_num N1 ;
	C_num N2 ;
	
	printf("plz enter real and imaginary num for 1st num\n") ;
	scanf("%d%d" , &N1.real , &N1.img ) ;
	
	printf("plz enter real and imaginary num for 2nd num\n") ;
	scanf("%d%d" , &N2.real , &N2.img ) ;
	
	C_num res = Sum_f(&N1 ,&N2) ;
	
	printf("the res = %d +%d i", res.real , res.img) ;
	
	return 0;
}

C_num Sum_f (C_num* n1 , C_num* n2)
{
	C_num res ;
	res.real = n1->real + n2->real ;
	res.img  = n1->img  + n2->img  ;
	
	return res ;
}



