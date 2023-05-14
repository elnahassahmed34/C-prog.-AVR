/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : HAL                **********/
/**********    SWC : DCM                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/


#include "..\..\LIB\STD_TYPES.h"
#include "..\..\LIB\BIT_MATH.h"
#include <util/delay.h>

#include "..\../MCAL/DIO/DIO_Interface.h"

#include"DCM_config.h"
#include"DCM_private.h"
#include"DCM_interface.h"


void DCM_voidInit(void)
{

	DIO_voidSetPinDirection(DCM_PORT , DCM_C1 , OUTPUT) ;
	DIO_voidSetPinDirection(DCM_PORT , DCM_C2 , OUTPUT) ;

}

void DCM_voidDirection(u8 Copy_u8Direction)
{

	switch(Copy_u8Direction)
	{
	case ClockWise :
		DIO_voidSetPinvalue(DCM_PORT , DCM_C1 ,HIGH);
		DIO_voidSetPinvalue(DCM_PORT , DCM_C2 ,LOW);
		break ;
	case AntiClockWise :
		DIO_voidSetPinvalue(DCM_PORT , DCM_C2 ,HIGH);
		DIO_voidSetPinvalue(DCM_PORT , DCM_C1 ,LOW);
		break;
	default :
		break ;
	}

}
void DCM_voidStop(void)
{
	DIO_voidSetPinvalue(DCM_PORT , DCM_C1 ,LOW);
	DIO_voidSetPinvalue(DCM_PORT , DCM_C2 ,LOW);
}



