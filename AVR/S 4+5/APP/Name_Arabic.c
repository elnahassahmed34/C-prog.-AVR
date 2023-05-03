#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/LCD/LCD_Interface.h"


int main()
{
	LCD_voidInit();


	u8 First[8] ={
			  0x00,
			  0x00,
			  0x01,
			  0x00,
			  0x01,
			  0x01,
			  0x1F,
			  0x00
			};

	u8 Second[8]={
			  0x00,
			  0x00,
			  0x00,
			  0x00,
			  0x0C,
			  0x02,
			  0x1F,
			  0x00
			};

	u8 Third[8]={
			  0x00,
			  0x00,
			  0x08,
			  0x08,
			  0x08,
			  0x08,
			  0x0F,
			  0x00
			};

	u8 Fourth[8]={
			  0x00,
			  0x00,
			  0x00,
			  0x05,
			  0x07,
			  0x14,
			  0x1C,
			  0x00
			};


	while(1)
	{

		LCD_voidWriteSpecialCharacter(First,1,0,4);
		LCD_voidWriteSpecialCharacter(Second,2,0,3);
		LCD_voidWriteSpecialCharacter(Third,3,0,2);
		LCD_voidWriteSpecialCharacter(Fourth,4,0,1);


	}



	return 0 ;
}
