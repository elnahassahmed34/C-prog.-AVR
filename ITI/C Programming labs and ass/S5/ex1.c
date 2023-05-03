#include <stdio.h>
#include <stdlib.h>
 
int power(int a , int b ) ;

int main()
{

	int x , y  ;
	
	printf("plz enter number and its power : ") ;
	scanf("%d%d" , &x , &y) ;
	
	int res = power(x , y) ;
	printf("the result is : %d " ,res );
	
	
	return 0 ;
	
}


int power(int a , int b )
{
	int z = 1 ;
	if(b == 0)
	{
		return 1 ;
	}
	while(b)
	{
		z = z*a ;
		b-- ;
	}
	
	return z ;
}
	
