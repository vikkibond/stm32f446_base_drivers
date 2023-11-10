/*
 * bsp.h
 *
 *  Created on: 4 Nov 2023
 *      Author: vikrantshah
 */

#ifndef BSP_H_
#define BSP_H_

#include <stdbool.h>
#include "stm32f4xx.h"


void led_init(void);

void led_on(void);
void led_off(void);

void button_init(void);
bool get_btn_state(void);


#endif /* BSP_H_ */
