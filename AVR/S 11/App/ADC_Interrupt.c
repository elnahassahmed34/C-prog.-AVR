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


#include "../HAL/LED/LED_interface.h"
#include "../HAL/SevenSeg/SevenSeg_interface.h"
#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"

u32 Read ;
void Interrupt_ADC(void);

int main()
{
	GIE_voidEnable();
	LCD_voidInit();
	ADC_voidInit();
	DIO_voidSetPinDirection(PORTA , PIN3 , INPUT);
	LED_voidInitLedString(PORTC) ;

	while(1)
	{

		Read = ADC_voidGetAnalogReadAsynch(ADC3 , &Interrupt_ADC);




		return 0 ;
	}
}

void Interrupt_ADC(void)
{
	if(Read>3500)
	{
		LCD_voidCLR() ;
		LCD_voidSendNum(Read);
		LED_voidLedOnOff(PORTC , PIN0 , ON) ;
		LED_voidLedOnOff(PORTC , PIN1 , ON) ;
		LED_voidLedOnOff(PORTC , PIN2 , ON) ;
	}
	else if ((Read<3500)&&(Read>1500))
	{
		LCD_voidCLR() ;
		LCD_voidSendNum(Read);
		LED_voidLedOnOff(PORTC , PIN0 , ON) ;
		LED_voidLedOnOff(PORTC , PIN1 , ON) ;
		LED_voidLedOnOff(PORTC , PIN2 , OFF) ;
	}
	else if ((Read<1500)&&(Read>0))
	{
		LCD_voidCLR() ;
		LCD_voidSendNum(Read);
		LED_voidLedOnOff(PORTC , PIN0 , ON) ;
		LED_voidLedOnOff(PORTC , PIN1 , OFF) ;
		LED_voidLedOnOff(PORTC , PIN2 , OFF) ;
	}
	else if (Read == 0)
	{
		LCD_voidCLR() ;
		LCD_voidSendNum(Read);
		LED_voidLedOnOff(PORTC , PIN0 , OFF) ;
		LED_voidLedOnOff(PORTC , PIN1 , OFF) ;
		LED_voidLedOnOff(PORTC , PIN2 , OFF) ;
	}
}





