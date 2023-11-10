/*
 * i2c.h
 *
 *  Created on: 4 Nov 2023
 *      Author: vikrantshah
 */

#ifndef I2C_H_
#define I2C_H_

#include "stm32f4xx.h"


void i2c1_init(void);

void i2c1_byte_read(char saddr,char maddr, char *data);

void i2c1_burst_read(char saddr, char maddr, char *data, int n);
void i2c1_burst_write(char saddr,char maddr, char *data, int n);

void i2c1_write_byte(char saddr, char maddr, char data);


#endif /* I2C_H_ */
