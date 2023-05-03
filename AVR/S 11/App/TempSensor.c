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


int main()
{
	LCD_voidInit();
	ADC_voidInit();
	DCM_voidInit();


	while(1)
	{
		u32 Read ;
		u32 Temp ;
		Read = ADC_voidGetAnalogRead(ADC3);
		Temp = Read / 10 ;
		if(Temp>=30)
		{
			LCD_voidCLR() ;
			LCD_voidSendNum(Temp);
			_delay_ms(1000);
			DCM_voidDirection(ClockWise);
		}
		else if (Temp<30)
		{
			LCD_voidCLR() ;
			LCD_voidSendNum(Temp);
			_delay_ms(1000);
			DCM_voidStop();

		}

	}



	return 0 ;
}





