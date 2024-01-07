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
#include "util/delay.h"

static u8 OVERFLOWS_COUNT=0;
void ISR_TIMER0 (void);

void main (void)
{

	DIO_SetPinDirection(DIO_PORTA,DIO_PIN0,DIO_OUTPUT);
	DIO_SetPinValue(DIO_PORTA,DIO_PIN0,DIO_LOW);

	GIE_Enable();
	TIMER0_Init();
	TIMER0_u8SetCallBack(&ISR_TIMER0);
	while(1)
	{


	}

}

void ISR_TIMER0 (void)
{
	OVERFLOWS_COUNT++;

	if(OVERFLOWS_COUNT==15625)
	{
		OVERFLOWS_COUNT=0;

		DIO_SetPinValue(DIO_PORTA,DIO_PIN0,DIO_HIGH);

		_delay_ms(1000);

		DIO_SetPinValue(DIO_PORTA,DIO_PIN0,DIO_LOW);


	}
}




