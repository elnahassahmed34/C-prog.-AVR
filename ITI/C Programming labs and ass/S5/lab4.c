#include <stdio.h>
#include <stdlib.h>
 

int main()
{

	int x[10] , z ,total=0 ;
	
	for(int i=0 ; i<10 ; i++)
	{
		printf("plz enter number %d : \n" ,i) ;
		scanf("%d" , &x[i]) ;
	}
	printf("plz enter the num you want to search : \n");
	scanf("%d" , &z ) ;
	for(int i=0 ; i<10 ; i++)
	{
		if(x[i] == z)
		{
			total+=1 ;
		}

	}
	
	if(total)
		printf("num exist and repeated %d times",total);
	else 
		printf("num not exist");
	
	return 0 ;
}