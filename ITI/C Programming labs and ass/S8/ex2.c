#include<stdio.h>

int dif_Arr(int s ,int*ptr1 ,int*max,int*min ) ;

int main()
{
	int n , max=0 , min=1000 ;
	printf("plz enter size of array\n") ;
	scanf("%d" , &n) ;
	
	
	int arr1[n]  ;
	
	
	for(int i=0 ; i<n ; i++)
	{
		printf("plz enter element %d : \n" ,i) ;
		scanf("%d" , &arr1[i]) ;
	}
	
	
	int *ptr1 = &arr1[0] ;
	int *ptr2 = &max ;
	int *ptr3 = &min ;
	
	dif_Arr(n ,ptr1 ,ptr2 ,ptr3) ;
	
	int dif = max - min ;
	
	printf("the dif : %d\n" ,dif);
	
	return 0;
}

int dif_Arr(int s ,int*ptr1 ,int*max,int*min ) 
{
	
	for(int i=0 ; i<s ; i++)
	{
		if(ptr1[i]>max)
			*max = ptr1[i];
			
		if(ptr1[i]<min)
			*min = ptr1[i];
	}
	 
}