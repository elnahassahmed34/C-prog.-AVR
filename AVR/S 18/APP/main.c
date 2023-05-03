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
#include "../MCAL/TWII/TWI_Interface.h"


#include "../HAL/LED/LED_interface.h"
#include "../HAL/SevenSeg/SevenSeg_interface.h"
#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"
#include "../HAL/EEPROM/EEPROM_interface.h"



int main()
{
	LED_voidInitOneLed(PORTD , PIN0 );
	LED_voidLedOnOff(PORTD , PIN0 , LOW);

	u8 Return_Data ;

	LCD_voidInit();

	TWI_voidInitMaster(0);

	EEPROM_voidSendDataByte(5,10);

	Return_Data = EEPROM_u8ReadDataByte(5);

	LCD_voidSendNum(Return_Data);

	if(Return_Data == 10)
		LED_voidLedOnOff(PORTD , PIN0 , HIGH);

	while(1)
	{


	}

}
