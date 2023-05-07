/*=================================================================================*/
/*  File        : RTOS_Program.c                                                   */
/*  Description : This file includes RTOS Driver implementations for Atmega32      */
/*  Author      : Ahmed Bahaa Taha Nasr. Embedded SW Engineer                      */
/*  Date        : 19/4/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bahaa1/                        */
/*  Git account : https://github.com/ahmedbahaa11                                  */
/*  mail        : ahmedbahaataha7@gmil.com                                         */
/*=================================================================================*/

/* Include Header Files From LIB */
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

/* Include My own Header Files*/
#include "RTOS_Interface.h"
#include "RTOS_Private.h"
#include "RTOS_Config.h"

/* Include Files From MCAL */
#include "../../MCAL/TIMER/TIMER_Interface.h"

RTOS_TCB RTOS_ArrTasks[RTOS_u8_MAX_NUMBER_TASKS] ;

void RTOS_voidInit (void)
{
    // Set Call Back Function & Compare Required Time
    TIMER0_voidSetCallBackT0CTC(&RTOS_voidScheduler); // 1 msec
    // Start Timer ( CTC Mode + Enable CTC Interrupt + Put Prescaller 8 )
    TIMER0_voidInit();

    TIMER0_voidSetCompareMatchValue(200);

}

u8 RTOS_u8CreateTask ( u8 Copy_u8Priority , u16 Copy_u16Periodicity , u16 Copy_u16FirstDelay ,void (*Copy_PF)(void) )
{
    u8 Local_ErrorState = OK ;      // For Erros State
    if ( Copy_u8Priority < RTOS_u8_MAX_NUMBER_TASKS )
    {
        RTOS_ArrTasks[Copy_u8Priority].FirstDelay  = Copy_u16FirstDelay  ;
        RTOS_ArrTasks[Copy_u8Priority].Periodicity = Copy_u16Periodicity ;
        RTOS_ArrTasks[Copy_u8Priority].PF          = Copy_PF             ;
    }
    else
    {
        Local_ErrorState = NOK ;
    }
    return Local_ErrorState ;
}

static void RTOS_voidScheduler (void)
{
    // This Function Run Every each Interrupt
    u8 Local_u8TaskCounter ;
    // Loop on the ready Tasks
    for ( Local_u8TaskCounter = 0 ; Local_u8TaskCounter < RTOS_u8_MAX_NUMBER_TASKS ; Local_u8TaskCounter++ )
    {
        if ( RTOS_ArrTasks[Local_u8TaskCounter].FirstDelay == 0 )
        {
            // Call Task
            RTOS_ArrTasks[Local_u8TaskCounter].PF () ;
            // Update Fisrt Delay Value by Periodicity
            RTOS_ArrTasks[Local_u8TaskCounter].FirstDelay = RTOS_ArrTasks[Local_u8TaskCounter].Periodicity - 1 ;
        }
        else
        {
            RTOS_ArrTasks[Local_u8TaskCounter].FirstDelay -- ;
        }    
    }
    
}
