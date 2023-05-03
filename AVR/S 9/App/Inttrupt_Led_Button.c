#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/EXTI/EXTI_Interface.h"
#include "../MCAL/GIE/GIE_Interface.h"


#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"

void BlinkLed(void);

int main()
{
	DIO_voidSetPinDirection(PORTA , PIN0 , OUTPUT) ;
	DIO_voidSetPinDirection(PORTD , PIN2 , INPUT) ;
	DIO_voidSetPinvalue(PORTD , PIN2 , HIGH);

	GIE_voidEnable();


	EXTI_voidEnable(INT0 , FALLING_EDGE);

	EXTI_voidSetCallBack(&BlinkLed);

	while(1)
	{


	}



	return 0 ;
}

void BlinkLed(void)
{
	static u8 Local_u8variable =0;

	if(Local_u8variable==0)
	{
		DIO_voidSetPinvalue(PORTA , PIN0 , LOW);
		Local_u8variable =1 ;
	}
	else
	{
		DIO_voidSetPinvalue(PORTA , PIN0 , HIGH);
		Local_u8variable =0 ;
	}

}





