/*
 * uart_main.c
 *
 *  Created on: Nov 10, 2023
 *      Author: vikrantshah
 *
 * In thsi project we will use UART2 as debug port,
 * stm32f4xx MCU uses UART2 to connect to computer via SWD.
 *
 * we have redirected printf to send char via USART2
 *
 * for mac terminal:
 * $ ls /dev/cu.*  ->   $ screen /dev/cu.usbmodem14103 115200
 * to terminate terminal CTRL + A then CTRL + \
 *
 */

#include <stdio.h>
#include "stm32f4xx.h"

#include "fpu.h"
#include "timebase.h"

#include "uart.h"


/*Modules:
 * FPU
 * UART
 * TIMEBASE(systick timer)
 */


int main()
{
	fpu_enable();
	timebase_init();

	/* Initialize USART2 Peripheral */
	debug_uart_init();



	while(1)
	{
		printf("Hello from STM32..\n\r");	// send given string to serial terminal

		delay(1000);						// DELAY of 1 second using systick timer
	}

}

