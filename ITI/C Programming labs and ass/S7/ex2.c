#include<stdio.h>

void Rev_Arr(int a ,int*ptr1 ) ;

int main()
{
	int n ;
	printf("plz enter size of array\n") ;
	scanf("%d" , &n) ;
	
	int arr1[n]  ;
	
	for(int i=0 ; i<n ; i++)
	{
		printf("plz enter element %d : \n" ,i) ;
		scanf("%d" , &arr1[i]) ;
	}
	
	Rev_Arr(n , arr1) ;
	
	for(int i=0 ; i<n ; i++)
		printf("reversed array element %d : %d\n" , i , arr1[i]);
	
	return 0;
}

void Rev_Arr(int a ,int*ptr1  ) 
{
	int temp[a] , j=0;
	
	
	for(int i=0 ; i<a ; i++)
		temp[i]=ptr1[i] ;
	
	for(int i=a ; i>0 ; i--)
	{	
		ptr1[a] == temp[j] ;
		j++ ;
	}
}