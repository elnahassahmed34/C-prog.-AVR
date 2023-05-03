#define F_CPU 8000000

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
	DIO_voidSetPinDirection(PORTC , PIN2 , OUTPUT) ;
	DIO_voidSetPinDirection(PORTC , PIN3 , OUTPUT) ;

	DIO_voidSetPinvalue(PORTC , PIN0 ,HIGH);
	DIO_voidSetPinvalue(PORTC , PIN1 ,HIGH);
	DIO_voidSetPinvalue(PORTC , PIN2 ,HIGH);
	DIO_voidSetPinvalue(PORTC , PIN3 ,HIGH);

	while(1)
	{


		DIO_voidSetPinvalue(PORTC , PIN0 ,LOW);
		DIO_voidSetPinvalue(PORTC , PIN1 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN2 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN3 ,HIGH);
		_delay_ms(5);

		DIO_voidSetPinvalue(PORTC , PIN0 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN1 ,LOW);
		DIO_voidSetPinvalue(PORTC , PIN2 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN3 ,HIGH);
		_delay_ms(5);

		DIO_voidSetPinvalue(PORTC , PIN0 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN1 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN2 ,LOW);
		DIO_voidSetPinvalue(PORTC , PIN3 ,HIGH);
		_delay_ms(5);

		DIO_voidSetPinvalue(PORTC , PIN0 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN1 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN2 ,HIGH);
		DIO_voidSetPinvalue(PORTC , PIN3 ,LOW);
		_delay_ms(5);


	}

	return 0 ;
}
