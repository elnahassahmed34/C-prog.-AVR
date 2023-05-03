#include<stdio.h>

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
	
	int *ptr = &arr[0];
	int sum =0 ;
	int i =0 ;
	while(i<n)
	{
		sum = sum + *(ptr+i) ;
		i++ ;
	}
	
	printf("the result = %d",sum);
	
	return 0 ;
}
