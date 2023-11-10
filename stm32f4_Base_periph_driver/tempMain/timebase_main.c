/*
 * timebase_main.c
 *
 *  Created on: Nov 10, 2023
 *      Author: vikrantshah
 *
 *
 *  System Timer (SysTick Timer) is Cortex M4(p.g 249) peripheral for time keeping.
 *  We will generate millisecond delay using systick timer
 *
 */


#include <stdio.h>
#include "stm32f4xx.h"

#include "fpu.h"
#include "uart.h"
#include "bsp.h"

#include "timebase.h"

/* Modules:
 *  FPU
 *  UART
 *  TIMEBASE (Systick Timer)
 */

int main()
{
	fpu_enable();
	debug_uart_init();


	/* Initialize the time base for delay */
	timebase_init();

	led_init();


	while(1)
	{
		led_on();
		delay(1000); 	// milli-seconds

		led_off();
		delay(1000);
	}

}
