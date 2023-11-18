/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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

#include "main.h"
#include "usart.h"
#include "gpio.h"

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  HAL_Init();
  /*
  RCC_AHB1PeriphClocked(RCC_AHB1Periph_GPIOD, Enable);
  GPIO_InitTypeDef structs = {
    .Pin = GPIO_PIN_12,
    .Mode = GPIO_MODE_OUTPUT_PP,
    .Speed = GPIO_SPEED_FREQ_LOW,
    .Pull = GPIO_NOPULL
  };
  GPIO_Init(GPIOD, &structs);
  */
  while (1)
  {
    // GPIO_SetBits(GPIOD, GPIO_PIN_12); // Turns on

    // GPIO_ResetBits(GPIOD, GPIO_PIN_12); // Turns off
  }
}

