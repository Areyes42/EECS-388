/**
 * This program reads the distance data from the TFmini lidar sensor,  
 * prints the read data and controls an LED depending on the measured distance.
 */
#include <stdint.h>
#include <stdio.h>

#include "eecs388_lib.h"

int main()
{
    gpio_mode(RED_LED, OUTPUT);
    gpio_mode(GREEN_LED, OUTPUT);
    ser_setup();

    ser_printline("Setup completed.\n"); //ser_printline() can be used to print to the serial monitor

    /* 
        LIDAR distance data is 16 bits.
    */
    int dist; // read distance value.

    while (1) {
        /* 
            Task 2.1: 
            - read a data frame from the TFmini sensor
            
            - from Table 6, we know each LIDAR measurement sends 9 bytes
            - the function `ser_read()` can process 1 byte per function call

            - This if-statement below will read (and check) the first two bytes of a valid data frame
            - You will need to write code to read the subsequent bytes to get the distance data
            - You will need to process the data received from the sensor to get the correct distance value
        */
        if ('Y' == ser_read() && 'Y' == ser_read()) {
            //store the Dist_L and Dist_H in a variable by ser_read()
            int16_t d1 = ser_read();
            int16_t d2 = ser_read();
            //formula to make the distance into a 16 bit
            dist = (d2 << 8) | d1;
            printf("distance is %d\n", dist);
            // ser_read() 5 times to read data frame that is not used in lab
            for (int i = 0; i < 5; i++) {
                ser_read();
        }
            if (dist < 50)
    {
            gpio_write(GREEN_LED, OFF);
            gpio_write(RED_LED, ON);
            }       
            else if (dist > 50)
            {
            gpio_write(GREEN_LED, ON);
            gpio_write(RED_LED, OFF);
            }
        }
    }
}