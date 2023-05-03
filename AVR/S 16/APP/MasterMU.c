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
#include "../MCAL/SPI/SPI_Interface.h"


#include "../HAL/LED/LED_interface.h"
#include "../HAL/SevenSeg/SevenSeg_interface.h"
#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"



int main()
{
	u8 Recieved ;

	//MOSI
	DIO_voidSetPinDirection(PORTB , PIN5 , OUTPUT);

	//MISO
	DIO_voidSetPinDirection(PORTB , PIN6 , INPUT);

	//CLK OUtput
	DIO_voidSetPinDirection(PORTB , PIN7 , OUTPUT);

	//Slave select
	DIO_voidSetPinDirection(PORTB , PIN4 , INPUT);

	//Led
	DIO_voidSetPinDirection(PORTA , PIN0 , OUTPUT);
	DIO_voidSetPinvalue(PORTA , PIN0 , LOW);


	SPI_voidMasterInit();

	while(1)
	{
		Recieved = SPI_u8TrasfereRecieve('a');

		if(Recieved == 's')
		{
			DIO_voidSetPinvalue(PORTA , PIN0 , HIGH);
		}
		else
		{
			DIO_voidSetPinvalue(PORTA , PIN0 , LOW);

		}
	}

}
