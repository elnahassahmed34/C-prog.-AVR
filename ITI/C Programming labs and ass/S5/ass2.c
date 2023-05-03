#include <stdio.h>
#include <stdlib.h>
 

int main()
{
	int max=0 , min=1000 , passed=0 , failed=0 ,sum=0 , avg;
	
	int x[10] = {50 , 60 , 80 , 70 , 85 , 70 , 90 , 95 , 65 , 75} ;
	int y[10] = {70 , 80 , 90 , 50 , 55 , 40 , 30 , 55 , 65 , 75} ;
	int z[10] = {20 , 60 , 60 , 80 , 35 , 10 , 60 , 45 , 65 , 75} ;
	

	for(int i=0 ; i<10 ; i++)
	{
		if(x[i] >= 50)
			passed+=1 ;
		else
			failed+=1 ;
		
		if(x[i] > max)
			max = x[i] ;
	
		if(x[i] < min)
			min = x[i] ;
		
		sum += x[i] ;
		
	}
	
	avg = sum / 10 ; 
	
	printf("passed students in class x = %d\n" ,  passed);
	printf("failed students in class x = %d\n" ,  failed);
		
	printf("max of class x = %d\n" , max) ;
	printf("min of class x = %d\n" , min) ;
	
	printf("the summation = %d \nthe average = %d\n",sum , avg) ;
	
	passed = failed = sum = max = 0 ;
	min = 1000 ;
		for(int i=0 ; i<10 ; i++)
	{
		if(y[i] >= 50)
			passed+=1 ;
		else
			failed+=1 ;
		
		if(y[i] > max)
			max = x[i] ;
	
		if(y[i] < min)
			min = x[i] ;
		
		sum += y[i] ;
		
	}
	
	avg = sum / 10 ; 
	
	printf("passed students in class y = %d\n" ,  passed);
	printf("failed students in class y = %d\n" ,  failed);
		
	printf("max of class y = %d\n" , max) ;
	printf("min of class y = %d\n" , min) ;
	
	printf("the summation = %d \nthe average = %d\n",sum , avg) ;

	passed = failed = sum = max =  0 ;
	min = 1000 ;
	
	for(int i=0 ; i<10 ; i++)
	{
		if(z[i] >= 50)
			passed+=1 ;
		else
			failed+=1 ;
		
		if(z[i] > max)
			max = x[i] ;
	
		if(z[i] < min)
			min = x[i] ;
		
		sum += z[i] ;
		
	}
	
	avg = sum / 10 ; 
	
	printf("passed students in class z = %d\n" ,  passed);
	printf("failed students in class z = %d\n" ,  failed);
		
	printf("max of class z = %d \n" , max) ;
	printf("min of class z = %d \n" , min) ;
	
	printf("the summation = %d \nthe average = %d \n",sum , avg) ;
	
	return 0 ;
}