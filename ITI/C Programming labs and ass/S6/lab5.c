#include<stdio.h>

int scaler_mul(int*a , int*b) ;
int *ptr1 ;
int *ptr2 ;

int main()
{
	int x[2][2] = {{4,5}
				  {9,10}} ;
	int y[2][2] = {{1,2}
				  {6,7}} ;	
	
	*ptr1 = &x[0] ;
	*ptr2 = &y[0] ;
	
	int res = scaler_mul(ptr1,ptr2) ;
	printf("the result = %d" , res) ;
	
	return 0;
}
int scaler_mul(int*a , int*b)
{
	for(int i =0 ; i<2 ; i++)
	{	
		for(int j =0 ; j<8 ; j+=2)
		{
			
		}	
	}	
}