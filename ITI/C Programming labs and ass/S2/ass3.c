#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , y , z ;
	
	//ask the user to enter two numbers 
	printf("plz enter your three numbers: ") ;
	scanf("%d %d %d" , &x , &y , &z) ;
	
	if(x>y && x>z)
		printf("max num is %d: " , x);
	else if(y>x && y>z)    
		printf("max num is %d: " , y);
	else                   
		printf("max num is %d: " , z);

	return 0 ;
	
}