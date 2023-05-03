

int main()
{
	DIO_voidSetPinDirection(PORTA , PIN0 , OUTPUT);
	DIO_voidSetPinDirection(PORTD , PIN0 , INPUT);
	DIO_voidSetPinDirection(PORTD , PIN1 , OUTPUT);
	DIO_voidSetPinvalue(PORTA , PIN0 , LOW);
	UART_voidInit();
	UART_voidSendData('s');
	while(1)
	{


	}

}



int main()
{
	DIO_voidSetPinDirection(PORTA , PIN0 , OUTPUT);
	DIO_voidSetPinDirection(PORTD , PIN0 , OUTPUT);
	DIO_voidSetPinDirection(PORTD , PIN1 , INPUT);
	DIO_voidSetPinvalue(PORTA , PIN0 , LOW);
	u8 Recieved = 0 ;
	UART_voidInit();

	while(1)
	{
		UART_u8RecieveData(&Recieved);

		if(Recieved == 's')
		{
			DIO_voidSetPinvalue(PORTA , PIN0 , HIGH);
			_delay_ms(500);
			DIO_voidSetPinvalue(PORTA , PIN0 , LOW);
			_delay_ms(500);
		}
		else
		{
			DIO_voidSetPinvalue(PORTA , PIN0 , LOW);
		}

	}

}
