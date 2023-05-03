#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x[10] ;
	int sum=0 ;
	float avg ;
	
	for(int i = 0 ; i<10 ; i++)
	{	
		printf("plz enter number %d : " , i) ;
		scanf("%d" , &x[i]) ;
		sum = sum + x[i] ;
	}
	
	avg = sum / 10 ;
	
	printf("sum of 10 nums = %d \n" , sum) ;
	printf("average of 10 nums = %f" , avg) ;
	
	return 0 ;
	
}