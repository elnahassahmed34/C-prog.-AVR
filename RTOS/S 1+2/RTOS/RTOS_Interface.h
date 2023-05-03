/*===================================================================================================*/
/*  File        : RTOS_Interface.h                                                                   */
/*  Description : This interface file includes RTOS Driver prototypes and declarations for Atmega32  */
/*  Author      : Ahmed Bahaa Taha Nasr. Embedded SW Engineer                                        */
/*  Date        : 19/4/2023                                                                          */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bahaa1/                                          */
/*  Git account : https://github.com/ahmedbahaa11                                                    */
/*  mail        : ahmedbahaataha7@gmil.com                                                           */
/*===================================================================================================*/

/* File Gaurd by ifndef & endif */
#ifndef RTOS_INTERFACE_H
#define RTOS_INTERFACE_H

void RTOS_voidInit (void);
u8 RTOS_u8CreateTask ( u8 Copy_u8Priority , u16 Copy_u16Periodicity , u16 Copy_u16FirstDelay ,void (*Copy_PF)(void) );


#endif