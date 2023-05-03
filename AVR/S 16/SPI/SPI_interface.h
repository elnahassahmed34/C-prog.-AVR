/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : SPI                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

void SPI_voidMasterInit(void) ;

void SPI_voidSlaveInit(void) ;

u8 SPI_u8TrasfereRecieve(u8 Copy_u8Data) ;




#endif
