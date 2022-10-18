/************************************************************************
*														   				*
*************************  DATE		:	17/09/2022   ********************
*************************  NAME		:	ESLAM EHAB   ********************
*************************  VERSION	:	1.0          ********************
*************************  SWC		:	BIT MATH     ********************
*																		*
************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"
#include "DIO_interface.h"

//PIN FUNCTIONS
void DIO_setPinDirection(u8 PortID, u8 PinID, u8 PinDirection)
{
	if ((PortID <= 3) && (PinID <= 7) && ((PinDirection == DIO_PIN_OUTPUT ) || (PinDirection == DIO_PIN_INPUT)))
	{
		switch (PortID){
			case DIO_PORTA:
			if(PinDirection == DIO_PIN_OUTPUT){
				SET_BIT(DDRA, PinID);
				}else{
				CLR_BIT(DDRA, PinID);
			}
			break;
			
			case DIO_PORTB:
			if(PinDirection == DIO_PIN_OUTPUT){
				SET_BIT(DDRB, PinID);
				}else{
				CLR_BIT(DDRB, PinID);
			}
			break;
			
			case DIO_PORTC:
			if(PinDirection == DIO_PIN_OUTPUT){
				SET_BIT(DDRC, PinID);
				}else{
				CLR_BIT(DDRC, PinID);
			}
			break;
			
			case DIO_PORTD:
			if(PinDirection == DIO_PIN_OUTPUT){
				SET_BIT(DDRD, PinID);
				}else{
				CLR_BIT(DDRD, PinID);
			}
			break;
			
		}
	}
}
void DIO_setPinValue(u8 PortID, u8 PinID, u8 PinValue)
{
	if((PortID<=3) && (PinID<=7) &&((PinValue == DIO_PIN_HIGH) || (PinValue == DIO_PIN_LOW)))
	{
		switch(PortID)
		{
			case DIO_PORTA:
			if(PinValue == DIO_PIN_HIGH){
				SET_BIT(PORTA, PinID);
				}else{
				CLR_BIT(PORTA, PinID);
			}
			break;
			
			case DIO_PORTB:
			if(PinValue == DIO_PIN_HIGH){
				SET_BIT(PORTB, PinID);
				}else{
				CLR_BIT(PORTB, PinID);
			}
			break;
			
			case DIO_PORTC:
			if(PinValue == DIO_PIN_HIGH){
				SET_BIT(PORTC, PinID);
				}else{
				CLR_BIT(PORTC, PinID);
			}
			break;
			
			case DIO_PORTD:
			if(PinValue == DIO_PIN_HIGH){
				SET_BIT(PORTD, PinID);
				}else{
				CLR_BIT(PORTD, PinID);
			}
			break;
		}
	}
}
void DIO_getPinValue	(u8 PortID, u8 PinID, u8* PinValue)
{
	if((PortID <=3) && (PinID <= 7) && (PinValue != NULL)){
		switch(PortID)
		{
			case DIO_PORTA:
			if(GET_BIT(PINA, PinID) == 1){
				*PinValue = 1;
			}
			else{
				*PinValue = 0;
			}
			break;
			
			case DIO_PORTB:
			if(GET_BIT(PINB, PinID) == 1){
				*PinValue = 1;
			}
			else{
				*PinValue = 0;
			}
			break;
			
			case DIO_PORTC:
			if(GET_BIT(PINC, PinID) == 1){
				*PinValue = 1;
			}
			else{
				*PinValue = 0;
			}
			break;
			
			case DIO_PORTD:
			if(GET_BIT(PIND, PinID) == 1){
				*PinValue = 1;
			}
			else{
				*PinValue = 0;
			}
			break;
		}
	}
}
void DIO_togglePinValue	(u8 PortID, u8 PinID)
{
	if((PortID <= 3) && (PinID <= 7)){
		switch(PortID)
		{
			case DIO_PORTA:
			TOG_BIT(PORTA, PinID);
			break;
			
			case DIO_PORTB:
			TOG_BIT(PORTB, PinID);
			break;
			
			case DIO_PORTC:
			TOG_BIT(PORTC, PinID);
			break;
			
			case DIO_PORTD:
			TOG_BIT(PORTD, PinID);
			break;
		}
	}
}

//PORT FUNCTIONS
void DIO_setPortDirection(u8 PortID, u8 PortDirection)
{
	if(PortID <= 3)
	{
		switch(PortID){
			case DIO_PORTA:
			DDRA = PortDirection;
			break;
			
			case DIO_PORTB:
			DDRB = PortDirection;
			break;
			
			case DIO_PORTC:
			DDRC = PortDirection;
			break;
			
			case DIO_PORTD:
			DDRD = PortDirection;
			break;
		}
	}
}
void DIO_setPortValue	(u8 PortID, u8 PortValue)
{
	if(PortID<=3){
		switch(PortID){
			case DIO_PORTA:
			PORTA = PortValue;
			break;
			
			case DIO_PORTB:
			PORTB = PortValue;
			break;
			
			case DIO_PORTC:
			PORTC = PortValue;
			break;
			
			case DIO_PORTD:
			PORTD = PortValue;
			break;
		}
	}
}
void DIO_getPortValue	(u8 PortID, u8* PortValue)
{
		if((PortID <= 3) && (PortValue != NULL)){
			switch(PortID){
				case DIO_PORTA:
				*PortValue = PINA;
				break;
				
				case DIO_PORTB:
				*PortValue = PINB;
				break;
				
				case DIO_PORTC:
				*PortValue = PINC;
				break;
				
				case DIO_PORTD:
				*PortValue = PIND;
				break;
			}
		}		
}
void DIO_togglePortValue	(u8 PortID){
	if(PortID <= 3){
		switch(PortID){
			case DIO_PORTA:
			PORTA = ~ PORTA;
			break;
			
			case DIO_PORTB:
			PORTB = ~ PORTB;
			break;
			
			case DIO_PORTC:
			PORTC = ~ PORTC;
			break;
			
			case DIO_PORTD:
			PORTD = ~ PORTD;
			break;
		}
	}
}
void DIO_setInternalPullupResistor(u8 PortID, u8 PinID)
{
	if((PortID<=3) && (PinID <= 7))
	{
		switch(PortID)
		{
			case DIO_PORTA:
			SET_BIT(PORTA, PinID);
			break;
			
			case DIO_PORTB:
			SET_BIT(PORTA, PinID);
			break;
			
			case DIO_PORTC:
			SET_BIT(PORTC, PinID);
			break;
			
			case DIO_PORTD:
			SET_BIT(PORTD, PinID);
			break;
		}
	}
}
void DIO_setPortInternalPullupResistor(u8 PortID)
{
	if(PortID <= 3)
	{
		switch(PortID)
		{
			case DIO_PORTA:
			PORTA = 0xff;
			break;
			
			case DIO_PORTB:
			PORTB = 0xff;
			break;
			
			case DIO_PORTC:
			PORTC = 0xff;
			break;
			
			case DIO_PORTD:
			PORTD = 0xff;
			break;
		}
	}
}