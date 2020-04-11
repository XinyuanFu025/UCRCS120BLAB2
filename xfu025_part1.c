/*	Author: XinayuanFu
 *  Partner(s) Name: 
 *	Lab Section:027
 *	Assignment: Lab 2  Exercise 1
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
     DDRA = 0x00;  PORTA = 0xFF; //A0,A1 input
     DDRB = 0xFF;  PORTB = 0x00; //B0 output initial to zero
    /* Insert your solution below */
    while (1) {
      switch(PINA){
           case 0xFC:
                 PORTB = 0x00;  //1 
		       break;
           case 0xFD:
		 PORTB = 0x01;  //2
		       break;
	   case 0xFE:
		 PORTB = 0x00;  //3
		       break;
           case 0xFF:
		 PORTB = 0x00;  //4
		       break;
	   default: 
		 PORTB = 0x00;  //5
	               break;
                   }
      
    }
    return 1;
}
