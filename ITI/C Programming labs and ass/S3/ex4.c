#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , y , a ;
	
	printf("plz enter two numbers  \n") ;
	scanf("%d" , &x , &y) ;
	
	if(x>y)
		a=1;
	else
		a=0;
	
	switch(a)
	{
		case 1  : printf("x is bigger")  ; break;
		case 0  : printf("y is bigger"); break;
	}
		
	return 0 ;
}
