/*
 * fpu.c
 *
 *  Created on: Nov 4, 2023
 *      Author: vikrantshah
 */

#include "fpu.h"


void fpu_enable(void)
{
	/*Enable floating point unit:  Enable CP10 and CP11 full access*/
	SCB->CPACR |= (1U << 20);
	SCB->CPACR |= (1U << 21);
	SCB->CPACR |= (1U << 22);
	SCB->CPACR |= (1U << 23);

}

