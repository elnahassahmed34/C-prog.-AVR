#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/LED/LED_Interface.h"
#include "../HAL/SevenSeg/SevenSeg_Interface.h"

int main()
{
	while(1)
	{

		u8 i ;
		//PortA for 3 LEDs
		LED_voidInitLedString(PORTA);
		//PortC for 7seg
		SevenSeg_voidInit(PORTC);

		for(i=9 ; i>0; i--)
		{
			LED_voidLedOnOff(PORTA , PIN0 , ON);
			SevenSeg_voidDisplayNumber(PORTC , i) ;
			_delay_ms(1000);
		}
		LED_voidLedOnOff(PORTA , PIN0 , OFF);

		for(i=3;i>0;i--)
		{
			LED_voidLedOnOff(PORTA , PIN1 , ON);
			SevenSeg_voidDisplayNumber(PORTC , i) ;
			_delay_ms(1000);
		}
		LED_voidLedOnOff(PORTA , PIN1 , OFF);
		for(i=9;i>0;i--)
		{
			LED_voidLedOnOff(PORTA , PIN2 , ON);
			SevenSeg_voidDisplayNumber(PORTC , i) ;
			_delay_ms(1000);
		}
		LED_voidLedOnOff(PORTA , PIN2 , OFF);
	}

}
