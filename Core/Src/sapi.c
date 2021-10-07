/*
 * sapi.c
 *
 *  Created on: May 16, 2021
 *      Author: Buck
 */
#include "sapi.h"


gpiomap_t gpiomap [] =
{
	[LED2] = { GPIOB , LED2_Pin } ,
	[LED3] = { GPIOC , LED3_WIFI__LED4_BLE_Pin } ,
};


bool_t gpioWrite( gpioMap_t pin , bool_t value )
{
	HAL_GPIO_WritePin( gpiomap[pin].GPIOx ,  gpiomap[pin].GPIO_Pin , value);

    return 0;
}


bool_t gpioRead( gpioMap_t pin )
{
	GPIO_PinState state = HAL_GPIO_ReadPin( gpiomap[pin].GPIOx ,  gpiomap[pin].GPIO_Pin);

   return state;
}

uint32_t gpioToggle( gpioMap_t pin )
{
   return gpioWrite( pin , !gpioRead(pin) );
}
