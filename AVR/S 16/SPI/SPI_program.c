/****************************************************/
/****************************************************/
/**********    Author : Ahmed Elnahass     **********/
/**********    Layer : MCAL                **********/
/**********    SWC : SPI                   **********/
/**********    Version : 1.00              **********/
/****************************************************/
/****************************************************/

#include "..\..\LIB\STD_TYPES.h"
#include "..\..\LIB\BIT_MATH.h"
#include <util/delay.h>

#include "..\../MCAL/DIO/DIO_Interface.h"

#include"SPI_config.h"
#include"SPI_private.h"
#include"SPI_interface.h"

void SPI_voidMasterInit(void)
{
	//Select Master Mode
	SET_BIT(SPI_SPCR_REG , 4);

	//Select MSB to be send first
	CLR_BIT(SPI_SPCR_REG , 5);

	//Select Rising Edge
	CLR_BIT(SPI_SPCR_REG , 3);

	//Sampling at leading edge
	CLR_BIT(SPI_SPCR_REG , 2);

	//Select Prescaller /16
	SET_BIT(SPI_SPCR_REG , 0);
	CLR_BIT(SPI_SPCR_REG , 1);
	CLR_BIT(SPI_SPSR_REG , 0);

	//Enable SPI
	SET_BIT(SPI_SPCR_REG , 6);

}

void SPI_voidSlaveInit(void)
{
	//Select Slave Mode
	CLR_BIT(SPI_SPCR_REG , 4);

	//Select MSB to be send first
	CLR_BIT(SPI_SPCR_REG , 5);

	//Select Rising Edge
	CLR_BIT(SPI_SPCR_REG , 3);

	//Sampling at leading edge
	CLR_BIT(SPI_SPCR_REG , 2);

	//Enable SPI
	SET_BIT(SPI_SPCR_REG , 6);

}

u8 SPI_u8TrasfereRecieve(u8 Copy_u8Data)
{

	//Set the data to reg
	SPI_SPDR_REG = Copy_u8Data ;

	//Polling on flag intil data is trnsmiited
	while((GET_BIT(SPI_SPSR_REG , 7))==0);

	//clear flag
	SET_BIT(SPI_SPSR_REG , 7);

	//read data
	return SPI_SPDR_REG ;

}






