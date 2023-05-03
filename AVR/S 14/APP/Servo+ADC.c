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


#include "../HAL/LED/LED_interface.h"
#include "../HAL/SevenSeg/SevenSeg_interface.h"
#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"



int main()
{
	LCD_voidInit();
	ADC_voidInit();
	DIO_voidSetPinDirection(PORTA , PIN3 , INPUT);

	DIO_voidSetPinDirection(PORTD ,PIN5 , OUTPUT);
	TIMER1_voidInit() ;


	while(1)
	{
		//ADC Read
		f64 Read ;
		Read = ADC_voidGetAnalogRead(ADC3);
		LCD_voidCLR() ;
		LCD_voidSendNum(Read);

		//Servo
		f64 ServoVolt ;
		ServoVolt = (((Read-999)*18)/10);
		LCD_voidGoToXY(1,0);
		LCD_voidSendNum(ServoVolt);
		TIMER1_voidSetPinACompareMatch(ServoVolt);
		_delay_ms(3000) ;

	}
}
