/*
 * MAIN.C


 *
 *  Created on: Aug 13, 2023
 *      Author: MARWAN WAEL
 */

#include "../LIB/STD_TYPES.h"
#include "../HAL/LCD/LCD.h"
#include "../MCAL/DIO/DIO.h"
#include "../HAL/KPD/KPD.h"
#include "util/delay.h"

#define F_CPU 8000000UL
void main (void)
{
	LCD_Voidinit();
	KEYPAD_VoidInit();
	while(1)
	{



			LCD_voidSendData("STAAART....");

			_delay_ms(2000);

			LCD_VoidSendCommand(CLEAR);

	}

}

