/*
 * SPI_Interface.h
 *
 *  Created on: Apr 12, 2023
 *      Author: abdelrhman
 */

#ifndef MCAL_SPI_SPI_INTERFACE_H_
#define MCAL_SPI_SPI_INTERFACE_H_

void SPI_MasterInit(void);
void SPI_SlaveInit(void);
u8   SPI_u8Tranceive(u8 Copu_u8Data);

#endif /* MCAL_SPI_SPI_INTERFACE_H_ */
