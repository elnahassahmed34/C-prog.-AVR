#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , y  ;
	char op ;
	printf("plz enter the operation \n") ;
	scanf("%c" , &op) ;
	printf("plz enter two numbers  \n") ;
	scanf("%d%d" , &x , &y) ;
	
	
	
	switch(op)
	{
		case '+'  : printf("the res = %d", x+y)  ; break;
		case '-'  : printf("the res = %d", x-y)  ; break;
		case '*'  : printf("the res = %d", x*y)  ; break;
		case '/'  : printf("the res = %d", x/y)  ; break;
	}
		
	return 0 ;
}
