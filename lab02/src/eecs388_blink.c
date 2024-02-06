#include <stdint.h>

#include "eecs388_lib.h"

/*
  
  
   Task 1.4: Build and deploy/upload the code as is
   
   Task 1.5: Try out debugging. See lab sheet. 
   
   Task 2.1: Review the files eecs388_lib.h and eecs388_lib.c. On vscode, it will usually be on the file browser pane on the left

   Task 2.2: Implement RGB blinky. 

   - set red, green, and blue LEDs for output mode, using the gpio_mode() function
   - in the main loop, turn on/off a different LED at each iteration. 
      for example, 
      at 1st iteration
         turn on RED led
	      delay 500 ms 
	      turn off RED led
	      delay 300 ms.
	   at 2nd iteration
	      do the same but for GREEN led
	   at 3rd iteration
	      do the same but for BLUE led
	   at 4th iteration
	      back to RED led. 
	   ...
   
   - for extra marks, modify your code so that it also flashes the WHITE color
      so sequence would be something like this: RED -> BLUE -> GREEN -> WHITE
*/

int main()
{
   int gpio[] = {RED_LED , GREEN_LED , BLUE_LED};
   for (int i = 0; i < 3; i++)
   {
      gpio_mode(gpio[i], OUTPUT);
   }
   int i = 0;
   while(1)
   {
      gpio_write(gpio[0], ON);
      delay(500);
      gpio_write(gpio[0], OFF);
      delay(500);
      gpio_write(gpio[2], ON);
      delay(500);
      gpio_write(gpio[2], OFF);
      delay(500);
      gpio_write(gpio[1], ON);
      delay(500);
      gpio_write(gpio[1], OFF);
      delay(500);
      gpio_write(gpio[0], ON);
      gpio_write(gpio[2], ON);
      gpio_write(gpio[1], ON);
      delay(500);
      gpio_write(gpio[0], OFF);
      gpio_write(gpio[2], OFF);
      gpio_write(gpio[1], OFF);
      delay(500);
      i = ((i+1) %3);
   }
}