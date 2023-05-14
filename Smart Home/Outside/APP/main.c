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

	DIO_voidSetPinDirection(PORTD , PIN0 , OUTPUT);
	DIO_voidSetPinDirection(PORTD , PIN1 , INPUT);
	u8 Recieved = 0 ;
	UART_voidInit();
	//servo
	DIO_voidSetPinDirection(PORTD ,PIN5 , OUTPUT);
	TIMER1_voidInit() ;
	SevenSeg_voidInit(PORTB);

	//eeprom
	u8 Return_Data =3 ;
	TWI_voidInitMaster(0);
	Return_Data = EEPROM_u8ReadDataByte(5);
	EEPROM_voidSendDataByte(5,3);



	while(1)
	{
		UART_u8RecieveData(&Recieved);
		Return_Data = EEPROM_u8ReadDataByte(5);

		if(Recieved == 's')
		{
			TIMER1_voidSetPinACompareMatch(1999);
		}
		if(Recieved == 'a')
		{
			SevenSeg_voidDisplayNumber(PORTB , Return_Data) ;
		}
		if(Recieved == 'b')
		{
			EEPROM_voidSendDataByte(5,2);
			SevenSeg_voidDisplayNumber(PORTB , Return_Data) ;
		}
		if(Recieved == 'c')
		{
			EEPROM_voidSendDataByte(5,1);
			SevenSeg_voidDisplayNumber(PORTB , Return_Data) ;		}
		if(Recieved == 'd')
		{
			EEPROM_voidSendDataByte(5,0);
			SevenSeg_voidDisplayNumber(PORTB , Return_Data) ;			}
	}

}
