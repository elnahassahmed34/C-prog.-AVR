/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : EEPROM                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"

#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_

void EEPROM_voidSendDataByte(u16 Copy_u16LocationAddress , u8 Copy_dataByte);

u8 EEPROM_u8ReadDataByte(u16 LocationAddress);


#endif
