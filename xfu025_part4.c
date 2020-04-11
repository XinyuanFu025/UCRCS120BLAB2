/*	Author: XinyuanFu
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #4
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
#include <math.h>

int main(void) {
   DDRA = 0x00; PORTA = 0xFF;
   DDRB = 0x00; PORTB = 0xFF;
   DDRC = 0x00; PORTC = 0xFF;
   DDRD = 0xFF; PORTD = 0x00;
   unsigned char tot = 0x00;
    unsigned char wa = 0x00;
    unsigned char wb = 0x00;
    unsigned char wc = 0x00;
    signed char  balance = 0x00;
    unsigned char balhex;
    while (1) {
	  balhex = 0x00;
    wa = PINA; wb = PINB; wc = PINC;
    tot = wa + wb + wc;
    balance = wa - wc;
    if (balance < 0){balance  = -balance;}
    if (balance > 0x50){balhex = 0x02;}
    if (tot > 140) {balhex = (balhex | 0x01);}
    tot = tot<<2;
    PORTD = (tot | balhex);
   
         }//while
    return 1;
}
