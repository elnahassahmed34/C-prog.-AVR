#include <avr/io.h>
#include <util/delay.h>
#include "STD_TYPES.h"

#define F_CPU 8000000UL
int main()
{
	u8 seg_arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	while(1)
	{
			u8 i;
			DDRC=0xFF;
			DDRB=0x0F;
		for(i=9 ; i>0; i--)
		{
			PORTB=0b0000001;
			PORTC = seg_arr[i];
			_delay_ms(1000);
		}

		for(i=3;i>0;i--)
		{
			PORTB=0b0000010;
			PORTC = seg_arr[i];
			_delay_ms(1000);
		}
		for(i=9;i>0;i--)
		{
			PORTB=0b0000100;
			PORTC = seg_arr[i];
			_delay_ms(1000);
		}
	}

}
