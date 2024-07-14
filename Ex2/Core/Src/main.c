/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "software_timer.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */
	void run1(){
		HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, RESET);
					HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, RESET);
					HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, RESET);
	}

	void run2(){
		HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, RESET);
				HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, RESET);
				HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, RESET);
	}

	void run_led(int a){
		 switch(a){
			 case 0:
				 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_SET);

				   break;

			 case 1:
				 HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);


				HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_SET);

				  break;


			 case 2:
				 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
						  		   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
						  		 HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);



						  		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_SET);
						  		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
						  		  break;

			 case 3:
				 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
						   break;


			 case 4:
				 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);

						   break;


			 case 5:
				 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
						   break;
	}
	}
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */
HAL_TIM_Base_Start_IT(&htim2);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
setTimer1(100);
  int count = 11;
  int change = 2;
  while (1){
	  if(timer1_flag == 1){
		  setTimer1(100);
		  HAL_GPIO_TogglePin(Led_GPIO_Port, Led_Pin);

	  --count;
	  if(count > 5){
	  		run_led(count-5);
	  }

	  if(count <= 5 && count > 2){
		  run_led(count-2);
	  }

	  if(count <=2 && count >=0){
		  run_led(count);
	  }


if(change%2 == 0){
	run1();
if (count > 5){HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, SET);}
if(count == 5){
	HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, RESET);
	HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, SET);
	HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, RESET);
	  }
if(count == 2){
	HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, RESET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, RESET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, SET);
  	  }

if(count == 0){
	HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, RESET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, RESET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, RESET);
	  count = 11;
	  change++;
  }
}else if(change%2!=0){
 run2();
 if (count > 5){HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, SET);}
if(count == 5){
	HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, RESET);
		HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, SET);
		HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, RESET);
	  }
if(count == 2){
	HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, RESET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, RESET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, SET);
	  }

if(count == 0){
	HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, RESET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, RESET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, RESET);
	  count = 11;
	  change++;
}
}

	  } //timer

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, Led_Pin|Led_red_Pin|Led_yellow_Pin|Led_green_Pin
                          |red_Pin|yellow_Pin|green_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, seg1_Pin|seg2_Pin|seg3_Pin|seg4_Pin
                          |seg5_Pin|seg6_Pin|seg7_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : Led_Pin Led_red_Pin Led_yellow_Pin Led_green_Pin
                           red_Pin yellow_Pin green_Pin */
  GPIO_InitStruct.Pin = Led_Pin|Led_red_Pin|Led_yellow_Pin|Led_green_Pin
                          |red_Pin|yellow_Pin|green_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : seg1_Pin seg2_Pin seg3_Pin seg4_Pin
                           seg5_Pin seg6_Pin seg7_Pin */
  GPIO_InitStruct.Pin = seg1_Pin|seg2_Pin|seg3_Pin|seg4_Pin
                          |seg5_Pin|seg6_Pin|seg7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	runTimer();
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
