/**
 ******************************************************************************
 * @file           : main.c
 *
 *
 ***** USE CODES IN tempMain FOLDER TO TEST RESPECTIVE MCU's PERIPHERALS *****
 *
 * Bare-metal driver for stm32f4
 * Basic peripheral drivers
 *
 *
 * DEMO PROJECT - when user_btn (PC-13) is pressed, led (PA-5) will turn on for
 * 5 seconds and UART2 will send user message which can be viewed in a serial monitor
 *
 * for mac terminal:
 * $ ls /dev/cu.*  ->   $ screen /dev/cu.usbmodem14103 115200
 * to terminate terminal CTRL + A then CTRL + \
 *
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdint.h>

#include "stm32f4xx.h"

#include "fpu.h"
#include "timebase.h"
#include "bsp.h"
#include "uart.h"
#include "adc.h"
#include "spi.h"
#include "i2c.h"




int main(void)
{
	/* Enable FPU for floating point computation */
	fpu_enable();

	/* Initialize systick timebase for delay implementation */
	timebase_init();


	/* Initialize stm32f446 internal LED-2 (PA-5) */
	led_init();

	/* Initialize stm32f446 user button (PC-13) */
	button_init();


	/* Initialize UART2 (SWD port) for serial communication */
	debug_uart_init();


	while(1)
	{
		/* enter only button is pressed*/
		if( get_btn_state() )
		{
			led_on();

			printf("Button Pressed...\r\n");  // send string via UART2

			delay(3000);	// 3 seconds delay
		}

		led_off();
	}

}
