/****************************************************/
/****************************************************/
/**********    Author: Ahmed Elnahass      **********/
/**********    Date  : 19/3/2022           **********/
/**********    SWC   :  Queue              **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include<stdio.h>
#include"STD_TYPES.h"

#define Max_Size 100 

typedef struct Queue
{
	
	int array[Max_Size];
	int Front          ;
	int Rear           ;
	
}Queue;

void Queue_voidInt(Queue *pq);

void Queue_voidEnque(Queue *pq , int copy_intval);

int Queue_intIsFull(Queue *pq );

int Queue_intDeque(Queue *pq);

int Queue_intIsEmpty(Queue *pq);

int Queue_intSizeOfQueue(Queue *pq);

void Queue_voidPrint(Queue *ps);


void Queue_voidInt(Queue *pq)
{
	//initilize Front and Rear by -1
	pq->Rear = -1  ;
	pq->Front = -1 ;
}
void Queue_voidEnque(Queue *pq , int copy_intval)
{	
	if(Queue_intIsFull(pq)==0)
	{	
		if(pq->Front == -1)
		{
			pq->Front = 0;
		}
		//increment rear
		pq->Rear++;
		//assign value
		pq->array[pq->Rear] = copy_intval ;
		//front
		pq->Front=0;
	}
	else
	{
		printf("The Queue is full") ;
	}	
	
}

int Queue_intDeque(Queue *pq)
{
	if(!Queue_intIsEmpty(pq))
	{	
		
		int TopValue = pq->array[pq->Front] ;
		pq->Front++ ;
		return TopValue ;
	}
	else
		printf("the Queue is empty");
}
int Queue_intIsEmpty(Queue *pq)
{
	return ((pq->Front==-1)&&(pq->Rear==-1));
}
int Queue_intIsFull(Queue *pq )
{
	return pq->Rear==Max_Size-1 ;
}
void Queue_voidPrint(Queue *pq)
{
	int val ;
	while(pq->Front<=pq->Rear)
	{
		val = Queue_intDeque(pq);
		printf("%d\n",val);
	}
	
}
int Queue_intSizeOfQueue(Queue *pq)
{
	for(int i =0 ; i<Max_Size ; i++)
	{
		if(pq->array[i]==pq->array[pq->Rear])
			return i ;
	}	
}