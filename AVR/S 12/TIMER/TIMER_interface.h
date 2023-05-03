/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : TIMER                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_


void TIMER0_voidInit();

void TIMER0_voidSetCallBackT0Ovf(void(*LPF)(void)) ;

void TIMER0_voidSetPreloadValue(u8 Copy_PreloadValue) ;

void TIMER0_voidSetCompareMatchValue(u8 Copy_PreloadValue);

void TIMER0_voidSetCallBackT0CTC(void(*LPF1)(void)) ;

#endif
