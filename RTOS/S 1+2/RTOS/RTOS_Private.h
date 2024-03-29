/*=================================================================================*/
/*  File        : RTOS_Private.h                                                   */
/*  Description : This Private file includes RTOS Driver macros for Atmega32       */
/*  Author      : Ahmed Bahaa Taha Nasr. Embedded SW Engineer                      */
/*  Date        : 19/4/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bahaa1/                        */
/*  Git account : https://github.com/ahmedbahaa11                                  */
/*  mail        : ahmedbahaataha7@gmil.com                                         */
/*=================================================================================*/

/* File Gaurd by ifndef & endif */
#ifndef RTOS_PRIVATE_H
#define RTOS_PRIVATE_H

/* Private Macros */

typedef struct {
    u16 FirstDelay ;
    u16 Periodicity ;
    void (*PF)(void) ;
}RTOS_TCB;                  // TCB Task Control Block
    
static void RTOS_voidScheduler (void);

#endif