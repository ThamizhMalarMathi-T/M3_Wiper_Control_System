#include"Wiper_control.h"            
                             
#include<stdio.h>           

#include<stdint.h>        


int main(void)
{
uint32_t ACTION = 0;
uint32_t TRIGGER = 0;

void delay_loop(void)
{
	for (uint32_t j = 0; j < 30000000; j++)
		;
}
void wiper_ON(void) 
{
	GPIO_toggle(GPIOD, PIN_NO_11);
	delay_loop();
	GPIO_Output(GPIOD, PIN_NO_11,0 );
	GPIO_toggle(GPIOD, PIN_NO_12);
	delay_loop();
	GPIO_Output(GPIOD, PIN_NO_12,0 );
	GPIO_toggle(GPIOD, PIN_NO_13);
	delay_loop();
	GPIO_Output(GPIOD, PIN_NO_13,0 );
}
void wiper_OFF(void) 
	GPIO_toggle(GPIOD, PIN_NO_17);
	delay_loop();
	GPIO_output(GPIOD , PIN_NO_17, 0 );
}

while (1)                                                           
{
GPIO_OUT(GPIOA, GPIO_PIN_NO_0, DISABLE);
if (GPIO_IN(GPIOA, GPIO_PIN_NO_0) == ENABLE)
{
			
			ACTION++;
			if ((ACTION == 1) && (TRIGGER != 1))
			{
				Car_ON_state();
				TRIGGER = ACTION;
				ACTION = 0;
			}
			else if ((ACTION == 2) && (TRIGGER != 2))
			{
				Car_OFF_state();
				TRIGGER = ACTION;
				ACTION = 0;
			}
			else ((ACTION == 3) && (TRIGGER != 3))
			{
				Wiper_ON();
				TRIGGER = ACTION;
				ACTION = 0;
			}
			else if (FUNCTIONALITY == 4)
			{
				Wiper_OFF();
				TRIGGER = ACTION;
				ACTION = 0;
			}
}
}
}
