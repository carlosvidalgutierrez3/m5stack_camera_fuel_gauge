 /* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include "xtensa/config/core.h"
extern "C" {
  #include <stdio.h>
  #include "sdkconfig.h"
  #include "freertos/FreeRTOS.h"
  #include "freertos/task.h"
  #include "esp_system.h"
  #include "esp_spi_flash.h"

  

}

#include "DFRobot_MAX17043.h"
#include "Arduino.h"
#include "Wire.h"

extern "C" void app_main(void)
{
  printf("Set up...\n");
 // /*
  DFRobot_MAX17043 Gauge;
  
  Wire.begin(4, 13);
	int counter = 0;
	while(counter < 5) {
		if(Gauge.begin() != 0) {
      printf("GAUGE BEGIN FAILED");
			vTaskDelay(2000 / portTICK_PERIOD_MS);
			counter++;
		} else {
			vTaskDelay(2000 / portTICK_PERIOD_MS);
      printf("GAUGE INIT SUCCESS!");
			counter = 5;
		}
	}
//*/
  while(true){
    #ifdef ARDUINO_H_INCLUDED
      printf("Arduino.h was added indeed!");
    #endif
    printf("Hello world! Json Added AGAIN!\n");

    for (int i = 3; i >= 0; i--) {
        printf("Restarting in %d seconds...\n", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    printf("Gauge.readPercentage(): %f %% \n", Gauge.readPercentage());
    vTaskDelay(5000 / portTICK_PERIOD_MS);
    printf("Gauge.readVoltage(): %f V\n", Gauge.readVoltage());
    vTaskDelay(5000 / portTICK_PERIOD_MS);

    printf("Restarting now.\n");
    fflush(stdout);
  }
    
}
