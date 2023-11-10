/*
 * bsp_main.c
 *
 *  Created on: Nov 10, 2023
 *      Author: vikrantshah
 *
 * In this program will use internal button (PC13) and internal led (PA5)
 * when the button is pressed message is sent through UART2 to serial terminal
 * and led will lit up for 3 second. only after led goes off we can press button again.
 *
 * for mac terminal:
 * $ ls /dev/cu.*  ->   $ screen /dev/cu.usbmodem14103 115200
 * to clear terminal CMD + K
 * to terminate terminal CTRL + A then CTRL + \
 *
 */

#include <stdio.h>
#include "stm32f4xx.h"

#include "fpu.h"
#include "timebase.h"
#include "uart.h"

#include "bsp.h"

/*Modules:
 * FPU
 * UART
 * TIMEBASE (Systick Timer)
 * BSP (GPIO)
 */


int main()
{
	fpu_enable();
	debug_uart_init();
	timebase_init();


	/*Initialize LED*/
	led_init();

	/*Initialize Push button*/
	button_init();


	while(1)
	{

		/* enter only button is pressed*/
		if( get_btn_state() )
		{
			led_on();

			printf("Button Pressed...\r\n");

			delay(2000);
		}

		led_off();
	}

}
