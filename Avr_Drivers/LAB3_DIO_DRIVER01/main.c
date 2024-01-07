/*
 * MAIN.C

 *
 *  Created on: Aug 13, 2023
 *      Author: MARWAN WAEL
 */
#include "avr/delay.h"
#include "DIO.h"
#define F_CPU 80000
void main (void)
{
	DIO_SetPinDirection(DIO_PORTA,DIO_PIN0,DIO_OUTPUT);
	while(1)
	{

		DIO_SetPinValue(DIO_PORTA,DIO_PIN0,DIO_HIGH);
		_delay_ms(1000);
		DIO_SetPinValue(DIO_PORTA,DIO_PIN0,DIO_LOW);
		_delay_ms(500);


	}

}

