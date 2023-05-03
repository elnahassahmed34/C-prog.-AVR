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
#include "../MCAL/UART/UART_Interface.h"


#include "../HAL/LED/LED_interface.h"
#include "../HAL/SevenSeg/SevenSeg_interface.h"
#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"



int main()
{
	DIO_voidSetPinDirection(PORTA , PIN0 , OUTPUT);
	DIO_voidSetPinDirection(PORTD , PIN0 , INPUT);
	DIO_voidSetPinDirection(PORTD , PIN1 , OUTPUT);
	DIO_voidSetPinvalue(PORTA , PIN0 , LOW);
	u8 Recieved = 0 ;
	UART_voidInit();
	UART_voidSendData('a');

	while(1)
	{
		UART_u8RecieveData(&Recieved);

		if(Recieved == 's')
		{
			DIO_voidSetPinvalue(PORTA , PIN0 , HIGH);
			_delay_ms(500);
			DIO_voidSetPinvalue(PORTA , PIN0 , LOW);
			_delay_ms(500);
		}
		else
		{
			DIO_voidSetPinvalue(PORTA , PIN0 , LOW);
		}
		UART_voidSendData(Recieved);
	}

}
