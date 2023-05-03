#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <util/delay.h>
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/EXTI/EXTI_Interface.h"


#include "../HAL/KEYPAD/KPD_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/StepMotor/STP_interface.h"
#include "../HAL/DC_Motor/DCM_interface.h"


int main()
{
	u16 Password = 1234 ;
	u16 User_Pass , Try_Again=0 ;
	u8 pass1 , pass2 , pass3 , pass4 ;
	DCM_voidInit();
	STP_voidInit();
	KPD_voidInit();
	LCD_voidInit();

	jump :
	Try_Again++;
	while(1)
	{
		LCD_voidCLR();
		LCD_voidSendString("Welcome");
		_delay_ms(1000);
		LCD_voidCLR();
		LCD_voidSendString("Enter password");
		_delay_ms(1000);
		LCD_voidGoToXY(1,0);
		while(1)
		{
			pass1 = KPD_u8GetPressedKey();

			if((pass1!=0xff))
			{
				LCD_voidSendChar('*');
				break ;
			}

		}
		while(1)
		{
			pass2 = KPD_u8GetPressedKey();

			if((pass2!=0xff))
			{
				LCD_voidSendChar('*');
				break ;
			}

		}
		while(1)
		{
			pass3 = KPD_u8GetPressedKey();

			if((pass3!=0xff))
			{
				LCD_voidSendChar('*');
				break ;
			}

		}
		while(1)
		{
			pass4 = KPD_u8GetPressedKey();

			if((pass4!=0xff))
			{
				LCD_voidSendChar('*');
				break ;
			}

		}

		User_Pass = (pass1*1000+pass2*100+pass3*10+pass4);
		if((User_Pass!=Password)&&(Try_Again<3))
		{
			LCD_voidCLR();
			LCD_voidSendString("Wrong Password");
			_delay_ms(1000);
			LCD_voidCLR();
			LCD_voidSendString("Try again");
			_delay_ms(1000);
			goto jump ;
		}
		else if((User_Pass!=Password)&&(Try_Again=4))
		{
			LCD_voidCLR();
			LCD_voidSendString("NoMoreTries");
			_delay_ms(1000);
			break;
		}
		else if(User_Pass==Password)
		{
			LCD_voidCLR();
			LCD_voidSendString("Hello user");
			_delay_ms(1000);
			LCD_voidCLR();
			LCD_voidSendString("ForDC Press0");
			LCD_voidGoToXY(1,0);
			LCD_voidSendString("ForSTP Press1");

			u8 MotorChoose ;
			while(1)
			{
				MotorChoose = KPD_u8GetPressedKey();

				if((MotorChoose!=0xff)&&(MotorChoose==0))
				{
					LCD_voidCLR();
					LCD_voidSendString("Clockwise 0");
					LCD_voidGoToXY(1,0);
					LCD_voidSendString("AntiClock 1");

					u8 Direction1 ;
					while(1)
					{
						Direction1 = KPD_u8GetPressedKey() ;
						if((Direction1!=0xff)&&(Direction1==0))
						{
							LCD_voidCLR();
							DCM_voidDirection(ClockWise);
							LCD_voidSendString("DCMOTOR CLOCK");
						}
						else if((Direction1!=0xff)&&(Direction1==1))
						{
							LCD_voidCLR();
							DCM_voidDirection(AntiClockWise);
							LCD_voidSendString("DCMOTOR CLOCKWI");
						}

					}

				}
				else if((MotorChoose!=0xff)&&(MotorChoose==1))
				{
					u8 angle1 , angle2 , angle3 ;
					u16 Angle ;

					LCD_voidCLR();
					LCD_voidSendString("Angle Three D");
					_delay_ms(1000);
					LCD_voidGoToXY(1,0);
					while(1)
					{
						angle1 = KPD_u8GetPressedKey();

						if((angle1!=0xff))
						{
							LCD_voidSendNum(angle1);
							break ;
						}

					}
					while(1)
					{
						angle2 = KPD_u8GetPressedKey();

						if((angle2!=0xff))
						{
							LCD_voidGoToXY(1,1);
							LCD_voidSendNum(angle2);
							break ;
						}

					}
					while(1)
					{
						angle3 = KPD_u8GetPressedKey();

						if((angle3!=0xff))
						{
							LCD_voidGoToXY(1,2);
							LCD_voidSendNum(angle2);
							break ;
						}

					}
					Angle = (angle1*100+angle2*10+angle3) ;

					LCD_voidCLR();
					LCD_voidSendString("Clockwise 0");
					LCD_voidGoToXY(1,0);
					LCD_voidSendString("AntiClock 1");

					u8 Direction2 ;
					while(1)
					{
						Direction2 = KPD_u8GetPressedKey() ;
						if((Direction2!=0xff)&&(Direction2==0))
						{
							LCD_voidCLR();
							STP_voidDirectionAngle(ClockWise,Angle);
							LCD_voidSendString("STPMOTOR");
						}
						else if((Direction2!=0xff)&&(Direction2==1))
						{
							LCD_voidCLR();
							STP_voidDirectionAngle(ClockWise,Angle);
							LCD_voidSendString("STPMOTOR");
						}

					}

				}

			}

		}





		break ;
	}

	return 0 ;
}
