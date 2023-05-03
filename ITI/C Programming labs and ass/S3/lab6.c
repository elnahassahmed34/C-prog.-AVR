#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , i ;
	printf("Enter the number \n") ;
	scanf("%d" , &x) ;
	i=x ;
	do
	{
		i--;
		x = x*i;
		
		
	
	}while(i!=1);
	
	printf("fac = %d" , x);
	
	return 0 ;
}