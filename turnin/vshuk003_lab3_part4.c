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
	DDRB = 0xFF; PORTB = 0x00;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0xFF;
	unsigned char tmpC = 0xFF;

    /* Insert your solution below */
    while (1) {
	// Read input
	tmpA = PINA & 0xFF;

	tmpB = (tmpA & 0xFF) >> 4;
	tmpC = (tmpA & 0xFF) << 4;

	PORTB = tmpB;
	PORTC = tmpC;
    }
return 0;
}
