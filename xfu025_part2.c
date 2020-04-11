/*	Author: XinyuanFu
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #2
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
   unsigned char num;
    /* Insert your solution below */
    while (1) {
        switch (PINA){
	  case 0xF0: num = 4; break; //0here
	  case 0xF1:  //1here
          case 0xF2:
          case 0xF4:
          case 0xF8:  num = 3; break;
	  case 0xF3:  //2here
          case 0xF5:
	  case 0xF6:
	  case 0xF9:
	  case 0xFA:
	  case 0xFC:  num = 2; break;
	  case 0xF7:  //3here
	  case 0xFB:
	  case 0xFD:
	  case 0xFE:  num = 1; break;
	  case 0xFF:  num = 0; break; //4here
	  default: num = 4; break;	      
	}// switch loop
          PORTC = num;
    } //while loop
    return 1;
}
