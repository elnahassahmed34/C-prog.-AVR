#include <stdio.h>
#include <stdlib.h>

int Add (int a , int b) ;
int Sub (int a , int b) ;
int Mul (int a , int b) ;
int Div (int a , int b) ;
int And (int a , int b) ;
int Or (int a , int b) ;
int Xor (int a , int b) ;
int Rem (int a , int b) ;
int Not (int a) ;
int Inc (int a) ;
int Dic (int a) ;

int main()
{
	int  op ;
	int  x , y ;
	
	printf("plz enter operation number : ") ;
	scanf("%d" , &op) ;
	if(op<9)
	{
		printf("plz enter two numbers : ") ;
		scanf("%d%d" , &x , &y) ;
	}
	else
	{
		printf("plz enter your number : ") ;
		scanf("%d" , &x) ;
	}
	int res ;
	switch (op) 
	{
		case 0 : res = Add(x,y) ; break ;
		case 1 : res = Sub(x,y) ; break ;
		case 2 : res = Mul(x,y) ; break ;
		case 3 : res = Div(x,y) ; break ;
		case 4 : res = And(x,y) ; break ;
		case 5 : res = Or(x,y) ; break ;
		case 6 : res = Xor(x,y) ; break ;
		case 7 : res = Rem(x,y) ; break ;
		case 8 : res = Not(x) ; break ;
		case 9 : res = Inc(x) ; break ;
		case 10 : res = Dic(x) ; break ;
	}
	
	printf("result : %d" , res) ;
	
	return 0 ;
	
}
int Add (int a , int b) 
{
	return a + b ;
}
int Sub (int a , int b) 
{
	return abs(a - b) ;
}
int Mul (int a , int b) 
{
	return a * b ;
}
int Div (int a , int b) 
{
	return a / b ;
}
int And (int a , int b) 
{
	return a & b ;
}
int Or (int a , int b) 
{
	return a | b ;
}
int Xor (int a , int b) 
{
	return a ^ b ;
}
int Rem (int a , int b) 
{
	return a % b ;
}
int Not (int a) 
{
	return ~a  ;
}
int Inc (int a) 
{
	return ++a ;
}
int Dic (int a) 
{
	return --a ;
}

