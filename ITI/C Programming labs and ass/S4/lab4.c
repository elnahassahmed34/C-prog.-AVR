#include <stdio.h>
#include <stdlib.h>

int fac(int a) ;

int main()
{

	int x , z;  
	
	printf("plz enter your number : ") ;
	scanf("%d" , &x ) ;
	
	z = fac(x);
	printf("the fac of the number is %d" , z);
	
	return 0 ;
	
}

int fac (int a) 
{
	int c=1  ;
	int b ;
	
	while (a != 1)
	{
		c = c * a ; 
		a-- ;
		b = fac(a);
	}
	
	return  c  ;
}