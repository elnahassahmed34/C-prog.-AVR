#include <stdio.h>
#include <stdlib.h>
 

int main()
{

	int x[5] , temp  ;
	
	for(int i=0 ; i<5 ; i++)
	{
		printf("plz enter number %d : \n" ,i) ;
		scanf("%d" , &x[i]) ;
	}
	for(int i=0 ; i<4 ; i++)
	{	
		for(int j=0 ; j<5-i-1 ; j++)
		{
			if(x[j]>x[j+1])
			{
				temp = x[j] 	;
				x[j] = x[j+1] 	;
				x[j+1] = temp 	;
			
			}
		}	
	}
	for(int i=0 ; i<5 ; i++)
	{
		printf("%d\n" ,x[i]) ;
	}
	
	
	return 0 ;
	
}

