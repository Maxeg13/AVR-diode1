 
#include <avr/io.h>
 
#define F_CPU 4000000UL
#include <util/delay.h>
#define byte uint8_t
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
DDRB = 0b00000011;
byte t=0;
byte k=0;
byte i[2]={5,105};
byte j[2]={0,0};
byte r[2]={1,1};

 while(1)
	 {
	 
	 
	 for( k=0;k<5;k++)
		{
		if(r[k])i[k]++;
		else i[k]--;
		j[k]=200-i[k];


		if(i[k]==200)
		r[k]=0;

		if(i[k]==2)
		r[k]=1;
		}
		
		
		for( t=0;t<200;t++)
			{
			_delay_us(100);
			for( k=0;k<5;k++)
			{

			
			if(i[k]==t)
			rstPin(k);
			
			if(t==199)
			setPin(k);
			}
			}
		
	 }
 }
 
 
 /*
int main()
{
uint8_t i=5;
uint8_t j=200;
uint8_t r=1;
    DDRB = 0b00001000;		// Configure port C as output



 
    while(1)
    {
if(r)i++;
else i--;
j=200-i;


if(i==200)
r=0;

if(i==2)
r=1;



        PORTB= 0x08;	// Turn ON LEDs
        for(int t=0;t<i;t++)
        _delay_us(100); // Wait 250ms
        PORTB = 0x00;	// Turn OFF LEDs
        for(int t=0;t<j;t++)
        _delay_us(100);	// Wail 250ms
	}		
 
    return 0;
}*/