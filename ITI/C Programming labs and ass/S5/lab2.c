#include <stdio.h>
#include <stdlib.h>
 

int main()
{

	int x[10] , sum=0 , avg;
	
	for(int i=0 ; i<10 ; i++)
	{
		printf("plz enter number %d : \n" ,i) ;
		scanf("%d" , &x[i]) ;
		sum += x[i] ;
	}
	for(int i=9 ; i>=0 ; i--)
	{
		printf("%d\n" ,x[i]) ;
	}
	
	avg = sum / 10 ;
	printf("the summation = %d \nthe average = %d",sum , avg) ;
	
	return 0 ;
	
}

