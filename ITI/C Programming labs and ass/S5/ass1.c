#include <stdio.h>
#include <stdlib.h>
 

int main()
{

	int x[10] , max=0 , min=1000  ;
	
	for(int i=0 ; i<10 ; i++)
	{
		printf("plz enter number %d : \n" ,i) ;
		scanf("%d" , &x[i]) ;
	}

	for(int i=0 ; i<10 ; i++)
	{
		if(x[i] > max)
			max = x[i] ;
		
		if(x[i] < min)
			min = x[i] ;

	}
	printf("max = %d\nmin = %d" , max , min) ;
	
	return 0 ;
}