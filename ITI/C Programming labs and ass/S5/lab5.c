#include <stdio.h>
#include <stdlib.h>
 

int main()
{

	int key , arr_size ,temp ;
	
	//ask user to enter size of array
	printf("plz enter array size");
	scanf("%d" , &arr_size) ;
	
	int arr[arr_size] ;
	
	//scanning array elements
	for(int i=0 ; i<arr_size ; i++)
	{
		printf("plz enter number %d : \n" ,i) ;
		scanf("%d" , &arr[i]) ;
	}
	
	//enter the number you want to search
	printf("plz enter the num you want to search : \n");
	scanf("%d" , &key ) ;
	
	//bubble sort for the array
	for(int i=0 ; i<arr_size-1 ; i++)
	{	
		for(int j=0 ; j<5-i-1 ; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j] 	;
				arr[j] = arr[j+1] 	;
				arr[j+1] = temp 	;
			
			}
		}	
	}
	
	//binary search 
	int start=0 , end=arr_size-1 , mid  , flag = 1;
	while(start<=end)
	{
		mid = start +(end - start)/2 ;
		if(arr[mid] == key)
		{	
			flag = 0 ;
			break ;
		}	
		else if (arr[mid] > key)
			start = mid + 1 ;
		else if (arr[mid] < key)
			end = mid-1 ;
	}	
	if(flag==1)
		printf("num not found");
	else
		printf("the num index is : %d " , mid) ;
	
	return 0 ;
}