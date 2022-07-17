#ifndef __LED_H
#define __LED_H

#include "config.h"

#define LED_CLK_ENABLE	__RCC_GPIOC_CLK_ENABLE()

#define LED_GPIO 		CW_GPIOC
#define LED_GPIO_PIN 	(GPIO_PIN_13)
#define LED_GPIO_SPEED 	GPIO_SPEED_HIGH
#define LED_GPIO_MODE	GPIO_MODE_OUTPUT_PP

#define LED_OFF			GPIO_WritePin(LED_GPIO, LED_GPIO_PIN, GPIO_Pin_SET);	//GPIO_Pin_SET / GPIO_Pin_RESET

void LED_Configuration(void);

#endif


