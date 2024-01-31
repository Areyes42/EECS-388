#include <stdio.h>  // include stdio.h header file

int main()  // main function
{
    char choice;    // declare variable choice
    printf("Do you want binary-to-hex or hex-to-binary? ");   // prompt user for input
    scanf(" %c", &choice);  // read input and store in variable
    
    if (choice == 'h')  // check if choice is h
    {
        long int binary = 0;    // initialize variable binary
        printf("Please enter a hex number: ");  // prompt user for input
        scanf("%lx", &binary);  // read input and store in variable
        
        printf("Equivalent binary value: ");    // print message
        int leadingZeros = 0;   // initialize variable leadingZeros
        for (int i = 31; i >= 0; i--)   // loop from 31 to 0
        {
            if (((binary >> i) & 1) == 0)   // check if bit is 0
            {
                leadingZeros++; // increment leadingZeros
            }
            else
            {
                break;
            }
        }
        
        for (int i = 31 - leadingZeros; i >= 0; i--)    // loop from 31 - leadingZeros to 0
        {
            printf("%ld", (binary >> i) & 1);   // print bit
        }
    }

    else if (choice == 'b') // check if choice is b
    {
        long int binary = 0;    // initialize variable binary
        printf("Please enter a binary number: ");   // prompt user for input
        scanf("%ld", &binary);  // read input and store in variable
        
        long int hexadecimal = 0, i = 1;    // initialize variables hexadecimal and i
        while (binary != 0) // loop while binary is not 0
        {
            hexadecimal += (binary % 10) * i;   // add remainder * i to hexadecimal
            i *= 2; // multiply i by 2
            binary /= 10;   // divide binary by 10
        }
        
        printf("Equivalent hexadecimal value: %lX", hexadecimal);   // print message
    }   
        
        else    // if choice is not h or b
        {
            printf("Invalid input\n");  // print error message
        }
    return 0;   // return 0 to indicate successful execution
}