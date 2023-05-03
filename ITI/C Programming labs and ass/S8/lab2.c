#include<stdio.h>
#include"STD_TYPES.h"

typedef struct 
{
	u8 ID ;
	u8 Math ;
	u8 Language ;

	
}Grades ;



int main()
{
	u8 StudentID ;
	
	Grades Student_arr[3] = {{1 ,60 ,70},{2,80,90},{3,80,95}};
	
	printf("Plz enter student ID\n");
	scanf("%d",&StudentID) ;
	
	if((StudentID>0)&&(StudentID<4))
	{
		for(int i=0 ; i<3 ; i++)
		{
			if(StudentID==Student_arr[i].ID)
			{
				printf("the math grade = %d\n" ,Student_arr[i].Math);
				printf("the Language grade = %d\n" ,Student_arr[i].Language);
			}
		}
	}
	else
	{
		printf("ID is wrong");
	}
	
	return 0;
}
