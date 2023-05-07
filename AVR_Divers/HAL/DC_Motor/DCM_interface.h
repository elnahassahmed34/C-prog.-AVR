/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : HAL                **********/
/**********    SWC : DCM                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"

#ifndef DCM_INTERFACE_H_
#define DCM_INTERFACE_H_

#define ClockWise 1
#define AntiClockWise 0

void DCM_voidInit(void);

void DCM_voidDirection(u8 Copy_u8Direction);

void DCM_voidStop(void);


#endif
