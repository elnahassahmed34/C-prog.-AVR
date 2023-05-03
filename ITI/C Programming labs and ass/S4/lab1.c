#include <stdio.h>
#include <stdlib.h>

int getmax (int a , int b) ;

int main()
{

	int x , y , z ;
	
	printf("plz enter two numbers : ") ;
	scanf("%d%d" , &x , &y) ;
	
	z = getmax(x,y);
	printf("the greatest number is %d" , z);
	
	return 0 ;
	
}

int getmax (int a , int b) 
{
	if(a>b)
		return a ;
	else
		return b ;
	
}