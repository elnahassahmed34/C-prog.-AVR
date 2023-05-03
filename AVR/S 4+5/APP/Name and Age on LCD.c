#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/LCD/LCD_Interface.h"


int main()
{
	LCD_voidInit();
	LCD_voidSendString("Elnahass");
	LCD_voidSendNum(98);

	while(1)
	{


	}



	return 0 ;
}
