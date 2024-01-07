/*
 * MAIN.C


 *
 *  Created on: Aug 13, 2023
 *      Author: MARWAN WAEL
 */
#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"
#include "../HAL/LCD/LCD.h"
#include "../MCAL/DIO/DIO.h"
#include "../HAL/KPD/KPD.h"
#include "../MCAL/TIMER/TIMER.h"
#include "../MCAL/GIE/GIE.h"
#include "../MCAL/USART/USART.h"
#include "../MCAL/USART/USART_config.h"
#include "util/delay.h"

#define F_CPU 8000000UL

void main (void)
{
	DIO_SetPinDirection(DIO_PORTD , DIO_PIN0 , DIO_INPUT); //RX
	DIO_SetPinDirection(DIO_PORTD , DIO_PIN1 , DIO_OUTPUT); //TX
	DIO_SetPinDirection(DIO_PORTA , DIO_PIN0 , DIO_OUTPUT);//Led 1
	DIO_SetPinValue(DIO_PORTA , DIO_PIN0 , DIO_LOW);

	USART_voidInit();




	while(1)
		{
			    u8 x =USART_U8ReceiveData();
				if(x=='1')
				{
					DIO_SetPinValue(DIO_PORTA , DIO_PIN0 , DIO_HIGH);
				}
				else if(x=='2')
				{
					DIO_SetPinValue(DIO_PORTA , DIO_PIN0 , DIO_LOW);
				}
		}
}





