 
#include <avr/io.h>
 
#define F_CPU 4000000UL
#include <util/delay.h>
#define byte int8_t
void setPin(byte i)
{
PORTB|=(1<<i);	// Turn ON LEDs
}


void rstPin(byte i)
{
PORTB&=~(1<<i);	// Turn ON LEDs
} 
 
 
int main()
{
uint8_t i=5;
uint8_t j=200;
uint8_t r=1;
	DDRB = 0b00000011;		// Configure port C as output


 
	while(1)
	{
if(r)i++;
else i--;
j=200-i;

if(i==200)
r=0;

if(i==2)
r=1;


		setPin(1);	// Turn ON LEDs
		for(int t=0;t<i;t++)
		_delay_us(100); // Wait 250ms
		rstPin(1);	// Turn OFF LEDs
		for(int t=0;t<j;t++)
		_delay_us(100);	// Wail 250ms
	}
 
	return 0;
}