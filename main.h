#ifndef __MAIN_H
#define __MAIN_H

#include "stm32f1xx_hal.h"

// Define GPIO Pins
#define SEAT_SENSOR_GPIO    GPIOA
#define SEAT_SENSOR_PIN     GPIO_PIN_0

#define BELT_SENSOR_GPIO    GPIOA
#define BELT_SENSOR_PIN     GPIO_PIN_1

#define BUZZER_GPIO         GPIOA
#define BUZZER_PIN          GPIO_PIN_5

// Function Prototypes
void SystemClock_Config(void);
void Error_Handler(void);
void MX_GPIO_Init(void);

#endif
