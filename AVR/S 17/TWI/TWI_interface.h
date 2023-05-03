/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : TWI                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"


#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_

#define OK  1
#define NOK 0

typedef enum{
	NoEroor ,
	StartConditionEroor,
	RepeatedStartEroor,
	SlaveAddressWithWriteError,
	SlaveAddressWithReadError,
	MasterWriteByteEroor,
	MasterReadByteEroor,

}TWI_ErrStatus;

//pass 0 in the slave address
void TWI_voidMasterInit(u8 Copy_u8SlaveAddress);

void TWI_u8SlaveInit(u8 Copy_u8SlaveAddress);

TWI_ErrStatus TWI_SendStartCondition(void);

TWI_ErrStatus TWI_SendRepeatedStartCondition(void);

TWI_ErrStatus TWI_SendSlaveAddressWithWrite(u8 Copy_u8SlaveAddress);

TWI_ErrStatus TWI_SendSlaveAddressWithRead(u8 Copy_u8SlaveAddress);

TWI_ErrStatus TWI_MasterSendDataByte(u8 Copy_u8SendData);

TWI_ErrStatus TWI_MasterReadDataByte(u8 *Copy_pu8ReadData);

void TWI_SendStopCondition(void);


#endif
