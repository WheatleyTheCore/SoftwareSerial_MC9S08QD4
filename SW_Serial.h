/*
 * SWSerial.h
 *
 *  Created on: Jul 17, 2019
 *      Author: Alex
 */

#ifndef SWSERIAL_H_
#define SWSERIAL_H_

void sendByte(uint8_t data);

void serialDelay(void);

extern uint8_t bitcount;
extern volatile int i;

#endif /* SWSERIAL_H_ */
