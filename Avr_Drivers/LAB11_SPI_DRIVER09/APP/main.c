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
#include "util/delay.h"

#define F_CPU 8000000UL

void main (void)
{
	DIO_SetPinDirection(DIO_PORTB , DIO_PIN4 , DIO_OUTPUT);// SS PIN
	DIO_SetPinDirection(DIO_PORTB , DIO_PIN5 , DIO_OUTPUT);// MOSI PIN
	DIO_SetPinDirection(DIO_PORTB , DIO_PIN7 , DIO_OUTPUT);// SCK PIN ..
	DIO_SetPinDirection(DIO_PORTB , DIO_PIN6 , DIO_OUTPUT);// MISO PIN

	SPI_VoidInit();


	SPI_transceive('M');

	while(1)
		{

		}
}





