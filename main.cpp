#include "Led.h"

void delay ();

int main(void)
{
	Led blueLed(GPIOC, GPIO_Pin_8, true);
	Led greenLed(GPIOC, GPIO_Pin_9);

    while(1)
    {
    	blueLed.tougle();
    	greenLed.setState(true);
    	delay();

    	blueLed.tougle();
    	greenLed.setState(false);
    	delay();
    }
}

void delay ()
{
	for (volatile int i = 0; i < 500000; ++i) {	}
}

void assert_failed(uint8_t* file, uint32_t line)
{
	while(true);
}
