#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/EXTI/EXTI_Interface.h"
#include "../MCAL/GIE/GIE_Interface.h"

#include "../HAL/LED/LED_interface.h"
#include "../HAL/SevenSeg/SevenSeg_interface.h"
#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"


void BlinkLed(void);
void DC_Motor(void);
void STP_Motor(void);

int main()
{

	DIO_voidSetPinDirection(PORTD , PIN2 , INPUT) ;
	DIO_voidSetPinvalue(PORTD , PIN2 , HIGH);


	DIO_voidSetPinDirection(PORTD , PIN3 , INPUT) ;
	DIO_voidSetPinvalue(PORTD , PIN3 , HIGH);


	DIO_voidSetPinDirection(PORTB , PIN2 , INPUT) ;
	DIO_voidSetPinvalue(PORTB , PIN2 , HIGH);

	GIE_voidEnable();

	EXTI_voidEnable(INT0 , FALLING_EDGE);
	EXTI_voidEnable(INT1 , FALLING_EDGE);
	EXTI_voidEnable(INT2 , FALLING_EDGE);

	EXTI_voidSetCallBack_INT0(&BlinkLed);
	EXTI_voidSetCallBack_INT1(&DC_Motor);
	EXTI_voidSetCallBack_INT2(&STP_Motor);

	while(1)
	{


	}



	return 0 ;
}

void BlinkLed(void)
{
	DIO_voidSetPinDirection(PORTB , PIN0 , OUTPUT) ;

	static u8 Local_u8variable =0;

	if(Local_u8variable==0)
	{
		DIO_voidSetPinvalue(PORTB , PIN0 , LOW);
		Local_u8variable =1 ;
	}
	else
	{
		DIO_voidSetPinvalue(PORTB , PIN0 , HIGH);
		Local_u8variable =0 ;
	}

}

void DC_Motor(void)
{
	DCM_voidInit();
	static u8 Local_u8variable =0;

	if(Local_u8variable==0)
	{
		DCM_voidStop();
		Local_u8variable =1 ;
	}
	else
	{
		DCM_voidDirection(ClockWise) ;
		Local_u8variable =0 ;
	}


}
void STP_Motor(void)
{
	SevenSeg_voidInit(PORTA);
	static u8 Local_u8variable =0;

	if(Local_u8variable==0)
	{
		SevenSeg_voidDisplayNumber(PORTA , 0) ;
		Local_u8variable =1 ;
	}
	else
	{
		for(u8 i =0 ; i<9 ; i++)
		{
			SevenSeg_voidDisplayNumber(PORTA , i);
			_delay_ms(300);
		}
		Local_u8variable =0 ;
	}

}




