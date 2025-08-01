/*
 * Copyright (c) 2006-2025, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 *
 *
 * Date           Author       Notes
 * 2025-07-16     RT-Thread    first version
 */

#include <rtthread.h>
#include "bsp_sys.h"

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */
  ledTimer_Init();
  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
      LED_Blink(LED_Name_Debug,1,0,0);
//      LED_Blink(LED_Name_Competition, 1, 0, 0);
//      LED_Blink(LED_Name_Train, 1, 0, 0);
//      LED_Blink(LED_Name_Assess, 1, 0, 0);
      rt_thread_mdelay(500);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}
