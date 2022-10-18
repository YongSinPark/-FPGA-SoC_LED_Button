/*
 * Led.h
 *
 *  Created on: 2022. 10. 18.
 *      Author: kccistc
 */

#ifndef SRC_HW_LED_H_
#define SRC_HW_LED_H_

#include <stdio.h>
#include "xil_printf.h"
#include "xparameters.h"
#include "xgpio.h"
#include "sleep.h"

#define CHANNEL_1 1

XGpio GPIO_LED;

typedef struct _ledInst{

}ledInst;

void Led_Init();
void Led_On();
void Led_Off();
void Led_ShiftRight();
void Led_ShiftLeft();

#endif /* SRC_HW_LED_H_ */
