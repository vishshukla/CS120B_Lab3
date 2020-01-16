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
	DDRD = 0x00; PORTD = 0xFF;
	DDRB = 0xFE; PORTB = 0x01;
	unsigned char weight = 0x00;
	unsigned char output = 0x00;

    /* Insert your solution below */
    while (1) {
	// Read input
	weight = (PIND << 1) + (PINB & 0x01);

	if (weight >=70) {
		output = 0x02;
	} else if (weight > 5 && weight < 70){
		output = 0x04;
	}
	
	PORTB = (output | (PINB & 0x01));
	
    }
return 0;
}
