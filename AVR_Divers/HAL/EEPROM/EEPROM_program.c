/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : EEPROM                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"
#include "..\..\LIB\BIT_MATH.h"
#include <util/delay.h>

#include "..\../MCAL/DIO/DIO_Interface.h"
#include "..\../MCAL/TWI/TWI_Interface.h"


#include"EEPROM_config.h"
#include"EEPROM_private.h"
#include"EEPROM_interface.h"


void EEPROM_voidSendDataByte(u16 Copy_u16LocationAddress , u8 Copy_dataByte)
{
	u8 Local_Add ;
	//fixed or with 0(a2) or with (msb in address)
	Local_Add = EEPROM_FIXED_Address | (A2_connection<<2) | (u8)(Copy_u16LocationAddress>>8);

	//send start condition
	TWI_SendStartCondition();

	//send the address packet
	TWI_SendSlaveAddressWithWrite(Local_Add);

	//send the rest bits of the location address
	TWI_MasterSendDataByte((u8)(Copy_u16LocationAddress));

	//send the data byte to memory location
	TWI_MasterSendDataByte(Copy_dataByte);

	//send stop condition
	TWI_SendStopCondition();

	//delay until write function is finished
	_delay_ms(10);

}

u8 EEPROM_u8ReadDataByte(u16 Copy_u16LocationAddress)
{

	//variable to readed data
	u8 data ;

	//fixed address
	u8 Local_Add ;
	//fixed or with 0(a2) or with (msb in address)
	Local_Add = EEPROM_FIXED_Address | (A2_connection<<2) | (u8)(Copy_u16LocationAddress>>8);

	//send start condition
	TWI_SendStartCondition();

	//send address with write operation
	TWI_SendSlaveAddressWithWrite(Local_Add);

	//send the rest 8 bits of the location address(10 bits)
	TWI_MasterSendDataByte((u8)(Copy_u16LocationAddress));

	//send reapeat start condition to change request into read
	TWI_SendRepeatedStartCondition();

	//send the address with read request
	TWI_SendSlaveAddressWithRead(Local_Add);

	//Get the data from memory
	TWI_MasterReadDataByte(&data);

	//send stop condition
	TWI_SendStopCondition();

	//delay until write function is finished
	_delay_ms(10);

	//return readed data
	return data ;

}




