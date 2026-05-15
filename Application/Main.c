#include "xmc_gpio.h"

int main(void) {
  XMC_GPIO_CONFIG_t DIO_LED_cfg = {
    .mode = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
    .output_strength = XMC_GPIO_OUTPUT_STRENGTH_WEAK,
  };
 /* Initialize LED ports */
  XMC_GPIO_Init(P5_8, &DIO_LED_cfg);
  XMC_GPIO_Init(P5_9, &DIO_LED_cfg);

  while (1) {
    XMC_GPIO_ToggleOutput(P5_8);
    for(int i = 1; i < 0xfffff; ++i);
    XMC_GPIO_ToggleOutput(P5_9);
  }

  return 0;
}

/****** End Of File *************************************************/
