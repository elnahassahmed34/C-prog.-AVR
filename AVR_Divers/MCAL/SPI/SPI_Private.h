/*
 * SPI_Private.h
 *
 *  Created on: Apr 12, 2023
 *      Author: abdelrhman
 */

#ifndef MCAL_SPI_SPI_PRIVATE_H_
#define MCAL_SPI_SPI_PRIVATE_H_


#define SPDR_REG 	 *((volatile u8*)0x2F)//SPI DATA REG


#define SPSR_REG 	 *((volatile u8*)0x2E)
#define SPSR_SPIF		7
#define	SPSR_WCOL		6
#define	SPSR_SPI2X		0

#define SPCR_REG 	 *((volatile u8*)0x2D)
#define SPCR_SPIE	7
#define SPCR_SPE 	6
#define SPCR_DORD   5
#define SPCR_MSTR   4 // MASTER MODE
#define SPCR_CPOL   3
#define SPCR_CPHA   2
#define SPCR_SPR1   1
#define SPCR_SPR0   0




#endif /* MCAL_SPI_SPI_PRIVATE_H_ */
