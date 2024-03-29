/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : 7seg                **********/
/**********    SWC :    HAL                  **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/
#include "..\..\LIB\STD_TYPES.h"
#include "..\..\LIB\BIT_MATH.h"

#include"SevenSeg_private.h"
#include"SevenSeg_interface.h"

#include "..\../MCAL/DIO/DIO_Interface.h"
#include "../LED/LED_Interface.h"





void SevenSeg_voidInit(u8 Copy_u8PortId)
{
	LED_voidInitLedString(Copy_u8PortId);
}

void SevenSeg_voidDisplayNumber(u8 Copy_u8PortId,u8 Copy_u8DisblayNumber)
{
	if ( (Copy_u8DisblayNumber >= 0) || (Copy_u8DisblayNumber<10) )
	{
		LED_voidLedStringOnOff(Copy_u8PortId ,SevenSEG_u8SevenSegArray[Copy_u8DisblayNumber]);
	}
	else
	{
		//Do nothing
	}
}




