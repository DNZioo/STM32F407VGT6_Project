/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TRIG_PIN_Pin GPIO_PIN_8
#define TRIG_PIN_GPIO_Port GPIOE
#define ECHO_PIN_Pin GPIO_PIN_9
#define ECHO_PIN_GPIO_Port GPIOE
#define PIN_CLK_TIM1637_Pin GPIO_PIN_6
#define PIN_CLK_TIM1637_GPIO_Port GPIOC
#define PIN_DIO_TM1637_Pin GPIO_PIN_7
#define PIN_DIO_TM1637_GPIO_Port GPIOC
#define I2C1_SCL_BME280_Pin GPIO_PIN_6
#define I2C1_SCL_BME280_GPIO_Port GPIOB
#define I2C1_SDA_BME280_Pin GPIO_PIN_7
#define I2C1_SDA_BME280_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
