#include<stdio.h>

void add_sub (int a , int b , int* sum , int *sub ) ;


int main()
{
	int x , y ;
	int ptr1 , ptr2 ;
	
	
	printf("plz enter two numbers : ") ;
	scanf("%d %d" , &x , &y) ;
	
	add_sub(x , y , &ptr1 , &ptr2) ;
	
	
	printf("the result of summation = %d\n",ptr1);
	printf("the result of subtraction = %d",ptr2);
}

void add_sub (int a , int b , int* sum , int *sub ) 
{

	
	*sum = a + b ;
	*sub = a - b ;
	
}