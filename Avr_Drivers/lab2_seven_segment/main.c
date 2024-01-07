/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: user
 */

/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: user
 */
#include <stdio.h>
#include "..\drivers\STD_TYPES.H"
#include "avr\io.h"
#include "avr\delay.h"
#define  F_CPU  8000000;
void main(void)
{
	DDRA=255;


	while(1)
	{

		PORTA=0x3f;

		_delay_ms(1000);

		PORTA=0x06;

		_delay_ms(1000);


		PORTA=0x5B;

		_delay_ms(1000);

		PORTA=0x4f;

		_delay_ms(1000);

		PORTA=0x66;

		_delay_ms(1000);

		PORTA=0x6c;

		_delay_ms(1000);

		PORTA=0x7c;

		_delay_ms(1000);

		PORTA=0x07;

		_delay_ms(1000);
		PORTA=0x7f;

		_delay_ms(1000);

		PORTA=0x6f;

		_delay_ms(1000);
	}
}


