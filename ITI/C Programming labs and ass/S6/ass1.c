#include <stdio.h>
#include <stdlib.h>
 
void Bubble_Sort (int a , int* b ) ;

int main()
{
	int n ;
	printf("plz enter size of array\n") ;
	scanf("%d" , &n) ;
	
	int arr[n]   ;
	for(int i=0 ; i<n ; i++)
	{
		printf("plz enter element %d : \n" ,i) ;
		scanf("%d" , &arr[i]) ;
	}
	
	Bubble_Sort(n , arr) ;
	
	for(int i=0 ; i<n ; i++)
	{
		printf("%d\n" ,arr[i]) ;
	}
	
	
	return 0 ;
	
}
void Bubble_Sort (int a , int* ptr) 
{
	int temp;
	for(int i=0 ; i<a ; i++)
	{	
		for(int j=0 ; j<a-i-1 ; j++)
		{
			if(*ptr>*(ptr+j))
			{
				temp = *ptr 	;
				*ptr = *(ptr+j) 	;
				*(ptr+j) = temp 	;
			
			}
		}	
	}
	
	
	
	
	
	
	
}
