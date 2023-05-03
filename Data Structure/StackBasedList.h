/****************************************************/
/****************************************************/
/**********    Author: Ahmed Elnahass      **********/
/**********    Date  : 18/3/2022           **********/
/**********    SWC   :  Stack              **********/
/**********    Version : 2.00              **********/
/****************************************************/
/****************************************************/

#include<stdio.h>
#include<stdlib.h>

#define Max_Size 100 
typedef struct stacknode
{
	int data ;
	struct stacknode* Next         ;
	
}StackNode;

typedef struct stack
{
	StackNode* Top            ;
	int Size ;
	
}Stack;

void Stack_voidInt(Stack *ps);

void Stack_voidPush(Stack *ps , int copy_intval);

void Stack_voidPop(int*value,Stack *ps);

int Stack_intIsEmpty(Stack *ps);

int Stack_intSizeOfStack(Stack *ps);

void Stack_voidPrint(Stack *ps);


void Stack_voidInt(Stack *ps)
{
	//initilize top by null
	ps->Top = NULL ;
	ps->Size =0 ;
	
}
void Stack_voidPush(Stack *ps , int copy_intval)
{	
	//create node
	StackNode* pn =(StackNode*)malloc(sizeof(StackNode));
	//assign value
	pn->data=copy_intval;
	//make next pointer to old node
	pn->Next=ps->Top;
	//make top pointer to new node
	ps->Top=pn;
	
	ps->Size++;
}

void Stack_voidPop(int * value,Stack *ps)
{
	if(!Stack_intIsEmpty(ps))
	{	
		*value = ps->Top->data;

		StackNode* temp = ps->Top;
		
		ps->Top = temp->Next;
		
		free(temp);
		
		ps->Size--;
	}
	else
		printf("the stack is empty\n");
}

int Stack_intIsEmpty(Stack *ps)
{
	return(ps->Top==NULL);
}

int Stack_intSizeOfStack(Stack *ps )
{
	return ps->Size ;
}
void Stack_voidPrint(Stack *ps)
{

	StackNode* temp ;
	temp = ps->Top;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->Next ;
	}
	
}