/*
 * SPI_Program.c
 *
 *  Created on: Apr 12, 2023
 *      Author: abdelrhman
 */
#include"../../LIB/BIT_MATH.h"
#include"../../LIB/STD_TYPES.h"


#include"SPI_Interface.h"
#include"SPI_Config.h"
#include"SPI_Private.h"

void SPI_MasterInit(void)
{
	//select master mode
	SET_BIT(SPCR_REG,SPCR_MSTR);
	// MSB OR LSB
	CLR_BIT(SPCR_REG,SPCR_DORD);
	// select Rising as leading edge
	CLR_BIT(SPCR_REG,SPCR_CPOL);
	//SELECT SAMPLE ON LEADING
	CLR_BIT(SPCR_REG,SPCR_CPHA);
	//SELECT PRESCALER
	SET_BIT(SPCR_REG,SPCR_SPR0);
	CLR_BIT(SPCR_REG,SPCR_SPR1);
	CLR_BIT(SPSR_REG,SPSR_SPI2X);
	//ENABLE SPI
	SET_BIT(SPCR_REG,SPCR_SPE);
}
void SPI_SlaveInit(void)
{
		CLR_BIT(SPCR_REG,SPCR_MSTR);
		// MSB OR LSB
		CLR_BIT(SPCR_REG,SPCR_DORD);
		// select Rising as leading edge
		CLR_BIT(SPCR_REG,SPCR_CPOL);
		//SELECT SAMPLE ON LEADING
		CLR_BIT(SPCR_REG,SPCR_CPHA);
		//ENABLE SPI
		SET_BIT(SPCR_REG,SPCR_SPE);

}
u8   SPI_u8Tranceive(u8 Copu_u8Data)
{
	//set the data to register
	SPDR_REG = Copu_u8Data ;
	while ((GET_BIT(SPSR_REG,SPSR_SPIF))==0);
	SET_BIT(SPSR_REG,SPSR_SPIF);
	return  SPDR_REG ;
}
