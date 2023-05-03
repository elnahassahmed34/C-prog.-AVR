/****************************************************/
/****************************************************/
/**********    Author: Ahmed Elnahass      **********/
/**********    Date  : 17/3/2022           **********/
/**********    SWC   :  Stack              **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include<stdio.h>
#include<stdlib.h>

#include"STD_TYPES.h"

int main()
{
	
	int  s ;
	
	printf("Plz enter the number elements\n");
	scanf("%d",&s);
	
	int*ptr = (int*)malloc(s*sizeof(int));
	
	for(int i=0 ; i<s ; i++)
	{	
		printf("Plz enter the element %d\n" , i);
		scanf("%d",&ptr[i]);
	}
	
	for(int i=0 ; i<s ; i++)
	{
		for(int j=0 ; j<s-i-1 ; j++)
		{
			if(ptr[j]>ptr[j+1])
			{	
				int temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1]=temp ;
			}
		}
	}	
	
	for(int i=0 ; i<s ; i++)
	{	
		printf("%d\n",ptr[i]);
	}
	
	return 0;
}
