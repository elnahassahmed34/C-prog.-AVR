#include <stdio.h>
#include <stdlib.h>
#include<avr/io.h>
#include <avr/delay.h>

int main()
{
DDRA = 0b11111111 ;
DDRB = 0b00000000 ;
PORTB = 0b11111111 ;
while (1)
{
	if ((PINB & 0b00000001)==0){
		PORTA = 0b00000001 ;

	}
	else {
		PORTA = 0b00000000 ;
	}

	return  0;
}
