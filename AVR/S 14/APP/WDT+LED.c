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
#include "../MCAL/WDT/WDT_Interface.h"


#include "../HAL/LED/LED_interface.h"
#include "../HAL/SevenSeg/SevenSeg_interface.h"
#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"



int main()
{

	DIO_voidSetPinDirection(PORTD ,PIN5 , OUTPUT);
	DIO_voidSetPinvalue(PORTD ,PIN5 , HIGH) ;
	_delay_ms(3000) ;
	DIO_voidSetPinvalue(PORTD ,PIN5 , LOW) ;
	WDT_voidEnable() ;

	WDT_voidSetTime(7);
	_delay_ms(2500);
	WDT_voidDisable();

	while(1)
	{



	}
}
