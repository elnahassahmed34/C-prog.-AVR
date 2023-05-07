/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : HAL                **********/
/**********    SWC : STP                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"

#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_

void WDT_voidEnable(void);
void WDT_voidDisable(void);
void WDT_voidSetTime(u8 Copy_u8Value);


#endif
