#include <stdio.h>
#include <stdlib.h>

int main()
{

	int ID , Pass , i=0;
	
	printf("plz eneter your ID \n") ;
	scanf("%d" , &ID) ;
	
	
	switch(ID)
	{
		case 1234 : break ;
		case 5678 : break ;
		case 9870 : break ;
		default   : printf("you are not registerd") ; 
goto jump ;
		
	}
	
	printf("plz eneter your password \n") ;
	scanf("%d" , &Pass) ;
	
	
	
	for(i  ; i<=2 ; i++)
	{
		
		
		if(i<2)
		{
			switch(Pass)
			{
				case 7788 :printf("welcome Ahmed"); goto jump ;
				case 5566 :printf("welcome Amr");   goto jump ;
				case 1122 :printf("welcome Wael");  goto jump ;
				default   : printf("try again\n") ;   break ;
		
			}
			scanf("%d" , &Pass) ;
		}
		else if (i=2)
		{
			printf("Incorrect pass for 3 times , no more tries");
		}
	}
	
	
	jump :
	return 0;
}