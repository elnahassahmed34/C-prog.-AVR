#include <stdio.h>
#include <stdlib.h>
 

int main()
{

	int x[10]  ;
	
	for(int i=0 ; i<10 ; i++)
	{
		printf("plz enter number %d : \n" ,i) ;
		scanf("%d" , &x[i]) ;
	}
	for(int i=9 ; i>=0 ; i--)
	{
		printf("%d" ,x[i]) ;
	}
	
	
	return 0 ;
	
}

