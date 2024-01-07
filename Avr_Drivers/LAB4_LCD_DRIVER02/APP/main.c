/*
 * MAIN.C


 *
 *  Created on: Aug 13, 2023
 *      Author: MARWAN WAEL
 */

#include "../LIB/STD_TYPES.h"
#include "../HAL/LCD/LCD.h"
#include "../MCAL/DIO/DIO.h"
#include "util/delay.h"

#define F_CPU 8000000UL
void main (void)
{
	LCD_Voidinit();
	while(1)
	{

		LCD_voidSendData("start");

		_delay_ms(2000);
		LCD_VoidSendCommand(CLEAR);

	}

}

