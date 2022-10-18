//UTILS
#include "ATMEGA32_REG.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"

//TIMER 1 FUNCTIONS
void SERVO_timer1Init(void)
{
	//CHOSING FAST PWM
	CLR_BIT(TCCR1A, 0);
	SET_BIT(TCCR1A, 1);
	SET_BIT(TCCR1B, 3);
	SET_BIT(TCCR1B, 4);
	//NON-INVERTING MODE
	CLR_BIT(TCCR1A, 6);
	SET_BIT(TCCR1A, 7);
	//SET PERIOD TIME FOR SERVO
	ICR1_u16 = 4999;
}
void SERVO_timer1start(void)
{
	//PRESCALER = 64
	SET_BIT(TCCR1B, 0);
	SET_BIT(TCCR1B, 1);
	CLR_BIT(TCCR1B, 2);
}
void SERVO_timer1stop(void)
{
	CLR_BIT(TCCR1B, 0);
	CLR_BIT(TCCR1B, 1);
	CLR_BIT(TCCR1B, 2);
}
void SERVO_timer1_A_setCompareValue(u16 OCR1A_value)
{
	OCR1A_u16 = OCR1A_value;
}
void SERVO_setServoAngle(u8 angle)
{
	if(angle == 90)
	{
		SERVO_timer1_A_setCompareValue(500);
	}
	else if(angle == -90)
	{
		SERVO_timer1_A_setCompareValue(200);
	}
	else if(angle == 0)
	{
		SERVO_timer1_A_setCompareValue(375);
	}
}