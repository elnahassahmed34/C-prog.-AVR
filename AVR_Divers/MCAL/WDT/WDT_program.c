/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : HAL                **********/
/**********    SWC : STP                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/


#include "..\..\LIB\STD_TYPES.h"
#include "..\..\LIB\BIT_MATH.h"
#include <util/delay.h>

#include "..\../MCAL/DIO/DIO_Interface.h"

#include"WDT_config.h"
#include"WDT_private.h"
#include"WDT_interface.h"


void WDT_voidEnable(void)
{
	SET_BIT(WDT_WDTCR , 3) ;
}
void WDT_voidDisable(void)
{

	/* Write logical one to WDTOE and WDE */
	WDT_WDTCR = (1<<4) | (1<<3);
	/* Turn off WDT */
	WDT_WDTCR = 0x00;


}
void WDT_voidSetTime(u8 Copy_ResetTime)
{
	WDT_WDTCR &= 0b11111000 ;
	WDT_WDTCR |= Copy_ResetTime ;

}




