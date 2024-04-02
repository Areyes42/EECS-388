#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "eecs388_lib.h"

int main()
{
    // initialize UART channels
    ser_setup(0); // uart0 (debug)
    ser_setup(1); // uart1 (raspberry pi)
    
    printf("Setup completed.\n");
    printf("Begin the main loop.\n");
    
    char data[80];
    
    while (1) {
        // YOUR CODE HERE
        if (ser_isready(1)) {
            char data[80];
            ser_readline(1, 80, data);
            ser_printline(0, data);
        }
    }
    return 0;
}