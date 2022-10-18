//UTILS
#include "ATMEGA32_REG.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"
//MCAL
#include "DIO_interface.h"
//HAL
#include "DCM_interface.h"
#include "DCM_config.h"
#include "SERVO_interface.h"
int main(void)
{
	//SERVO 
	DIO_setPinDirection(DIO_PORTD, DIO_PIN5, DIO_PIN_OUTPUT);
	SERVO_timer1Init();
	SERVO_timer1start();
    //INTIALIZE MOTOR PINS
	DIO_setPinDirection(DCM_MOTOR_PORT, DCM_INT_1_PIN, DIO_PIN_OUTPUT);
	DIO_setPinDirection(DCM_MOTOR_PORT, DCM_INT_2_PIN, DIO_PIN_OUTPUT);
	DIO_setPinDirection(DCM_MOTOR_PORT, DCM_INT_3_PIN, DIO_PIN_OUTPUT);
	DIO_setPinDirection(DCM_MOTOR_PORT, DCM_INT_4_PIN, DIO_PIN_OUTPUT);
	//CALL ACTION
	DCM_moveForward();
	SERVO_setServoAngle(90);
    while (1) 
    {
		
    }
}

