#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"

#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"


int main()
{

	DIO_voidSetPinDirection(PORTC , PIN0 , OUTPUT) ;
	DIO_voidSetPinDirection(PORTC , PIN1 , OUTPUT) ;

	while(1)
	{


		DIO_voidSetPinvalue(PORTC , PIN0 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN1 ,LOW);
		_delay_ms(3000);

		DIO_voidSetPinvalue(PORTC , PIN0 ,LOW);
		DIO_voidSetPinvalue(PORTC , PIN1 ,LOW);
		_delay_ms(100);

		DIO_voidSetPinvalue(PORTC , PIN0 ,LOW);
		DIO_voidSetPinvalue(PORTC , PIN1 ,HIGH);
		_delay_ms(3000);


	}

	return 0 ;
}
