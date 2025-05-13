  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
      // IF Button Is Pressed
      if(HAL_GPIO_ReadPin (GPIOC, GPIO_PIN_14))
      {
          // Set The LED ON!
          HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
      }
      else
      {
          // Else .. Turn LED OFF!
          HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
      }
  }
  /* USER CODE END 3 */
}
