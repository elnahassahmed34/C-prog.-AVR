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
#include "../MCAL/TWI/TWI_Interface.h"


#include "../HAL/LED/LED_interface.h"
#include "../HAL/SevenSeg/SevenSeg_interface.h"
#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"
#include "../HAL/EEPROM/EEPROM_interface.h"


int main()
{
	TIMER0_voidInit();
	TIMER0_voidSetCompareMatchValue(200);
	DIO_voidSetPinDirection(PORTC , PIN7 , OUTPUT);




	while(1)
	{
		DIO_voidSetPinvalue(PORTC , PIN7 , HIGH);
		TIMERS_voidT1SetBusyWait(1000);
		DIO_voidSetPinvalue(PORTC , PIN7 , LOW);
		TIMERS_voidT1SetBusyWait(1000);

	}


}
