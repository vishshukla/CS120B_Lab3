/*	Author: vshuk003
 *  Partner(s) Name: Nicole Nguyen
 *	Lab Section: 23
 *	Assignment: Lab 3  Exercise 1
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
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char tmpC = 0x00;

    /* Insert your solution below */
    while (1) {
	// Read input
	tmpA = PINA & 0xFF;
	tmpC = 0xFF;
	
	if ((tmpA & 0x01) | 0x02) {
		tmpC = tmpC & 0x60;
	} else if ((tmpA & 0x03) | 0x04) {
		tmpC = tmpC & 0x70;
	} else if ((tmpA & 0x05) | 0x06) {
		tmpC = tmpC & 0x38;
	} else if ((tmpA & 0x07) | 0x08 | 0x09) {
		tmpC = tmpC & 0x3C;
	} else if ((tmpA & 0x0A) | 0x0B | 0x0C) {
		tmpC = tmpC & 0x3E;
	} else { // if ((tmpA & 0x0D) | 0x0E | 0x0F) {
		tmpC = tmpC & 0x3F;
	
	PORTC = tmpC;	
    }
return 0;
}
