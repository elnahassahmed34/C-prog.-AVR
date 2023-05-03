#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/EXTI/EXTI_Interface.h"
#include "../MCAL/GIE/GIE_Interface.h"
#include "../MCAL/ADC/ADC_Interface.h"
#include "../MCAL/TIMER/TIMER_Interface.h"


#include "../HAL/LED/LED_interface.h"
#include "../HAL/SevenSeg/SevenSeg_interface.h"
#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"


int main()
{
	//oc0 pin as output
	DIO_voidSetPinDirection(PORTB , PIN3 , OUTPUT);
	TIMER0_voidInit() ;
	u16 i ;

	while(1)
	{
		for(i=0 ; i<=255 ; i++ )
		{
			TIMER0_voidSetCompareMatchValue(i);
			_delay_ms(200);
		}
		for(i=0 ; i<=255 ; i++ )
		{
			TIMER0_voidSetCompareMatchValue(255-i);
			_delay_ms(200);
		}

	}

}
