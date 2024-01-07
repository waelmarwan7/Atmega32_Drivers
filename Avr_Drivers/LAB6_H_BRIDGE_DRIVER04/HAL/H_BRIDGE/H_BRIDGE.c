/*
 * H_BRIDGE.c
 *
 *  Created on: Aug 16, 2023
 *      Author: user
 */

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "../../MCAL/DIO/DIO.h"
#include "H_BRIDGE.h"
#include "avr/io.h"

void MOTOR_Init(){
	DIO_SetPinDirection(MOTOR_PORT,MOTOR_ENA,DIO_OUTPUT);
	DIO_SetPinDirection(MOTOR_PORT,MOTOR_ENB,DIO_OUTPUT);
	DIO_SetPinDirection(MOTOR_PORT,MOTOR_IN1,DIO_OUTPUT);
	DIO_SetPinDirection(MOTOR_PORT,MOTOR_IN2,DIO_OUTPUT);
	DIO_SetPinDirection(MOTOR_PORT,MOTOR_IN3,DIO_OUTPUT);
	DIO_SetPinDirection(MOTOR_PORT,MOTOR_IN4,DIO_OUTPUT);


	DIO_SetPinValue(MOTOR_PORT,MOTOR_ENA,DIO_HIGH); //Enable motor A on H-bridge
	DIO_SetPinValue(MOTOR_PORT,MOTOR_ENA,DIO_HIGH); //Enable motor B on H-bridge
	DIO_SetPinValue(MOTOR_PORT,MOTOR_IN1,DIO_LOW);
	DIO_SetPinValue(MOTOR_PORT,MOTOR_IN2,DIO_LOW);
	DIO_SetPinValue(MOTOR_PORT,MOTOR_IN3,DIO_LOW);
	DIO_SetPinValue(MOTOR_PORT,MOTOR_IN4,DIO_LOW);
}
void MOTOR_CWDirection(u8 U8MotorId){
	switch(U8MotorId)
	{
		case MOTOR_1:
				{
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN2,DIO_LOW); //Turns off other switched direction
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN1,DIO_HIGH);//Turns on other switched direction
						break;
				}
		case MOTOR_2:
				{
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN4,DIO_LOW); //Turns off other switched direction
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN3,DIO_HIGH);//Turns on other switched direction
						break;
				}



	}
}
void MOTOR_CCWDirection(u8 U8MotorId){

	switch(U8MotorId)
	{
		case MOTOR_1:
				{
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN2,DIO_HIGH); //Turns off other switched direction
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN1,DIO_LOW);//Turns on other switched direction
						break;
				}
		case MOTOR_2:
				{
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN4,DIO_HIGH); //Turns off other switched direction
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN3,DIO_LOW);//Turns on other switched direction
						break;
				}



	}

}

void MOTOR_StopMotion(u8 U8MotorId){
	switch(U8MotorId)
	{
		case MOTOR_1:
				{
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN2,DIO_LOW); //Turns off other switched direction
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN1,DIO_LOW);//Turns on other switched direction
						break;
				}
		case MOTOR_2:
				{
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN4,DIO_LOW); //Turns off other switched direction
						DIO_SetPinValue(MOTOR_PORT,MOTOR_IN3,DIO_LOW);//Turns on other switched direction
						break;
				}



	}
}
