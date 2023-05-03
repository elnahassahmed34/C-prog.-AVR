/****************************************************/
/****************************************************/
/**********    Author: Ahmed Elnahass      **********/
/**********    Date  : 18/3/2022           **********/
/**********    SWC   :  Queue              **********/
/**********    Version : 2.00              **********/
/****************************************************/
/****************************************************/

#include<stdio.h>
#include<stdlib.h>

 
typedef struct queuenode
{
	int Data ;
	struct queuenode* Next         ;
	
}QueueNode;

typedef struct 
{
	QueueNode* Front  ;
	QueueNode* Rear   ;
	int Size ;
	
}Queue;

void Queue_voidInt(Queue *pq);

void Queue_voidEnque(Queue *pq , int copy_intval);

void Queue_voidDeque(int*value,Queue *pq);

int Queue_intIsEmpty(Queue *pq);

int Queue_intSizeOfQueue(Queue *pq);

void Queue_voidPrint(Queue *pq);


void Queue_voidInt(Queue *pq)
{
	//initilize Front and Rear by Null 
	pq->Front = NULL ;
	pq->Rear = NULL ;
	pq->Size=0;
	
}
void Queue_voidEnque(Queue *pq , int copy_intval)
{	
	//create node
	QueueNode* pn =(QueueNode*)malloc(sizeof(QueueNode));
	//assign value
	pn->Data=copy_intval;
	//make next pointer null
	pn->Next=NULL;
	//make top pointer to new node
	if(Queue_intIsEmpty)
	{
		pq->Front=pn;
	}
	else
		pq->Rear->Next=pn;
	
	pq->Rear = pn ;
	
	pq->Size++ ;
}

void Queue_voidDeque(int * value,Queue *pq)
{
	if(!Queue_intIsEmpty(pq))
	{	
		*value = pq->Front->Data;

		QueueNode* temp = pq->Front;
		
		pq->Front = pq->Front->Next;
		
		free(temp);
		
		if(Queue_intIsEmpty)
			pq->Rear=NULL;
		
		pq->Size-- ;
	}
	else
		printf("Queue is empty");
}

int Queue_intIsEmpty(Queue *pq)
{
	return((pq->Front==NULL)&&(pq->Rear==NULL));
}

int Queue_intSizeOfQueue(Queue *pq )
{
	return pq->Size ;
}
void Queue_voidPrint(Queue *pq)
{
	int val ;
	while((pq->Front)<=(pq->Rear))
	{
		Queue_voidDeque(pq,&val);
		printf("%d\n",val);
	}
}