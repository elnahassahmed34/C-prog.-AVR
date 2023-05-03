#include <stdio.h>
#include <stdlib.h>

void print (int a , int b) ;

int main()
{

	int x , y ;
	
	printf("plz enter number of rows and coulms : ") ;
	scanf("%d%d" , &x , &y) ;
	
	print(x,y);
	
	
	return 0 ;
	
}

void print (int a , int b) 
{
	int i , k ,n ;
	for(i=0 ; i<a ; i++)
	{
		for(k=0 ; k<b ; k++)
		{
			n++ ;
			printf("%d " , n);
			
		}
		printf("\n");
	}
	
	
}