/*
 * fpu_main.c
 *
 *  Created on: Nov 10, 2023
 *      Author: vikrantshah
 *
 *
 * floating point computation like add, subs, multiply, divide, square etc..
 * Not enabling it will give us an unexpected result (even program crash)
 * IDE won't even give us the reason for the crash.
 *
 */


#include <stdio.h>
#include "stm32f4xx.h"

#include "fpu.h"

/*	Modules:
 * 	FPU
 */


int main()
{
	/*Enable FPU*/
	fpu_enable();

	while(1)
	{


	}

}
