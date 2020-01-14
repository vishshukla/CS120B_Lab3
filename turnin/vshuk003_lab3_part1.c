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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	unsigned char count = 0x00;

    /* Insert your solution below */
    while (1) {
	// Read input
	tmpA = PINA & 0xFF;
	tmpB = PINB & 0xFF;
	count = 0x00;
	
	while (tmpA) {
		count += tmpA & 0x01;
		tmpA >>= 1;
	}

	while (tmpB) {
		count += tmpB & 0x01;
		tmpB >>= 1;
	}
	
	PORTC = count;	
    }
return 0;
}
