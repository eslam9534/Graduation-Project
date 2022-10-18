#ifndef SERVO_INTERFACE_H_
#define SERVO_INTERFACE_H_

//TIMER 1 FUNCTIONS
void SERVO_timer1Init(void);
void SERVO_timer1start(void);
void SERVO_timer1stop(void);
void SERVO_timer1_A_setCompareValue(u16 OCR1A_value);
void SERVO_setServoAngle(u8 angle);

#endif /* SERVO_INTERFACE_H_ */