/*
 * main.c
 *
 * Created: 3/30/2023 3:15:01 PM
 *  Author: Amr
 */ 

#include <xc.h>
#include <avr/interrupt.h>
#include <util/delay.h>



#define IO_BASE 0x20
#define IO_PORTD *(volatile unsigned int*)(IO_BASE + 0x12)
#define IO_DDRD *(volatile unsigned int*)(IO_BASE + 0x11)
#define INT_MCUCR *(volatile unsigned int*)(IO_BASE + 0x35)
#define INT_GICR *(volatile unsigned int*)(IO_BASE + 0x3B)
#define INT_MCUCSR *(volatile unsigned int*)(IO_BASE + 0x34)
#define SREG *(volatile unsigned int*)(IO_BASE + 0x3F)

void INIT_MCUCR(){
	INT_MCUCR |= (0b1101 << 0);
}

void INIT_MCUCSR(){
	INT_MCUCSR |= (0<<6);
}
void INIT_SREG(){
	SREG |= (1<<7);
}
void INIT_GICR(){
	INT_GICR |= (1<<5);
	INT_GICR |= (1<<6);
	INT_GICR |= (1<<7);
}

void INIT_DDRD(){
	DDRD |= (1<<5);
	DDRD |= (1<<6);
	DDRD |= (1<<7);
	
}



int main(void)
{
INIT_MCUCR();	
INIT_MCUCSR();
INIT_GICR();
INIT_DDRD();
INIT_SREG();
    while(1)
    {
		IO_PORTD |= (0<<5);
		IO_PORTD |= (0<<6);
		IO_PORTD |= (0<<7);
	 }
}


ISR(INT0_vect)
{
		IO_PORTD |= (1<<5);
		_delay_ms(100);
}


ISR(INT1_vect)
{
	IO_PORTD |= (1<<6);
	_delay_ms(100);
}

ISR(INT2_vect)
{
	IO_PORTD |= (1<<7);
	_delay_ms(100);
}


