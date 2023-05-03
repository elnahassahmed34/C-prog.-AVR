#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/LCD/LCD_Interface.h"


int main()
{
	LCD_voidInit();


	u8 Hamo[8] ={
			  0x0E,
			  0x11,
			  0x0E,
			  0x04,
			  0x1F,
			  0x04,
			  0x0A,
			  0x00
			};

	u8 Ball[8]={
			  0x00,
			  0x00,
			  0x00,
			  0x0E,
			  0x11,
			  0x11,
			  0x0E,
			  0x00
			};

	u8 x = 1 ;
	while(x)
	{
		LCD_voidGoToXY(0,3);
		LCD_voidSendString("Welcome To");
		_delay_ms(500);
		LCD_voidCLR();
		LCD_voidSendString("Hamoksha Project");
		_delay_ms(500);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,0);
		LCD_voidWriteSpecialCharacter(Ball,2,1,1);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,1);
		LCD_voidWriteSpecialCharacter(Ball,2,1,2);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,2);
		LCD_voidWriteSpecialCharacter(Ball,2,1,3);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,3);
		LCD_voidWriteSpecialCharacter(Ball,2,1,4);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,4);
		LCD_voidWriteSpecialCharacter(Ball,2,1,5);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,5);
		LCD_voidWriteSpecialCharacter(Ball,2,1,6);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,7);
		LCD_voidWriteSpecialCharacter(Ball,2,1,8);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidSendString("Haseb Ya Zaeem");
		_delay_ms(500);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,8);
		LCD_voidWriteSpecialCharacter(Ball,2,1,7);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,7);
		LCD_voidWriteSpecialCharacter(Ball,2,1,6);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,6);
		LCD_voidWriteSpecialCharacter(Ball,2,1,5);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,5);
		LCD_voidWriteSpecialCharacter(Ball,2,1,4);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,4);
		LCD_voidWriteSpecialCharacter(Ball,2,1,3);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,3);
		LCD_voidWriteSpecialCharacter(Ball,2,1,2);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,2);
		LCD_voidWriteSpecialCharacter(Ball,2,1,1);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,1);
		LCD_voidWriteSpecialCharacter(Ball,2,1,0);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidSendString("Htawrna Ya Zaeem");
		_delay_ms(500);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,0);
		LCD_voidWriteSpecialCharacter(Ball,2,1,1);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,1);
		LCD_voidWriteSpecialCharacter(Ball,2,1,2);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,2);
		LCD_voidWriteSpecialCharacter(Ball,2,1,3);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,3);
		LCD_voidWriteSpecialCharacter(Ball,2,1,4);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,4);
		LCD_voidWriteSpecialCharacter(Ball,2,1,5);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,5);
		LCD_voidWriteSpecialCharacter(Ball,2,1,6);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidWriteSpecialCharacter(Hamo,1,1,7);
		LCD_voidWriteSpecialCharacter(Ball,2,1,8);
		_delay_ms(200);
		LCD_voidCLR();

		LCD_voidGoToXY(0,2);
		LCD_voidSendString("Directed By");
		LCD_voidGoToXY(1,0);
		LCD_voidSendString("ROBERT B.WEIDE");
		_delay_ms(900);
		LCD_voidCLR();


		x=0;
	}



	return 0 ;
}
