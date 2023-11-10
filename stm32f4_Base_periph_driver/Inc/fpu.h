/*
 * fpu.h
 *
 *  Created on: Nov 4, 2023
 *      Author: vikrantshah
 *
 * Cortex M4 (generic user guide p.g 264) guides us to enable and configure.
 *
 * SCB   = System Control Bit (Address to access Cortex m4 processor control block)
 * CAPCR = Co-processor Access Control Register
 * CP11[22:23]  and CP10[20:21]  give full access by 0b11 on each bit fields.
 */

#ifndef FPU_H_
#define FPU_H_

#include "stm32f4xx.h"


void fpu_enable(void);


#endif /* FPU_H_ */
