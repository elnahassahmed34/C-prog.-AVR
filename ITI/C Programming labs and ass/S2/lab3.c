#include <stdio.h>
#include <stdlib.h>

int main()
{
	//first method
	int x ;
	//ask the user to enter two numbers 
	printf("plz enter your number: ") ;
	scanf("%d" , &x) ;
	
	if(x%2==0)
		printf("the number is even") ;
	else
		printf("the number is odd");
	
	return 0 ;
	
	//seoncd method
	int x ;
	//ask the user to enter two numbers 
	printf("plz enter your number: ") ;
	scanf("%d" , &x) ;
	
	if(x&1==1)
		printf("the number is odd") ;
	else
		printf("the number is even");
	
	return 0 ;
	
	//third method
	int x ;
	//ask the user to enter two numbers 
	printf("plz enter your number: ") ;
	scanf("%d" , &x) ;
	
	if((x/2)*2==x)
		printf("the number is even") ;
	else
		printf("the number is odd");
	
	return 0 ;
	
	
}