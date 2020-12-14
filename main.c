#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "uart0.h"



int main(void)
{
	usartInit();
	
	char str[] = "Hi Daniel\n\r";
	
	while(1)
	{
		printString(str);
		_delay_ms(1000);
	}
}
