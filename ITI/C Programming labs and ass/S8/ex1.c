#include<stdio.h>

int Find_Arr(int s ,int*ptr1 , int num) ;

int main()
{
	int n ,key;
	printf("plz enter size of array\n") ;
	scanf("%d" , &n) ;
	
	
	printf("plz enter number to find\n") ;
	scanf("%d" , &key) ;
	
	int arr1[n]  ;
	
	
	for(int i=0 ; i<n ; i++)
	{
		printf("plz enter element %d : \n" ,i) ;
		scanf("%d" , &arr1[i]) ;
	}
	
	
	int *ptr1 = &arr1[0] ;
	
	int index ;
	
	index = Find_Arr(n ,ptr1 , key) ;
	
	
	printf("the index : %d\n" ,index);
	
	return 0;
}

int Find_Arr(int s ,int*ptr1 , int num) 
{
	
	for(int i=0 ; i<s ; i++)
	{
		if(ptr1[i]==num)
			return i ; 
	}
	 
}