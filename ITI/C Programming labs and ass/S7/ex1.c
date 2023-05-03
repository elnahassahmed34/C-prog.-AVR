#include<stdio.h>

void Copy_Arr(int a ,int*ptr1 , int*ptr2) ;

int main()
{
	int n ;
	printf("plz enter size of array\n") ;
	scanf("%d" , &n) ;
	
	int arr1[n]  ;
	int arr2[n]  ;
	
	for(int i=0 ; i<n ; i++)
	{
		printf("plz enter element %d : \n" ,i) ;
		scanf("%d" , &arr1[i]) ;
	}
	
	
	int *ptr1 = &arr1[0] ;
	int *ptr2 = &arr2[0] ;
	
	Copy_Arr(n ,ptr1 , ptr2) ;
	
	for(int i=0 ; i<n ; i++)
		printf("coppied array element %d : %d\n" , i , *(ptr2+i));
	
	return 0;
}

void Copy_Arr(int a ,int*ptr1 , int*ptr2) 
{
	for(int i=0 ; i<a ; i++)
		*(ptr2+i)=*(ptr1+i) ;
	
}