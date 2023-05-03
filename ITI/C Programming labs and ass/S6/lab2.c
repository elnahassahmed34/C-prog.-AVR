#include<stdio.h>

int add (int*a , int*b) ;

int main()
{
	int x , y ;
	int res ;
	
	printf("plz enter two numbers : ") ;
	scanf("%d %d" , &x , &y) ;
	
	res = add(&x ,&y) ;
	
	printf("the result = %d",res);
}

int add (int*a , int*b)
{
	int c ;
	
	c = *a + *b ;
	
	return c ;
}