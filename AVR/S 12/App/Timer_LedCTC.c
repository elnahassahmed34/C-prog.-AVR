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

void APP_blinked();

int main()
{
	DIO_voidSetPinDirection(PORTB , PIN0 , OUTPUT);
	GIE_voidEnable();
	TIMER0_voidInit() ;
	TIMER0_voidSetCompareMatchValue(200);
	TIMER0_voidSetCallBackT0Ovf(&APP_blinked);

	while(1)
	{


	}

}
void APP_blinked()
{
	static u8 variable =0 ;
	if(variable==0)
	{
		DIO_voidSetPinvalue(PORTB , PIN0 , LOW);
		variable = 1;
	}
	else
	{
		DIO_voidSetPinvalue(PORTB , PIN0 , HIGH);
		variable = 0;
	}
}
