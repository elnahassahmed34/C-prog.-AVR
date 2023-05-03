#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../SRV/FreeRTOS/FreeRTOS.h"
#include "../SRV/FreeRTOS/task.h"

//#include "../SRV/RTOS/RTOS_Interface.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/EXTI/EXTI_Interface.h"
#include "../MCAL/GIE/GIE_Interface.h"
#include "../MCAL/ADC/ADC_Interface.h"
//#include "../MCAL/TIMER/TIMER_Interface.h"
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


void Func1 (void);
void Func2 (void);
void Func3 (void);

int main(void)
{
	GIE_voidEnable();
	DIO_voidSetPinDirection(PORTB,PIN0,OUTPUT);
	DIO_voidSetPinDirection(PORTB,PIN1,OUTPUT);
	DIO_voidSetPinDirection(PORTB,PIN2,OUTPUT);

	xTaskCreate( &Func1 , NULL , 200 , NULL , 0 , NULL );
	xTaskCreate( &Func2 , NULL , 200 , NULL , 1 , NULL );
	xTaskCreate( &Func3 , NULL , 200 , NULL , 2 , NULL );
	vTaskStartScheduler();

	while(1)
	{
	}
	return 0 ;
}
void Func1 (void)
{
	LED_voidLedOnOff(PORTB,PIN0,ON);
	vTaskDelay( 1000 );
}
void Func2 (void)
{
	LED_voidLedOnOff(PORTB,PIN0,ON);
	vTaskDelay( 1000 );
}
void Func3 (void)
{
	LED_voidLedOnOff(PORTB,PIN0,ON);
	vTaskDelay( 1000 );
}


