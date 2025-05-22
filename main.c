#include "main.h"

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();

  while (1)
  {
    // Read sensor states
    GPIO_PinState seatOccupied = HAL_GPIO_ReadPin(SEAT_SENSOR_GPIO, SEAT_SENSOR_PIN);
    GPIO_PinState beltFastened = HAL_GPIO_ReadPin(BELT_SENSOR_GPIO, BELT_SENSOR_PIN);

    if (seatOccupied == GPIO_PIN_SET && beltFastened == GPIO_PIN_RESET)
    {
      // Seat is occupied and belt is not fastened
      HAL_GPIO_WritePin(BUZZER_GPIO, BUZZER_PIN, GPIO_PIN_SET);
    }
    else
    {
      // No warning
      HAL_GPIO_WritePin(BUZZER_GPIO, BUZZER_PIN, GPIO_PIN_RESET);
    }

    HAL_Delay(200); // Delay for polling
  }
}
