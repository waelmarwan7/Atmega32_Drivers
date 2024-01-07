/*
 * MAIN.C


 *
 *  Created on: Aug 13, 2023
 *      Author: MARWAN WAEL
 */
#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"
#include "../MCAL/DIO/DIO.h"
#include "../MCAL/TIMER/TIMER.h"
#include "../MCAL/GIE/GIE.h"
#include "../MCAL/SCD/SCD.h"
#include "avr/io.h"
#define F_CPU 8000000UL

void RED_led (void);
void GREEN_led (void);
void YELLOW_led (void);

void main (void)
{

	    GIE_Enable();

	    TIMER0_voidInit();

	    TASK_CREATION(0,1000,&RED_led);
	    TASK_CREATION(1,12000,&GREEN_led);
	    TASK_CREATION(2,24000,&YELLOW_led);

		TIMER_u8SetCallBack(&ISR_TIMER0,10);

	while(1)
		{

		}

}




void RED_led (void)
{

	DIO_SetPinDirection(DIO_PORTA,DIO_PIN0,DIO_PORT_OUTPUT);
	TOG_BIT(PORTA,DIO_PIN0);

}
void GREEN_led (void)
{

	DIO_SetPinDirection(DIO_PORTA,DIO_PIN1,DIO_PORT_OUTPUT);
	TOG_BIT(PORTA,DIO_PIN1);

}
void YELLOW_led (void)
{

	DIO_SetPinDirection(DIO_PORTA,DIO_PIN2,DIO_PORT_OUTPUT);
	TOG_BIT(PORTA,DIO_PIN2);

}



