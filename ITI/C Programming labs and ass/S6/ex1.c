#include<stdio.h>

void swap (int*a , int*b) ;

int main()
{
	int x  , y ;
	int *ptr1=&x , *ptr2=&y ;
	
	printf("plz enter two numbers : ") ;
	scanf("%d %d" , &x , &y) ;
	
	printf("x and y before swap : %d %d\n" , x ,y) ;
	
	swap(ptr1 , ptr2); 
	
	printf("x and y after change : %d %d" , x , y) ;
}

void swap (int*a , int*b)
{
	int temp ;
	temp = *a ;
	*a = *b ;
	*b = temp ;
	 
}