/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : EXTI                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

#define FALLING_EDGE  0
#define RISING_EDGE   1
#define LOWLEVEL_EDGE 2
#define ONCHANGE_EDGE 3

#define INT0 0
#define INT1 1
#define INT2 2

void EXTI_voidInit();

void EXTI_voidEnable(u8 Copy_u8IntNo , u8 Copy_u8Sensecontrol);

void EXTI_voidDisable(u8 Copy_u8IntNo);

void EXTI_voidSetCallBack(void(*LPF)(void));


#endif
