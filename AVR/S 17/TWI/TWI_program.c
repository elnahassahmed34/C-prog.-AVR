/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : TWI                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"
#include "..\..\LIB\BIT_MATH.h"
#include <util/delay.h>

#include "../TWI/TWI_config.h"
#include "../TWI/TWI_interface.h"
#include "../TWI/TWI_private.h"
#include "..\../MCAL/DIO/DIO_Interface.h"



//pass 0 if not addressed
void TWI_voidMasterInit(u8 Copy_u8SlaveAddress)
{
	/*Set clock freq to 400kbps*/
	// SET TWBR with value
	TWBR_REG = 2 ;
	// Set prescaler = 0
	CLR_BIT(TWSR_REG , TWSR_TWPS0 );
	CLR_BIT(TWSR_REG , TWSR_TWPS1 );

	// Enable TWI
	SET_BIT(TWCR_REG , TWCR_TWEN);



	if(Copy_u8SlaveAddress !=0)
	{
		TWAR_REG = Copy_u8SlaveAddress<<1;
	}

}

void TWI_u8SlaveInit(u8 Copy_u8SlaveAddress)
{
	// Set Slave Address in (TWAR == add < 1 )
	TWAR_REG = Copy_u8SlaveAddress << 1 ;

	// Enable TWI
	SET_BIT(TWCR_REG , 2);



}

TWI_ErrStatus TWI_SendStartCondition(void)
{
	TWI_ErrStatus Local_ErrStatus = NoEroor ;

	//Send start condition on the bus
	SET_BIT(TWCR_REG , TWCR_TWSTA);

	//clear the interrupt flag to start previos operation
	SET_BIT(TWCR_REG , TWCR_TWINT);

	//wait until interrupt flag is raised
	while((GET_BIT(TWCR_REG , TWCR_TWINT))==0);

	if((TWSR_REG & 0xF8) != START_ACK)
	{
		Local_ErrStatus = StartConditionEroor ;
	}
	else
	{
		//do nothing
	}

	return Local_ErrStatus ;
}

TWI_ErrStatus TWI_SendRepeatedStartCondition(void)
{
	TWI_ErrStatus Local_ErrStatus = NoEroor ;

	//Send start condition on the bus
	SET_BIT(TWCR_REG , TWCR_TWSTA);

	//clear the interrupt flag to start previos operation
	SET_BIT(TWCR_REG , TWCR_TWINT);

	//wait until interrupt flag is raised
	while((GET_BIT(TWCR_REG , TWCR_TWINT))==0);

	if((TWSR_REG & 0xF8) != REP_START_ACK)
	{
		Local_ErrStatus = RepeatedStartEroor ;
	}
	else
	{
		//do nothing
	}

	return Local_ErrStatus ;
}


TWI_ErrStatus TWI_SendSlaveAddressWithWrite(u8 Copy_u8SlaveAddress)
{
	TWI_ErrStatus Local_ErrStatus = NoEroor ;

	//Clear the start condition bit
	CLR_BIT(TWCR_REG , TWCR_TWSTA);

	//set slave address in the 7 MSB in data reg
	TWDR_REG = Copy_u8SlaveAddress << 1 ;
	CLR_BIT(TWDR_REG,0); //for write

	//clear the interrupt flag to start previos operation
	SET_BIT(TWCR_REG , TWCR_TWINT);

	//wait until interrupt flag is raised
	while((GET_BIT(TWCR_REG , TWCR_TWINT))==0);

	if((TWSR_REG & 0xF8) != SLAVE_ADD_AND_WR_ACK)
	{
		Local_ErrStatus = SlaveAddressWithWriteError ;
	}
	else
	{
		//do nothing
	}


	return Local_ErrStatus ;

}

TWI_ErrStatus TWI_SendSlaveAddressWithRead(u8 Copy_u8SlaveAddress)
{
	TWI_ErrStatus Local_ErrStatus = NoEroor ;

	//Clear the start condition bit
	CLR_BIT(TWCR_REG , TWCR_TWSTA);

	//set slave address in the 7 MSB in data reg
	TWDR_REG = Copy_u8SlaveAddress << 1 ;
	CLR_BIT(TWDR_REG,1); //for read

	//clear the interrupt flag to start previos operation
	SET_BIT(TWCR_REG , TWCR_TWINT);

	//wait until interrupt flag is raised
	while((GET_BIT(TWCR_REG , TWCR_TWINT))==0);

	//check the operation status in the status reg
	if((TWSR_REG & 0xF8) != SLAVE_ADD_AND_RD_ACK)
	{
		Local_ErrStatus = SlaveAddressWithReadError ;
	}
	else
	{
		//do nothing
	}



	return Local_ErrStatus ;

}

TWI_ErrStatus TWI_MasterSendDataByte(u8 Copy_u8SendData)
{
	TWI_ErrStatus Local_ErrStatus = NoEroor ;

	//write the data byte
	TWDR_REG = Copy_u8SendData ;

	//clear the interrupt flag to start previos operation
	SET_BIT(TWCR_REG , TWCR_TWINT);

	//wait until interrupt flag is raised
	while((GET_BIT(TWCR_REG , TWCR_TWINT))==0);

	//check the operation status in the status reg
	if((TWSR_REG & 0xF8) != MSTR_WR_BYTE_ACK)
	{
		Local_ErrStatus = MasterWriteByteEroor ;
	}
	else
	{
		//do nothing
	}

	return Local_ErrStatus ;


}

TWI_ErrStatus TWI_MasterReadDataByte(u8 *Copy_pu8ReadData)
{
	TWI_ErrStatus Local_ErrStatus = NoEroor ;

	//Enable master generating  Acknowledge
	SET_BIT(TWCR_REG , TWCR_TWEA);

	//clear the interrupt flag to start the slave sending data
	SET_BIT(TWCR_REG , TWCR_TWINT);

	//wait until interrupt flag is raised
	while((GET_BIT(TWCR_REG , TWCR_TWINT))==0);

	//check the operation status in the status reg
	if((TWSR_REG & 0xF8) != MSTR_RD_BYTE_ACK)
	{
		Local_ErrStatus = MasterReadByteEroor ;
	}
	else
	{
		//read recieved data
		*Copy_pu8ReadData = TWDR_REG ;
	}

	return Local_ErrStatus ;

}

void TWI_SendStopCondition(void)
{
	//STOP condition
	SET_BIT(TWCR_REG ,TWCR_TWSTO);

	//clear the interrupt flag to start previos operation
	SET_BIT(TWCR_REG , TWCR_TWINT);

}

