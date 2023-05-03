#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/LCD/LCD_Interface.h"


int main()
{
	LCD_voidInit();


	while(1)
	{
		LCD_voidGoToXY(0,0);
		LCD_voidSendString("Elnahass");
		_delay_ms(300);
		LCD_voidCLR();
		_delay_ms(300);
		LCD_voidGoToXY(0,8);
		LCD_voidSendString("Elnahass");
		_delay_ms(300);
		LCD_voidCLR();
		_delay_ms(300);

		LCD_voidGoToXY(1,0);
		LCD_voidSendString("Elnahass");
		_delay_ms(300);
		LCD_voidCLR();
		_delay_ms(300);
		LCD_voidGoToXY(1,8);
		LCD_voidSendString("Elnahass");
		_delay_ms(300);
		LCD_voidCLR();
		_delay_ms(300);
	}



	return 0 ;
}
