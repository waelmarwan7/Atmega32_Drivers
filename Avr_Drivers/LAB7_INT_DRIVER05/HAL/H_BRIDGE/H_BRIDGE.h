/*
 * H_BRIDGE.h
 *
 *  Created on: Aug 16, 2023
 *      Author: user
 */

#ifndef HAL_H_BRIDGE_H_BRIDGE_H_
#define HAL_H_BRIDGE_H_BRIDGE_H_



//motor A on H-Bridge configuration
#define MOTOR_PORT 	DIO_PORTD
#define MOTOR_ENA	DIO_PIN0
#define MOTOR_ENB	DIO_PIN1
#define MOTOR_IN1	DIO_PIN2
#define MOTOR_IN2	DIO_PIN3
#define MOTOR_IN3	DIO_PIN4
#define MOTOR_IN4	DIO_PIN5


#define MOTOR_1	1
#define MOTOR_2	2

void MOTOR_Init(void);
void MOTOR_CWDirection(u8 U8MotorId);
void MOTOR_CCWDirection(u8 U8MotorId);
void MOTOR_StopMotion(u8 U8MotorId);


#endif /* HAL_H_BRIDGE_H_BRIDGE_H_ */
