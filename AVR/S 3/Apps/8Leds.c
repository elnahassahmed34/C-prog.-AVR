#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/LED/LED_Interface.h"
#include "../HAL/SevenSeg/SevenSeg_Interface.h"


int main()
{
	// PORTA is OUTPUT
	LED_voidInitLedString(PORTA) ;
	// PORTC is INPUT
	DIO_voidSetPortDirection(PORTC , DIO_u8PORT_INPUT) ;
	//pull up port c
	DIO_voidSetPortvalue(PORTC , DIO_u8PORT_HIGH) ;

	while(1)
	{
		u8 Button = DIO_u8GetPortvalue(PORTC);

		if((Button & 0b00000001) == 0)
		{
			LED_voidLedStringOnOff(PORTA , DIO_u8PORT_HIGH);
			_delay_ms(500);
			LED_voidLedStringOnOff(PORTA , DIO_u8PORT_LOW);
			_delay_ms(500);
		}
		else if ((Button & 0b00000010) == 0)
		{
			for(u8 i=0 ; i<8 ; i++)
			{
				LED_voidLedStringOnOff(PORTA , 1<<i ) ;
				_delay_ms(250);
			}
		}
		else if ((Button & 0b00000100) == 0)
		{
			for(u8 i=0 ; i<8 ; i++)
			{
				LED_voidLedStringOnOff(PORTA , 0b10000000>>i ) ;
				_delay_ms(250);
			}
		}
		else if ((Button & 0b00001000) == 0)
		{

			LED_voidLedStringOnOff(PORTA , 0b00011000 ) ;
			_delay_ms(300);

			LED_voidLedStringOnOff(PORTA , 0b00100100 ) ;
			_delay_ms(300);

			LED_voidLedStringOnOff(PORTA , 0b01000010 ) ;
			_delay_ms(300);

			LED_voidLedStringOnOff(PORTA , 0b10000001 ) ;
			_delay_ms(300);
		}
		else if ((Button & 0b00010000) == 0)
		{
			LED_voidLedStringOnOff(PORTA , 0b10000001 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b01000010 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b00100100 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b00011000 ) ;
			_delay_ms(300);

		}
		else if ((Button & 0b00100000) == 0)
		{
			for(u8 i=0 ; i<8 ; i++)
			{
				LED_voidLedStringOnOff(PORTA , 1<<i ) ;
				_delay_ms(250);
			}
			for(u8 i ; i<8 ; i++)
			{
				LED_voidLedStringOnOff(PORTA , 0b10000000>>i ) ;
				_delay_ms(250);
			}
		}
		else if ((Button & 0b01000000) == 0)
		{
			LED_voidLedStringOnOff(PORTA , 0b00000001 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b00000011 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b00000111 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b00001111 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b00011111 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b00111111 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b01111111 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b11111111 ) ;
			_delay_ms(300);
		}
		else
		{
			LED_voidLedStringOnOff(PORTA , 0b10011001 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b01100110 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b01100110 ) ;
			_delay_ms(300);
			LED_voidLedStringOnOff(PORTA , 0b10011001 ) ;
			_delay_ms(300);
		}



	}
	return 0;
}

