/****************************************************/
/****************************************************/
/**********    Author: Ahmed Elnahass      **********/
/**********    Date  : 26/3/2022           **********/
/**********    SWC   :  Clinic manament    **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct patient
{
	int Age;
	int Gender;
	int ID;
	int reserve;
	char Array[50];
	struct patient *Next;
}Patient;

typedef struct list
{
	Patient *Head;
	int Size;
}List;



void List_voidInsert_first(List *pl ,int Age,int Gender, int ID , char Array[50]);
void List_voidReplace(List *pl , int Age ,int Gender,int ID,int position);
void Replace_New_data(List *pl);
void List_voidInit(List *pl);
void Cancel_reserve_void(List *pl);
void Print_patient_records(List *pl);
int Check_void(List *pl , int ID);
void Print_allpatients_recordsvoid(List *pl);
int Mode(int value);
int Admin_password(int pass);
int Password(void);
void Insertpatient(void);
void Reserve_void(List *pl);


List L1;


int main()
{
	List_voidInit(&L1);
	while(1)
	{
	printf("Patient put 0\n");
	printf("Admin put 1\n");
	int mod,mode,x,password;
	scanf("%d",&mod);
	mode = Mode(mod);
	switch (mode)
	{
		case 0:
		       Print_patient_records(&L1);
			   
		break;
		
		case 1:
			  x=Admin_password(Password());
			  if(x==0)
			  {
				  printf("no more tries thank you\n");
				  break;
			  }
			  else
			  {
				   int number=0,x;	  
			       printf("Do you want to add a new patient\n");
				   printf("yes put  (1)\n");
				   printf("no put   (0)\n");
				   scanf("%d",&x);
				   if(x == 1)
				   {  
				       printf("what is the number of patients you want to insert\n");
				       scanf("%d",&number);
				       for(int i=0;i<number;i++)
				       {
						   printf("the patient [%d]\n",i+1);
					       Insertpatient();
				       }
				   }
				   else 
				   {
					 // no thing
				   }
				   printf("Do you want to edit patient record\n");
				   printf("yes put  (1)\n");
				   printf("no put   (0)\n");
				   scanf("%d",&x);
				   if(x == 1)
				   {
				  	 Replace_New_data(&L1);
				   }
				   else 
				   {
				  	 // no thing
				   }
				   printf("Do you want to cancel a reservation\n");
				   printf("yes put  (1)\n");
				   printf("no put   (0)\n");
				   scanf("%d",&x);
				   if(x == 1)
				   {
				  	 Cancel_reserve_void(&L1);
				   }
				   else 
				   {
				  	 // no thing
				   }
				   printf("Do you want to print records of all patients\n");
				   printf("yes put  (1)\n");
				   printf("no put   (0)\n");
				   scanf("%d",&x);
				   if(x == 1)
				   {
				  	 Print_allpatients_recordsvoid(&L1);
				   }
				   else 
				   {
				  	 // no thing
				   }
				   
				   
				   
				   
				   
				} 
		break;
	}
	}
	return 0;
}



void List_voidInit(List *pl)
{
	pl->Head = NULL;
	pl->Size =0;
}

int Password(void)
{
	int pass;
	printf("please entre your password\n");
	scanf("%d",&pass);
	return pass;
}

void Insertpatient(void)
{
	int Age,ID,Gender;
	char Array[50];
	printf("please entre the ID of the patient\n");
	scanf("%d",&ID);
	if(Check_void(&L1,ID) == 1)
	{
	printf("please entre the patients name\n");
	fflush(stdin);
	scanf("%[^\n]%*c",Array);
	printf("please entre the Age of patient\n");
	scanf("%d",&Age);
	printf("please entre the Gender of the patient\n");
	printf("*****for male please put*****                (0)\n");
	printf("*****for female please put***                (1)\n");
	scanf("%d",&Gender);
	List_voidInsert_first(&L1,Age,Gender,ID,Array);
	int x;
	printf("Do you want to reserve a slot with a doctor\n");
    printf("yes put  (1)\n");
    printf("no put   (0)\n");
    scanf("%d",&x);
    if(x == 1)
    {
   	  Reserve_void(&L1);
    }
    else 
    {
   	 // no thing
    }
	
	}
	
	else
	{
		// no thing
	}
}


void List_voidInsert_first(List *pl ,int Age,int Gender, int ID , char Array[50])
{
	Patient *pn = (Patient *)malloc(sizeof(Patient));
	pn->Age= Age;
	pn->ID = ID;
	strcpy(pn->Array,Array);
	pn->Gender = Gender;
	pn->Next = pl->Head;
	pl->Head = pn;
	pl->Size++;
}


void Replace_New_data(List *pl)
{
	int o_ID,n_Age,n_Gender,n_ID;
	char Array[50];
	printf("please entre patients ID\n");
	scanf("%d",&o_ID);
	if(Check_void(&L1,o_ID) == 0)
	{
	Patient *temp = pl->Head;
	for(int i=0;i<pl->Size;i++)
	{
		if(temp->ID == o_ID)
		{
			printf("please entre the new name\n");
			fflush(stdin);
	        scanf("%[^\n]%*c",Array);
			strcpy(temp->Array,Array);
			printf("please entre the new Age \n");
	        scanf("%d",&n_Age);
			temp->Age = n_Age;
	        printf("please entre the new Gender\n");
			printf("for male put 0\n");
			printf("for female put 1\n");
	        scanf("%d",&n_Gender);
			temp->Gender = n_Gender;
	       
			break;
	   	}
		else 
		{
			temp = temp->Next;
		}
	}
	
	}
	else 
	{
		printf("there is no patient has this ID\n\n\n");
	}
	
}

void Reserve_void(List *pl)
{
	Patient *temp = pl->Head;
	int reserve,ID,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
	for (int x=0;x<pl->Size;x++)
	{
		if(temp->reserve == 1)
		{
			flag1++;
		}
		else if(temp->reserve == 2)
		{
			flag2++;
		}
		else if(temp->reserve == 3)
		{
			flag3++;
		}
		else if(temp->reserve == 4)
		{
			flag4++;
		}
		else if(temp->reserve == 5)
		{
			flag5++;
		}
		else 
		{
			// no thing
		}
		temp = temp->Next;
	}
	printf("We are doing our best to help you get well soon\n\n");
	printf("to reserve a slot with a doctor\n");
	printf("please entre the ID\n\n");
	scanf("%d",&ID);
	if(Check_void(&L1,ID)==1)
	{
		printf("there is no patient has this ID\n\n\n");
	}
	else
	{
		if(flag1==0)
	{
		printf("the reservion from 2.30    to   3 is avliable to reserve it put 1\n");
	}
	if(flag2==0)
	{
		printf("the reservion from 3       to    3.30 is avliable to reserve it put 2\n");
	}
	if(flag3==0)
	{
		printf("the reservion from 3.30    to    4 is avliable to reserve it put 3\n");
	}
	if(flag4==0)
	{
		printf("the reservion from 4       to    4.30 is avliable to reserve it put 4\n");
	}
	if(flag5==0)
	{
		printf("the reservion from 4.30    to    5 is avliable to reserve it put 5\n");
	}
	temp = pl->Head;
	printf("which reservion is you want\n");
	scanf("%d",&reserve);
	for(int j=0;j<pl->Size;j++)
	{
		if(temp->ID == ID)
		{
			temp->reserve = reserve;
		}
		else
		{
			temp = temp->Next;
		}
	}
	
	}
	
}


void Cancel_reserve_void(List *pl)
{
	int ID;
	printf("please entre the patients ID\n");
	scanf("%d",&ID);
	if(Check_void(&L1,ID) == 0)
	{
	Patient *temp = pl->Head;
	for(int i=0;i<pl->Size;i++)
	{
		if(temp->ID == ID)
		{
			temp->reserve = 0;
		}
		else 
		{
			temp = temp->Next;
		}
	}
	}
	else
	{
		printf("there is no patient has this ID\n\n");
	}
	
}

void Print_patient_records(List *pl)
{
	Patient *temp = pl->Head;
	int ID,x;
	printf("We wish you a speedy recovery\n\n");
	printf("If you want to print the patients records put (1)\n\n");
	printf("If you want to reserve a slot with a doctor put (2)\n\n");
	scanf("%d",&x);
	if(x==1)
	{
	   printf("please entre your ID\n\n");
	   scanf("%d",&ID);
	   if (Check_void(&L1,ID)== 0)
	   {
		   for(int i=0;i<pl->Size;i++)
	       {
		   if(temp->ID == ID)
		   {
			printf("\"the patients records\"\n\n");
			printf("the name of the patient \n%s\n\n",temp->Array);
			printf("the Age of patient = %d\n",temp->Age);
			printf("the ID of patient = %d\n",temp->ID);
			if(temp->Gender == 0)
			{
				printf("the Gender of patient : male\n");
			}
			else
			{
				printf("the Gender of patient : female\n");
			}
			printf("the reservion of patient = %d\n\n\n\n",temp->reserve);
			break;
		   }
	       else 
	       {
		    temp = temp->Next;
		   }
	       }
	   }
	   else
	   {
		   printf("there is no patient has this ID\n\n\n");
	   }
	
	
	}
	else if(x==2)
	{
		Reserve_void(&L1);
	}
	else 
	{
		// no thing
	}
}

int Check_void(List *pl , int ID)
{
	Patient *temp = pl->Head;
	int flag=0;
	for(int i=0;i<pl->Size;i++)
	{
		if(temp->ID == ID)
		{
			printf("this ID is already exists\n");
			flag++;
			break;
		}
		else
		{
			temp = temp->Next;
		}
	}
	if(flag == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void Print_allpatients_recordsvoid(List *pl)
{
	Patient *temp = pl->Head;
	for(int i=1;i<=pl->Size;i++)
	{
		printf("recods of patient [%d]\n",i);
		printf("the name of the patient \n%s\n\n",temp->Array);
		printf("the Age of patient = %d\n",temp->Age);
		printf("the ID of patient = %d\n",temp->ID);
		if(temp->Gender == 0)
		{
			printf("the Gender of patient : male\n");
		}
		else
		{
			printf("the Gender of patient : female\n");
		}
		printf("the reservion of patient = %d\n\n",temp->reserve);
		temp = temp->Next;
	}
}

int Mode(int value)
{
	if(value==0)
	{
		return 0;
	}
	else
	{
		return 1 ;
	}
}

int Admin_password(int pass)
{
	int flag=0,password;
	if(pass ==1234)
	{
		flag++;
	}
	else 
	{
		printf("please try again\n");
		scanf("%d",&password);
		if(password==1234)
		{
			flag++;
		}
		else 
		{
			printf("please try again\n");
		    scanf("%d",&password);
			if(password==1234)
			{
				flag++;
			}
			else
			{
				flag =0;
			}
		}
	}
	if(flag!=0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
