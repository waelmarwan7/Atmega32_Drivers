/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: user
 */
#include <stdio.h>
#include "STD_TYPES.H"
#include "avr\io.h"
#include "avr\delay.h"
#define  F_CPU  8000000;
void main(void)
{
	DDRA=0b00000001;


	while(1)
	{

		PORTA=0x01;

		_delay_ms(1000);

		PORTA=0x00;

		_delay_ms(1000);




	}
}

