#include<stdio.h>

int main()
{
	int x=10 ;
	int *ptr = &x ;
	
	printf("x before change : %d\n" , x) ;
	
	*ptr = 20 ; //derefranccing 
	
	printf("x after change : %d" , *ptr) ;
	
	return 0 ;
}