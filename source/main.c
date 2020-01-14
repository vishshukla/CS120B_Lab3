/*	Author: vshuk003
 *  Partner(s) Name: Nicole Nguyen
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
	unsigned char tmpB = 0x00;
	unsigned char button = 0x00;
    /* Insert your solution below */
    while (1) {
	button = PINA & 0x01;
	
	if(button == 0x01) {
		tmpB = (tmpB & 0xFC) | 0x01;
	} else {
		tmpB = (tmpB & 0xFC) | 0x02;
	}
	
	PORTB = tmpB;	
    }
    return 1;
}
