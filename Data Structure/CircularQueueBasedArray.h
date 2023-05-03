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

void Queue_voidClear(Queue *ps);



void Queue_voidInt(Queue *pq)
{
	//initilize Front and Rear by -1
	pq->Rear = -1  ;
	pq->Front = -1 ;
}
void Queue_voidEnque(Queue *pq , int copy_intval)
{	
	if(Queue_intIsEmpty(pq))
	{	
		pq->Front = pq->Rear = 0;
	}
	else if(Queue_intIsFull(pq))
	{
		printf("The Queue is full") ;
	}	
	else
		pq->Rear = (pq->Rear + 1)%Max_Size;
	
	pq->array[pq->Rear]=copy_intval;
}

int Queue_intDeque(Queue *pq)
{
	int TopValue = pq->array[pq->Front] ;
	
	if(Queue_intIsEmpty(pq))
	{	
		printf("the Queue is empty");
		return 0
	}
	else if (pq->Front==pq->Rear)
	{
		Queue_voidClear(pq);
		return TopValue ;
	}
	else
	{
		return TopValue ;
		pq->Front = (pq->Front + 1)%Max_Size;
	}	
		
}
int Queue_intIsEmpty(Queue *pq)
{
	return ((pq->Front==-1)&&(pq->Rear==-1));
}
int Queue_intIsFull(Queue *pq )
{
	return ((pq->Rear+1) % Max_Size)==(pq->Front) ;
}

void Queue_voidClear(Queue *ps)
{
	pq->Rear = -1  ;
	pq->Front = -1 ;
}