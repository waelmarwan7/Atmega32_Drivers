/*
 * DIO.H
 *
 *  Created on: Aug 10, 2023
 *      Author: MARWAN WAEL MAHMOUD ABBAS
 *      FILE : DIO.H
 */

#ifndef DIO_H_
#define DIO_H_

#include "STD_TYPES.h"
/* PORT DEFINES*/
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3


/*DEFINE PINS*/
#define DIO_PIN0  0
#define DIO_PIN1  1
#define DIO_PIN2  2
#define DIO_PIN3  3
#define DIO_PIN4  4
#define DIO_PIN5  5
#define DIO_PIN6  6
#define DIO_PIN7  7

/*PIN DIRECTION*/
#define DIO_OUTPUT 1
#define DIO_INPUT  0

/*PIN VALUES*/
#define DIO_HIGH  1
#define DIO_LOW   0


/* prototype of functioNS io pins*/
/* pin functions*/
void  DIO_SetPinValue (u8 U8PortIdcopy ,u8 U8PinIdCopy ,u8 U8PinValueCopy);
void  DIO_SetPinDirection (u8 U8PortIdcopy ,u8 U8PinIdCopy ,u8 U8PinDirCopy);
u8    DIO_GetPinValue  (u8 U8PortIdCopy , u8 U8PinIdCopy);


/*port functions*/
void  DIO_SetPortValue (u8 U8PortIdcopy ,u8 U8PinValueCopy);
void  DIO_SetPortDirection (u8 U8PortIdcopy ,u8 U8PinDirCopy);





#endif /* DIO_H_ */
