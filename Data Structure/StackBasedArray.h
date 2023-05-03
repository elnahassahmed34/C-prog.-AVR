/****************************************************/
/****************************************************/
/**********    Author: Ahmed Elnahass      **********/
/**********    Date  : 17/3/2022           **********/
/**********    SWC   :  Stack              **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include<stdio.h>
#include"STD_TYPES.h"

#define Max_Size 100 

typedef struct stack
{
	int array[Max_Size];
	int Top            ;
}Stack;

void Stack_voidInt(Stack *ps);

void Stack_voidPush(Stack *ps , int copy_intval);

int Stack_intIsFull(Stack *ps );

int Stack_intPop(Stack *ps);

int Stack_intIsEmpty(Stack *ps);

int Stack_intSizeOfStack(Stack *ps);

void Stack_voidreverse(Stack *ps);

void Stack_voidPrint(Stack *ps);

void Stack_voidClear(Stack *ps);



void Stack_voidInt(Stack *ps)
{
	//initilize top by -1
	ps->Top = -1 ;
	
}
void Stack_voidPush(Stack *ps , int copy_intval)
{	
	if(Stack_intIsFull(ps)==0)
	{	 
		//increment top
		ps->Top++;
		//assign value
		ps->array[ps->Top] = copy_intval ;
	}
	else
	{
		printf("The stack is full") ;
	}	
	
}
int Stack_intIsFull(Stack *ps )
{
	if(ps->Top==Max_Size-1)
		return 1 ;
	else
		return 0 ;
}
int Stack_intPop(Stack *ps)
{
	if(Stack_intIsEmpty(ps)==0)
	{	
		int TopValue = ps->array[ps->Top] ;
		ps->Top-- ;
		return TopValue ;
	}
	else
		printf("the stack is empty");
}
int Stack_intIsEmpty(Stack *ps)
{
	return(ps->Top==-1);
}
int Stack_intSizeOfStack(Stack *ps)
{
	if(Stack_intIsEmpty)
		printf("Stack is empty");
	else
		return (ps->Top+1) ;
		
}
void Stack_voidreverse(Stack *ps)
{
	while(ps->Top != -1)
	{
		int Top_value = Stack_intPop(ps);
		printf("Elements of Stack :%d\n",Top_value);
	}	
}
void Stack_voidPrint(Stack *ps)
{
	int val ;
	while(ps->Top!=-1)
	{
		val = Stack_intPop(ps);
		printf("%d\n",val);
	}
	
}
void Stack_voidClear(Stack *ps)
{
	ps->Top=-1;
}