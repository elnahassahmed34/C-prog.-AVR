#include <stdio.h>
#include <stdlib.h>
#include<avr/io.h>
#include <avr/delay.h>

int main()
{
	//Set the direction output
	DDRA = 0b11111111 ;


	while(1)
	{
		for(int i = 0 ; i<9 ; i++)
		{
			//set pin 0 high in port a
			PORTA = (1<<i) ;
			_delay_ms(500);
		}
		PORTA = 0 ;
		_delay_ms(500);
	}


	return 0 ;
}
