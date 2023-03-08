#include <stdio.h>
#include <stdlib.h>

int main()
{
	float total=0 , avg , per ;
	float x[5];
	//ask the user to enter marks of five students
	printf("plz enter marks of five students : ") ;
	
	for(int i =0 ; i<5 ; i++)
	{	
		scanf("%f" , &x[i]);
		total=total + x[i] ;
	}
	avg = total / 5 ;
	per = total / 500 * 100 ;
	
	
	printf("total marks = %.2f\n" , total) ;
	printf("average marks = %.2f\n" , avg) ;
	printf("percentage marks = %.2f\n" , per) ;
}