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
#include "../MCAL/SPI/SPI.h"
#include "../MCAL/SPI/SPI_config.h"
#include "../MCAL/TWI/TWI.h"
#include "../MCAL/TWI/TWI_config.h"
#include "../HAL/EEPROM/EEPROM.h"
#include "util/delay.h"

#define F_CPU 8000000UL

void main (void)
{

	u16 address=200;// page 1   .......   register 200
	u8 data= 0x0f;

	EEPROM_VoidInit();

	EEPROM_voidSendDataByte(address,data);


	while(1)
		{

		}
}





