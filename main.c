#include <stdlib.h>
#include <avr/io.h>
//#define F_CPU 8000000UL
//#include <util/delay.h>


#define LED3_AUS PORTD &= ~(1<<PD3);	//löscht bit PD3
#define LED3_EIN PORTD |= (1<<PD3);		//setzt PD3

volatile uint16_t x, y;

int main(void)
{
	
	
	
	DDRD = 0xFF;	//Port D als Ausgang setzen
	PORTD = 0x00;	// alle Pins an Port D auf high setzen
	
		
		
	
	while(1)
	{
		PORTD |= (1<<PD6);
		
		
		for(x=0;x<50000;x++)
		{
			y=2;
		}
		//_delay_ms(500);
		
		PORTD &= ~(1<<PD6);
		
		for(x=0;x<50000;x++);
		for(x=0;x<50000;x++);
		for(x=0;x<50000;x++);
		for(x=0;x<50000;x++);
		for(x=0;x<50000;x++);
		for(x=0;x<50000;x++);
		//_delay_ms(500);
		
	}//end of while
	
	return 0;
}//end of main
