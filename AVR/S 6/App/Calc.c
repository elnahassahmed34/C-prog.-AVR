#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"

#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"


int main()
{
	u8 Num1 , Num2 , res=0 ;
	u8 op ;

	KPD_voidInit();
	LCD_voidInit();



	while(1)
	{
		while(1)
		{
			Num1 = KPD_u8GetPressedKey();
			if((Num1 !=0xff))
			{
				LCD_voidSendNum(Num1);
				break ;
			}
		}
		while(1)
		{
			op = KPD_u8GetPressedKey();
			if((op!=0xff))
			{
				LCD_voidSendChar(op);
				break ;
			}

		}
		while(1)
		{
			Num2 = KPD_u8GetPressedKey();
			if((Num2!=0xff))
			{
				LCD_voidSendNum(Num2);
				break ;
			}

		}

		LCD_voidSendChar('=');

		switch(op)
		{
			case '+' : res = Num1 + Num2 ; break ;
			case '-' : res = Num1 - Num2 ; break ;
			case '*' : res = Num1 * Num2 ; break ;
			case '/' : res = Num1 / Num2 ; break ;
		}
		LCD_voidSendNum(res);
		_delay_ms(5000);
		LCD_voidCLR() ;

	}




	return 0 ;
}
