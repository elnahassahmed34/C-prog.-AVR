#include <stdio.h>
#include <stdlib.h>
#include<avr/io.h>
#include <avr/delay.h>
#include"STD_TYPES.h"

#define ZERO 	0b00111111
#define ONE		0b00000110
#define TWO		0b01011011
#define THREE	0b01001111
#define FOUR	0b01100110
#define FIVE	0b01101101
#define SIX		0b01111101
#define SEVEN	0b00000111
#define EIGHT	0b01111111
#define NINE 	0b01101111

int main()
{
	//Set the direction output
	DDRA = 0b11111111 ;
	u8 Arr_Number[10]={ZERO , ONE , TWO , THREE , FOUR , FIVE , SIX , SEVEN , EIGHT ,NINE }
	while(1)
	{
		for(int i = 0 ; i<10 ; i++)
		{
			//set pin 0 high in port a
			PORTA = Arr_Number[i] ;
			_delay_ms(500);
		}

	}


	return 0 ;
}
