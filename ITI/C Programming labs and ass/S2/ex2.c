#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	//first method
	
	int x , y ;
	//ask the user to enter two numbers 
	printf("plz enter your two numbers: ") ;
	scanf("%d%d" , &x , &y) ;
	
	x ^= y ;
	y ^= x ;
	x ^= y ;
	//swapping
	printf("%d\n%d" ,x,y) ;
	
	return 0 ;
	
	//second method
	
	
	int x , y  ,z ;
	//ask the user to enter two numbers 
	printf("plz enter your two numbers: ") ;
	scanf("%d%d" , &x , &y) ;

	//swapping
	z = x+y ;
	y = x ;
	x = z-x ;
	
	
	printf("%d %d" , x, y) ;
	
	
	
	//third method
		
	int x , y ;
	//ask the user to enter two numbers 
	printf("plz enter your two numbers: ") ;
	scanf("%d%d" , &x , &y) ;
	
	//swapping
	int temp = x ;
	x = y ;
	y = temp ;
	

	printf("%d %d" , x , y) ;
	
}