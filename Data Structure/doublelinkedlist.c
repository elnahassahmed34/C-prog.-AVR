/****************************************************/
/****************************************************/
/**********    Author: Ahmed Elnahass      **********/
/**********    Date  : 18/3/2022           **********/
/**********    SWC   :  List              **********/
/**********    Version : 2.00              **********/
/****************************************************/
/****************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct Listnode
{
	int Data ;
	struct Listnode* Next    ;
	struct Listnode* Prev    ;
	
}ListNode;

typedef struct List
{
	ListNode* Head          ;
	int Size ;
	
}List;

void List_voidInt(List *pl);

void List_voidInsertFirst(List *pl , int copy_intval);

void List_voidInsertPos(List *pl , int copy_intval ,int pos);

void List_voidReplace(List *pl , int copy_intval ,int pos) ;

void List_voidDelete(List *pl ,int pos ,int*value);

void List_voidRetrieve(List *pl , int * value ,int pos);

int List_intIsEmpty(List *pl);

int List_intSizeOfList(List *pl);

void List_voidPrint(List *pl);
/*
int main()
{
	List l1 ;
	int value , Deleted_Data ;
	
	List_voidInt(&l1);
	List_voidInsertFirst(&l1,5);
	List_voidInsertFirst(&l1,6);
	List_voidInsertFirst(&l1,7);
	
	List_voidInsertPos(&l1,7,1);
	
	List_voidRetrieve(&l1,&value,1);
	printf("%d\n",value);
		
	List_voidRetrieve(&l1,&value,2);
	printf("%d\n",value);
	
	List_voidReplace(&l1,99,1);
	
	//List_voidDelete(&l1 , 1 ,&Deleted_Data) ;
	
	int Size = List_intSizeOfList(&l1);
	printf("%d\n",Size);	
	
	List_voidPrint(&l1);
	
	return 0 ;
}

*/


void List_voidInt(List *pl)
{
	//initilize Head by null
	pl->Head = NULL ;
	pl->Prev = NULL ;
	pl->Size =0 ;
	
}
void List_voidInsertFirst(List *pl , int copy_intval)
{	
	//create node
	ListNode* pn =(ListNode*)malloc(sizeof(ListNode));
	//assign value
	pn->Data=copy_intval;
	//make next pointer 
	pn->Next=pl->Head;
	pn->Prev=pl->Head;
	//make head points to node
	pl->Head = pn ;
	//inc size
	pl->Size++;
}
void List_voidInsertPos(List *pl , int copy_intval ,int pos)
{	
	//create node
	ListNode* pn =(ListNode*)malloc(sizeof(ListNode));
	//assign value
	pn->Data=copy_intval;
	//temporary
	ListNode* temp = pl->Head ;
	//for loop to make the pointer trans
	for(int i=0 ; i<pos-1 ;i++)
	{
		temp = temp->Next;
	}
	//temp == head
	pn->Next=temp->Next;
	pn->Prev=pn->Next;
	//
	temp->Next = pn ;
	
	pl->Size++;
	
}
void List_voidReplace(List *pl , int copy_intval ,int pos)
{	
	//temporary
	ListNode* temp = pl->Head ;
	//for loop to make the pointer trans
	for(int i=0 ; i<pos ;i++)
	{
		temp = temp->Next;
	}
	//temp == head
	temp->Data = copy_intval;
}

void List_voidDelete(List *pl ,int pos ,int*value)
{
	 
	//temporary
	ListNode* temp1 = pl->Head ;
	
	//for loop to make the pointer trans
	if(pos==0)
	{
		*value = temp1->Data ;	
		pl->Head = pl->Head->Next;
		free(temp1);
		
	}
	else
	{	
		for(int i=0 ; i<pos-1 ;i++)
		{
			temp1 = temp1->Next;
		}
		
		ListNode* temp2 =temp1->Next;
		
		*value = temp1->Next->Data ;	
		//
		temp1->Next=temp2->Next;		
		//
		free(temp2);
	}	
	pl->Size--;
}
void List_voidRetrieve(List *pl , int * value ,int pos)
{	
	//temporary
	ListNode* temp = pl->Head ;
	//for loop to make the pointer trans
	for(int i=0 ; i<pos ;i++)
	{
		temp = temp->Next;
	}
	
	*value = temp->Data;
	
}

int List_intIsEmpty(List *pl)
{
	return(pl->Head==NULL);
}

int List_intSizeOfList(List *pl )
{
	return pl->Size ;
}
void List_voidPrint(List *pl)
{

	ListNode* temp ;
	temp = pl->Head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->Data);
		temp=temp->Next ;
	}
	
}