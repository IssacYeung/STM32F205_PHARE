
//#include "stm32f2xx_hal.h"
#include "cmsis_os.h"
#include "led/bsp_led.h"

int counter = 0;

void vTaskLED(void *pvParameters)
{
	while(1)
	{
		switch (counter) 
		{
			case 1:
				LED1_TOGGLE;
				break;
			case 2:
				LED2_TOGGLE;
				break;
			case 3:
				LED3_TOGGLE;
				break;
			case 4:
				LED4_TOGGLE;
				break;
			case 5:
				counter = 0;
				break;
		}
		counter ++;
		vTaskDelay(1000);
	}
}





