/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : TIMER                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/


#include "..\..\LIB\STD_TYPES.h"
#include "..\..\LIB\BIT_MATH.h"
#include <util/delay.h>

#include "..\../MCAL/DIO/DIO_Interface.h"

#include"TIMER_config.h"
#include"TIMER_private.h"
#include"TIMER_interface.h"

void(*TIMER_GPF0)(void) = NULL ;
void(*TIMER_GPF1)(void) = NULL ;


void TIMER0_voidInit()
{
	#if(TIMER_MODE==TIMER_NORMAL_MODE)
	//normal mode
	CLR_BIT(TIMER0_TCCR0_REG , 6 );
	CLR_BIT(TIMER0_TCCR0_REG , 3 );
	#elif(TIMER_MODE==TIMER_CTC_MODE)
	//compare mode
	CLR_BIT(TIMER0_TCCR0_REG , 6 );
	SET_BIT(TIMER0_TCCR0_REG , 3 );
	#elif(TIMER_MODE==TIMER_FAST_PWM_MODE)
	//PWM
	SET_BIT(TIMER0_TCCR0_REG , 6 );
	CLR_BIT(TIMER0_TCCR0_REG , 3 );
	#endif

	//prescaller division factor = 8
	CLR_BIT(TIMER0_TCCR0_REG , 2 );
	CLR_BIT(TIMER0_TCCR0_REG , 0 );
	SET_BIT(TIMER0_TCCR0_REG , 1 );

	//Enable Timer0 Interrupt PIE
	SET_BIT(TIMER0_TIMSK_REG , 0) ;

}

void TIMER0_voidSetCallBackT0Ovf(void(*LPF0)(void))
{
	TIMER_GPF0 = LPF0 ;
}


void TIMER0_voidSetPreloadValue(u8 Copy_PreloadValue)
{
	TIMER0_TCNT0_REG = Copy_PreloadValue ;
}

void TIMER0_voidSetCallBackT0CTC(void(*LPF1)(void))
{
	TIMER_GPF1 = LPF1 ;
}

void TIMER0_voidSetCompareMatchValue(u8 Copy_PreloadValue)
{
	TIMER0_OCR0_REG = Copy_PreloadValue ;
}



//ISR for T0OVF
void __vector_10(void)    __attribute__((signal));
void __vector_10(void)
{
	static u16 counter = 0 ;
	counter ++ ;
	if(counter == 5000)
	{
		TIMER_GPF1();
		counter = 0 ;
	}

}
void __vector_11(void)    __attribute__((signal));
void __vector_11(void)
{
	static u16 counter = 0 ;
	counter ++ ;
	if(counter == 3907)
	{
		TIMER_GPF0();
		counter = 0 ;
		TIMER0_voidSetPreloadValue(192);
	}

}

