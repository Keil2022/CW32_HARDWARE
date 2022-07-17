#ifndef __APP_H
#define __APP_H

#include "led.h"
#include "key.h"
#include "buzzer.h"

#include "btim.h"
#include "iwdt.h"


void APP_config(void);

void TasksHandle_10MS(void);
void TasksHandle_100MS(void);
void TasksHandle_250MS(void);
void TasksHandle_500MS(void);

#endif


