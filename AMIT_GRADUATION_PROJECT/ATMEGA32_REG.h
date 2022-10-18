#ifndef ATMEGA32_REG_H_
#define ATMEGA32_REG_H_
//DIO REGISTERS
#define DDRA (*(volatile u8*)0X3A)
#define DDRB (*(volatile u8*)0X37)
#define DDRC (*(volatile u8*)0X34)
#define DDRD (*(volatile u8*)0X32)

#define PORTA (*(volatile u8*)0X3B)
#define PORTB (*(volatile u8*)0X38)
#define PORTC (*(volatile u8*)0X35)
#define PORTD (*(volatile u8*)0X32)

#define PINA (*(volatile u8*)0X39)
#define PINB (*(volatile u8*)0X36)
#define PINC (*(volatile u8*)0X33)
#define PIND (*(volatile u8*)0X30)

//INTERRUPT REGISTERS

#define  MCUCR	(*(volatile u8*)0X55)
#define  MCUCSR	(*(volatile u8*)0X54)
#define  GICR	(*(volatile u8*)0X5B)
#define  GIFR	(*(volatile u8*)0X5A)
#define  SREG	(*(volatile u8*)0X5F)

//ADC REGISTERS

#define ADMUX	(*(volatile u8*)0X27)
#define ADCSRA	(*(volatile u8*)0X26)
#define ADCH	(*(volatile u8*)0X25)
#define ADCL	(*(volatile u8*)0X24)
#define ADC_u16	(*(volatile u16*)0X24)
#define SFIOR	(*(volatile u8*)0X50) 


							/*TIMER REGISTERS*/
//TIMER 0
#define TCCR0	(*(volatile u8*)0X53)
#define TCNT0	(*(volatile u8*)0X52)
#define OCR0	(*(volatile u8*)0X5C)
#define TIMSK	(*(volatile u8*)0X59)
#define TIFR	(*(volatile u8*)0X58)

//TIMER 1 
#define	TCCR1A		(*(volatile u8*)0X4F)
#define	TCCR1B		(*(volatile u8*)0X4E)
#define	TCNT1L		(*(volatile u8*)0X4C)
#define	TCNT1H		(*(volatile u8*)0X4D)
#define	TCNT1_u16	(*(volatile u16*)0X4C)
#define	OCR1AL		(*(volatile u8*)0X4A)
#define	OCR1AH		(*(volatile u8*)0X4B)
#define	OCR1A_u16	(*(volatile u16*)0X4A)
#define	OCR1BL		(*(volatile u8*)0X48)
#define	OCR1BH		(*(volatile u8*)0X49)
#define	OCR1B_u16	(*(volatile u16*)0X48)
#define ICR1L		(*(volatile u8*)0X46)
#define ICR1H		(*(volatile u8*)0X47)
#define ICR1_u16	(*(volatile u16*)0X46)
#endif /* ATMEGA32_REG_H_ */