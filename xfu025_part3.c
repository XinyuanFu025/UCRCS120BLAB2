/*	Author: XinyuanFu
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #3
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
    DDRA = 0x00;  PORTA = 0xFF;
    DDRC = 0xFF;  PORTC = 0x00;

   
    while (1) {
    switch (PINA){
	  case 0xF0: PORTC = 0X04 ; break; //0here
	  case 0xF1:  //1here
          case 0xF2:
          case 0xF4:
          case 0xF8: PORTC = 0x03 ; break;
	  case 0xF3:  //2here
          case 0xF5:
	  case 0xF6:
	  case 0xF9:
	  case 0xFA:
	  case 0xFC: PORTC = 0x02 ; break;
	  case 0xF7:  //3here
	  case 0xFB:
	  case 0xFD:
	  case 0xFE: PORTC = 0x01 ; break;
	  case 0xFF: PORTC = 0x80 ; break; //4here
	  default: PORTC = 0x04; break;
     }//switch loop
    }//while loop
    return 1;
}
