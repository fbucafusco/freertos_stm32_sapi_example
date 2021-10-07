/*
 * sapi.h
 *
 *  Created on: May 16, 2021
 *      Author: Buck
 */

#ifndef INC_SAPI_H_
#define INC_SAPI_H_

/* abstraccion de sapi  para leds y keys */
#include "main.h"

typedef enum
{
	LED2, LED3
} gpioMap_t ;

typedef struct
{
	GPIO_TypeDef* GPIOx;
	uint16_t GPIO_Pin;
} gpiomap_t;


#define bool_t uint32_t

#define FALSE  0
#define TRUE  (!(FALSE))

#endif /* INC_SAPI_H_ */
