#include <stdio.h>  // include stdio.h header file

int main() {    // main function
    int weight; // declare variable weight
    printf("Enter vehicle weight: ");   // prompt user for input
    scanf("%d", &weight);
    if (weight < 10000) // check if weight is less than 10000
        printf("l\n");
    else if (weight <= 26000 && weight >= 10000)    // check if weight is between 10000 and 26000
        printf("m\n");
    else if (weight >= 26001)   // check if weight is greater than 26001
        printf("h\n");
    else
        printf("Invalid input\n");  // print error message
    return 0;   // return 0 to indicate successful execution
}