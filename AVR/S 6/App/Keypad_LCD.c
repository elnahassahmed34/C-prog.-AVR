#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"

#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"


int main()
{
	u8 Pressed_Key ;

	KPD_voidInit();
	LCD_voidInit();



	while(1)
	{
		Pressed_Key = KPD_u8GetPressedKey();
		if((Pressed_Key!=0xff)&&(Pressed_Key=='#'))
		{
			LCD_voidCLR();
		}
		if((Pressed_Key!=0xff)&&(Pressed_Key!='#'))
		{
			LCD_voidSendChar(Pressed_Key);

		}
	}




	return 0 ;
}
