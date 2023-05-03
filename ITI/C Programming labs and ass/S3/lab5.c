#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , i=1;
	printf("Enter the number \n") ;
	scanf("%d" , &x) ;
	
	while(i!=(x+1))
	{
		
		printf("%d * %d = %d \n" , x , i , x*i ) ;
		i++ ;
		
	
	}
	
	
	return 0 ;
}