/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : TIMER                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/


#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

#define TIMER0_SREG_REG  (*(volatile u8 *)(0x5F)) /*Global Status Reg*/
#define TIMER0_TIMSK_REG  (*(volatile u8 *)(0x59)) /*Timer interrupt control Reg*/
#define TIMER0_TCCR0_REG  (*(volatile u8 *)(0x53)) /*Register TCCR0 (Timer0 Control Reg)*/
#define TIMER0_TCNT0_REG  (*(volatile u8 *)(0x52)) /*Register TCNT0 (Timer 0 Reg)*/
#define TIMER0_OCR0_REG  (*(volatile u8 *)(0x5C)) /*Register OCR0  (Output compare 0 Reg)*/
#define TIMER0_TIFR_REG  (*(volatile u8 *)(0x58)) /*Register TIFR  (Flag Reg)*/

#define TIMER_NORMAL_MODE       0
#define TIMER_CTC_MODE          1
#define TIMER_FAST_PWM_MODE     2
#define TIMER_PHASE_CORCT_MODE  3


#endif
