#include <avr/io.h>
#include <avr/delay.h>

int main()
{

   DDRA = 0xff;
   DDRD = 0x00;
   PORTD = 0b11111111;
   while (1)
   {
      if( (PIND & 0b00000001) == 0)
      {
    	  PORTA = 0xff;
    	  _delay_ms(100);
    	  PORTA = 0x00;
    	  _delay_ms(100);
      }

      else if ( (PIND & 0b00000010) == 0)
      {
    	  for(int i=0;i<8;i++)
    	    {
    	  	 PORTA |= (1<<i) ;
    	  	  _delay_ms(100);
    	  	 PORTA = 0x00;
    	  	_delay_ms(100);
            }

      }
      else if ((PIND & 0b00000100) == 0)
      {
    	  for(int i=7;i>=0;i--)
    	   {
      	  	 PORTA |= (1<<i) ;
      	  	  _delay_ms(100);
      	  	 PORTA = 0x00;
       	  	_delay_ms(100);
    	    }
      }
      else if ((PIND & 0b00001000) == 0)
      {
        for (int i=0;i<8;i++)
        {
        	if((i%2) == 0)
        	{
        		 PORTA |= (1<<i) ;
        		 _delay_ms(500);
        	}
        	else
        	{
        		 PORTA = 0x00;
        		_delay_ms(500);
        	}
        }
      }
        else if ((PIND & 0b00010000) == 0)
        {
        	for (int i=0;i<8;i++)
        	{
        		 PORTA |= (1<<i) ;
        		  _delay_ms(500);
        	}
        	PORTA = 0x00;
        	_delay_ms(500);
        }



   }
	return 0;
}
